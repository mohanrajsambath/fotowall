/***************************************************************************
 *                                                                         *
 *   This file is part of the FotoWall project,                            *
 *       http://code.google.com/p/fotowall                                 *
 *                                                                         *
 *   Copyright (C) 2009 by Enrico Ros <enrico.ros@gmail.com>               *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef __TextConfig_h__
#define __TextConfig_h__

#include "AbstractConfig.h"
class QListWidgetItem;
class Bezier;
class RichTextEditorDialog;
class TextContent;


class TextConfig : public AbstractConfig {
    public:
        TextConfig(TextContent * textContent, QGraphicsItem * parent = 0);
        ~TextConfig();

    protected:
        // ::AbstractConfig
        void closing();

    private:
        TextContent * m_textContent;
        RichTextEditorDialog * m_editor;
        Bezier * m_bezierWidget;
};

#endif