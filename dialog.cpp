#include "dialog.h"
#include "ui_dialog.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Dialog::Dialog
/// \param parent
///
///
#include <fstream>
#include <iterator>
#include <string>
#include <vector>
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
  //  std::vector<std::string> example { "This", "is", "a", "test" };
     std::vector<unsigned long long> example { 0, 288, 376, 444444 };
    
    std::ofstream output_file("/home/viktor/my_projects_qt_2/zapisy_vector_v_file/example.txt");
    
    std::ostream_iterator<unsigned long long> output_iterator(output_file, "\n");
    std::copy(std::begin(example), std::end(example), output_iterator); 
/// 
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
}

Dialog::~Dialog()
{
    delete ui;
}

