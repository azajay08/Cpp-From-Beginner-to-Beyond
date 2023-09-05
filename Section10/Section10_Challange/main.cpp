#include <iostream>

using namespace std;

int main()
{
	string alphabet {"abcdefghijlkmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	string key {"ZXVTRPNLJHFDBYWUSQOMKIGECAzxvtrpnljhfdbywusqomkigeca"};
	
	string secret_message {};
	cout << "Please enter your secret message: ";
	getline(cin, secret_message);
	
	string encrypted_message {};
	
	cout << "\nEncrypting message..." << endl;
	
	for (char c: secret_message) {
		size_t i = alphabet.find(c);
		if (i != string::npos)
			encrypted_message += key[i];
		else
			encrypted_message += c;
	}
	cout << "\nEncrypted message: " << encrypted_message << endl;
	
	string decrypted_message {};
	cout << "\nDecrypting message..." << endl;
	
	for (char c: encrypted_message) {
		size_t i = key.find(c);
		if (i != string::npos)
			decrypted_message += alphabet[i];
		else
			decrypted_message += c;
	}
	
	cout << "\nDecrypted message: " << decrypted_message << endl;
	
	return 0;
}
