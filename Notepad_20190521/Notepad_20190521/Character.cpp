#include "Character.h"
#include <string>
using namespace std;
//Character
Character::Character() {
}
Character::Character(const Character& source) {
}
Character::~Character() {
}


//SingleByteCharacter
SingleByteCharacter::SingleByteCharacter() {
	this->content = '\0';
}
SingleByteCharacter::SingleByteCharacter(char content) {
	this->content = content;
}
SingleByteCharacter::SingleByteCharacter(const SingleByteCharacter& source) {

	this->content = source.content;
}
SingleByteCharacter::~SingleByteCharacter() {
}
SingleByteCharacter& SingleByteCharacter::operator =(const SingleByteCharacter& source) {
	this->content = source.content;
	return *this;
}
bool SingleByteCharacter::IsEqual(const SingleByteCharacter& other) {
	bool ret = false;
	if (this->content == other.content) {
		ret = true;
	}
	return ret;
}
bool SingleByteCharacter::IsNotEqual(const SingleByteCharacter& other) {
	bool ret = false;
	if (this->content != other.content) {
		ret = true;
	}

	return ret;
}
string SingleByteCharacter::GetContent() {
	string content;
	if (this->content != '\t') {
		content = this->content;
	}
	else {
		content = "        ";
	}

	return content;
}

Glyph* SingleByteCharacter::Clone() {
	return new SingleByteCharacter(*this);
}

bool SingleByteCharacter::operator ==(const SingleByteCharacter& other) {
	bool ret = false;
	if (this->content == other.content) {
		ret = true;
	}

	return ret;
}
bool SingleByteCharacter::operator !=(const SingleByteCharacter& other) {
	bool ret = false;
	if (this->content != other.content) {
		ret = true;
	}

	return ret;
}


//DoubleByteCharacter
DoubleByteCharacter::DoubleByteCharacter() {
	this->content[0] = '\0';
	this->content[1] = '\0';
}
DoubleByteCharacter::DoubleByteCharacter(const char(*content)) {
	this->content[0] = content[0];
	this->content[1] = content[1];
}
DoubleByteCharacter::DoubleByteCharacter(const DoubleByteCharacter& source) {
	this->content[0] = source.content[0];
	this->content[1] = source.content[1];
}
DoubleByteCharacter::~DoubleByteCharacter() {

}
DoubleByteCharacter& DoubleByteCharacter::operator =(const DoubleByteCharacter& source) {
	this->content[0] = source.content[0];
	this->content[1] = source.content[1];

	return *this;
}
bool DoubleByteCharacter::IsEqual(const DoubleByteCharacter& other) {
	bool ret = false;
	if (this->content[0] == other.content[0] &&
		this->content[1] == other.content[1]) {
		ret = true;
	}
	return ret;
}
bool DoubleByteCharacter::IsNotEqual(const DoubleByteCharacter& other) {
	bool ret = false;
	if (this->content[0] != other.content[0] ||
		this->content[1] != other.content[1]) {
		ret = true;
	}
	return ret;
}
bool DoubleByteCharacter::operator ==(const DoubleByteCharacter& other) {
	bool ret = false;
	if (this->content[0] == other.content[0] &&
		this->content[1] == other.content[1]) {
		ret = ret;
	}
	return true;
}
bool DoubleByteCharacter::operator !=(const DoubleByteCharacter& other) {
	bool ret = false;
	if (this->content[0] != other.content[0] ||
		this->content[1] != other.content[1]) {
		ret = true;
	}
	return ret;
}
string DoubleByteCharacter::GetContent() {
	char content[3];
	content[0] = this->content[0];
	content[1] = this->content[1];
	content[2] = '\0';

	return content;
}

Glyph* DoubleByteCharacter::Clone() {
	return new DoubleByteCharacter(*this);
}