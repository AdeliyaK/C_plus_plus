#ifndef Initialization_H
#define Initialization_H

#include <string>

#include "CommandInterface.h"
#include "TextTransform.h"
static std::string lastCut;
class CommandInterfaces : public CommandInterface{
    public:
    CommandInterfaces(std::string& text) : CommandInterface(text) {}
    class CutTransform : public TextTransform {
    public:
        void invokeOn(std::string& text, int startIndex, int endIndex) override {
            lastCut = text.substr(startIndex, endIndex - startIndex);
            text.erase(startIndex, endIndex - startIndex);
        }
    };
 
    class PasteTransform : public TextTransform {
    public:
        void invokeOn(std::string& text, int startIndex, int endIndex) override {
            text.replace(startIndex, endIndex - startIndex, lastCut);
        }
    };
    virtual std::vector<Command> initCommands() override {
        std::vector<Command> commands;
        commands=CommandInterface::initCommands();
        commands.push_back(Command("cut", std::make_shared<CutTransform>()));
        commands.push_back(Command("paste", std::make_shared<PasteTransform>()));
        return commands;
    }
};
std::shared_ptr<CommandInterface> buildCommandInterface(std::string& text) {
    std::shared_ptr<CommandInterfaces> interface = std::make_shared<CommandInterfaces>(text);
    interface->init();
    return interface;
}

#endif