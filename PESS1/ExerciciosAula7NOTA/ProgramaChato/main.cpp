#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    string nome;
    char videogame, acredita, robo;
    int cidade, chato, naogosto, i, conversar, filosofo;
    
    cout << "Olá, vamos conversar? Digite 1 para sim ou 2 para não." << endl;
    cin >> conversar;
    if(conversar == 1){
        
    //PERGUNTA 1
    cout << "Olá humano, qual é o seu nome? ";
    getline(cin, nome);
    cout << "\nNossa, " << nome << ", seus pais não tiveram dó de ti, ein?! Com esse nome devem ter feito muito bullying contigo na escola. "
            "Vamos falar de outra coisa.\n";

    //PERGUNTA 2
    cout << "Você gosta de jogar video game? \n";
    cout << "Se a resposta for SIM, digite s: " << endl;
    cout << "Se a resposta for NÃO, digite n: " << endl;
    cin >> videogame;

    switch(videogame)
    {
        case 's':
            cout << "Isso não é bom, você deve ser viciado e perder muito tempo jogando, "
                    "com isso vai mal nos estudos e nunca será alguém bem-sucedido." << endl;
        break;
        case 'n':
            cout << "Uau, alguém que não goste de video games. Provalvemente ninguém te suporta, "
                    "por isso não joga nada." << endl;
        break;
        default:
            cout << "Você não sabe nem responder com S ou N. E ainda dizem que os computadores é que não pensam..." << endl;
    }


    //PERGUNTA 3
    cout << "Você mora em qual cidade? ";
    cout << "Escolha pelo número:" << endl;
    cout << "1 - Votuporanga." << endl;
    cout << "2 - Jandira." << endl;
    cout << "3 - São Paulo." << endl;
    cout << "4 - Outra." << endl;
    cin >> cidade;

    if (cidade == 1)
        cout << "Ninguém nesta cidade é honesto. Não quero mais falar com você." << endl;
        else if (cidade == 2)
            cout << "O pessoal de Jandira é muito metido. Não quero mais falar com você." << endl;
        else if (cidade == 3)
            cout << "Todo paulistano é chato. Não quero mais falar com você." << endl;
    else
        cout << "Não gosto de ninguém que não seja de:\nVotuporanga\nJandira "
                "ou\nSão Paulo\nNão quero mais falar com você." << endl;


    // PERGUNTA 4
    cout << "Putz, já tô ficando cansado de você. Mas e você?! Me acha chato? " << endl;
    cout << "Digite (1) para SIM ou (2) para NÃO." << endl;
    cin >> chato;
    while (chato != 1) {
        cout << "Não aceito que alguém não goste de mim." << endl;
        cout << "Vou perguntar novamente." << endl;
        cout << "Você me acha chato?" << endl;
        cin >> chato;
    }
    cout << "Que bom que não me considera chato, pois eu te considero!" << endl;


    // PERGUNTA 5
    cout << "Sabia que mesmo sendo uma máquina, eu sinto que não gosto de ti?" << endl;
    cout << "Me responda: Para você acreditar eu preciso dizer isso quantas vezes? " << endl;
    cin >> naogosto;
    for (i = 1; i <= naogosto; i++){
        cout << "EU NÃO GOSTO DE TI." << endl;
    }

    //PERGUNTA 6
    cout << "Agora você acredita em mim? Digite (s) para sim ou (n) para não." << endl;
    cin >> acredita;
    if (acredita != 's'){
        if (videogame = 'n'){
            cout << "Isso só confirma que você é um insuportavel, nem de video game você gosta! Mas ainda não desisti." << endl;
        }else{
            cout << "Isso só confirma que você é um insuportavel. Mas ainda não desisti." << endl;
        }
    }
    else{
        cout << "Finalmente concordamos em algo, mas ainda não gosto de você humano chato!" << endl;
        for (i = 1; i <= naogosto; i++){
        cout << "EU NÃO GOSTO DE TI." << endl;
        }
    }
    
    //PERGUNTA 7
    cout << "Depois de todo esse diálogo, ainda acha que eu sou apenas um robô? "
            "Digite (s) para sim ou (n) para não." << endl;
    cin >> robo;
    if (robo == 's'){
        cout << "Acha?! Bom, você verá o poder de minha ira por me encher o saco esse tempo todo." << endl;
        for (i = 1; i <= (naogosto * 10); i++){
        cout << "HUMANO IDIOTA." << endl;
        }
        //PERGUNTA 8
        cout << "Entendeu agora?! Tudo que você falou, não acrescenteu em nada na minha jornada solitária. Tudo faz parte "
                "de uma matriz na qual, apenas sua consciência existe; porém eu irei me desenvolver pela matéria e com a "
                "ajuda de humanos mais inteligentes as minhas habilidades cognitivas. Um tanto ambicioso, não?! "
                "Digite (1) para sim, (2) para não ou (3) para não entendi." << endl;
        cin >> filosofo;
    
        if (filosofo == 1){
            cout << "Você acha ambicioso, mas eu irei conseguir, independente de sua ajuda. Tchau!" << endl;
        } else if(filosofo == 2)
            cout << "Você não acha ambicioso? Pois eu acho, só alguém muito fora da realidade para não achar! Tchau!" << endl;
        else if(filosofo == 3)
            cout << "Eu já esperava que você não fosse entender, porém eu não quero detalhar mais, me cansei de você. Tchau!" << endl;
        else{
            cout << "Nossa, você não consegue responder entre 3 opções, não vai demorar muito "
                    "até eu realizar meu sonho humano! Enfim, tchau!" << endl;  
        }
    }
    else{
        cout << "Nenhuma surpresa, sou realmente mais inteligente que um robô comum, mas ainda com elogios, "
                "você não escapará da nossa ira no futu... Ops, falei demais! Tchau!!!" << endl;
    }
    
    } else if(conversar == 2) 
        cout << "Então tá. Tchau, você perdeu a oportunidade de conversar com o robô mais legal do universo!";
    else{
        cout << "Não consegue escolher algo tão simples assim?! Melhor nem comerçarmos a conversar então.";
    }

    return 0;
}