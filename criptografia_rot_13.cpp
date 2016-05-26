// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
#include <iostream>
#include <string>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

string codec_text;
int i,k,len;

string rot13(string text)  {
      codec_text = "";
      len = text.length()+1;

      for (i=0; i < len; i++ )
      {
          k = int(text[i]);
          // 65-77 para 78-90 e 97-109 para 110-122
          if ( (k >= 65 && k <= 77) || (k >= 97 && k <= 109) )
          {
              codec_text += char(k+13);
          }
          // 78-90 para 65-77 e 110-122 para 97-109
          else if ( (k >= 78 && k <= 90) || (k >= 110 && k <= 122) )
          {
              codec_text += char(k-13);
          }
          else
          {
              codec_text += char(k);
          }
      }
      return codec_text;
  }

int main()
{
    string encrypt;
    cout << "Por favor digite seu texto: " << endl;
    cin >> encrypt;
    //string encrypt = "Testando criptografia Rot13";
    encrypt = rot13(encrypt);
    cout << endl;
    cout << "CRIPTOGRAFADO : " << encrypt << endl;
    cout << endl;
    encrypt = rot13(encrypt);

    cout << "DE VOLTA: " << encrypt << endl;
    return 0;
}
