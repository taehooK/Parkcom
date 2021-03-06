#ifndef _FONT_H
#define _FONT_H

#include <afxwin.h>

class NotepadForm;
class Font {
public:
	Font(NotepadForm *notepadForm = 0);
	Font(LOGFONT font, COLORREF color, NotepadForm *notepadForm);
	Font(const Font& source);
	~Font();
	void Create(CFont& font);
	Font& operator =(const Font& source);
	LOGFONT& GetFont() const;
	COLORREF& GetColor() const;
private:
	LOGFONT font;
	COLORREF color;
	NotepadForm *notepadForm;
};
inline LOGFONT& Font::GetFont() const {
	return const_cast<LOGFONT&>(this->font);
}
inline COLORREF& Font::GetColor() const {
	return const_cast<COLORREF&>(this->color);
}

#endif //_FONT_H