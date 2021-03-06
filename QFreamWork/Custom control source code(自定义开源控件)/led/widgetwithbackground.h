/***************************************************************************
 *   Copyright (C) 2006-2008 by Tomasz Ziobrowski                          *
 *   http://www.3electrons.com                                             *
 *   e-mail: t.ziobrowski@3electrons.com                                   *
 *                                                                         *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef WIDGETWITHBACKGROUND_H
#define WIDGETWITHBACKGROUND_H

#include <QWidget>

class QPixmap;

class WidgetWithBackground : public QWidget
{
	Q_OBJECT
  public:
     /**????*/
     WidgetWithBackground(QWidget * parent = 0);

     /** ???? - ?????*/
     ~WidgetWithBackground ();

     /**
      * ???????  -
      * ?????????????? -
      * ?????,???.
      */
     void  drawBackground ();

     /** ????????????????*/
     void  updateWithBackground ();
    
     /** 
     * ?????????????
     * ????????????????
     * ??????????????????
     * ????????.
     */ 
     bool doRepaintBackground(); 
     
  protected:
    /** ??paintBackground - ?????? */
    void repaintBackground();

    /**
     * ?????????
     * @param painter
     * @param ????????
     */
    virtual void  paintBackground (QPainter & painer) = 0;
    
    

  protected:
     /** ???????*/
     QPixmap * m_pixmap;
     /**
     * ?????????
     */
     bool m_modified;
};
#endif //WIDGETWITHBACKGROUND_H

