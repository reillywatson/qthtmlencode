#pragma once

// Qt includes
#include <QString>

class HtmlEncodedString : public QString {
public:
    HtmlEncodedString(const QString& text);
	static QString encodedString(const QString& text);
};
