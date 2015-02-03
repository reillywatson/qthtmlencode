#ifndef __HTML_ENCODED_STRING_H__
#define __HTML_ENCODED_STRING_H__

#include <QString>

class HtmlEncodedString : public QString
{
public:
	HtmlEncodedString (const QString& text);
	static QString encodedString(const QString& text);
};
#endif
