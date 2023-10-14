#ifndef MACHINE_GUI_HPP
#define MACHINE_GUI_HPP
#include "Machine.hpp"
#include "Sink.hpp"
#include "EnigmaMachine.hpp"

class MachineGUI : public QMainWindow{
        Q_OBJECT
    
    public:
        MachineGUI(Transformer* transformer, QWidget* parent = 0);
        
    public slots:
        // Calls machines load_rotor_file one rotor at a time.
        void load_rotor_files();
        // Calls machines load_plug_file function.
        void load_plug_file();
        // Calls machines encrypt function one character at a time from the input text box.
        void encrypt_text();
    
    private:
        Sink* m_sink;
        Transformer* m_machine;
        Ui::EnigmaMachine ui;
};

#endif
