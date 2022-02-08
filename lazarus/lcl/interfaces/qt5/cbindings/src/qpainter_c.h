//******************************************************************************
//  Copyright (c) 2005-2013 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#ifndef QPAINTER_C_H
#define QPAINTER_C_H

#include <QtGui>
#include "pascalbind.h"

C_EXPORT QPainterH QPainter_Create();
C_EXPORT void QPainter_Destroy(QPainterH handle);
C_EXPORT QPainterH QPainter_Create2(QPaintDeviceH AnonParam1);
C_EXPORT QPaintDeviceH QPainter_device(QPainterH handle);
C_EXPORT bool QPainter_begin(QPainterH handle, QPaintDeviceH AnonParam1);
C_EXPORT bool QPainter_end(QPainterH handle);
C_EXPORT bool QPainter_isActive(QPainterH handle);
C_EXPORT void QPainter_initFrom(QPainterH handle, const QPaintDeviceH device);
C_EXPORT void QPainter_setCompositionMode(QPainterH handle, QPainter::CompositionMode mode);
C_EXPORT QPainter::CompositionMode QPainter_compositionMode(QPainterH handle);
C_EXPORT const QFontH QPainter_font(QPainterH handle);
C_EXPORT void QPainter_setFont(QPainterH handle, const QFontH f);
C_EXPORT void QPainter_fontMetrics(QPainterH handle, QFontMetricsH retval);
C_EXPORT void QPainter_fontInfo(QPainterH handle, QFontInfoH retval);
C_EXPORT void QPainter_setPen(QPainterH handle, const QColorH color);
C_EXPORT void QPainter_setPen2(QPainterH handle, const QPenH pen);
C_EXPORT void QPainter_setPen3(QPainterH handle, Qt::PenStyle style);
C_EXPORT const QPenH QPainter_pen(QPainterH handle);
C_EXPORT void QPainter_setBrush(QPainterH handle, const QBrushH brush);
C_EXPORT void QPainter_setBrush2(QPainterH handle, Qt::BrushStyle style);
C_EXPORT const QBrushH QPainter_brush(QPainterH handle);
C_EXPORT void QPainter_setBackgroundMode(QPainterH handle, Qt::BGMode mode);
C_EXPORT Qt::BGMode QPainter_backgroundMode(QPainterH handle);
C_EXPORT void QPainter_brushOrigin(QPainterH handle, PQtPoint retval);
C_EXPORT void QPainter_setBrushOrigin(QPainterH handle, int x, int y);
C_EXPORT void QPainter_setBrushOrigin2(QPainterH handle, const QPointH AnonParam1);
C_EXPORT void QPainter_setBrushOrigin3(QPainterH handle, const QPointFH AnonParam1);
C_EXPORT void QPainter_setBackground(QPainterH handle, const QBrushH bg);
C_EXPORT const QBrushH QPainter_background(QPainterH handle);
C_EXPORT qreal QPainter_opacity(QPainterH handle);
C_EXPORT void QPainter_setOpacity(QPainterH handle, qreal opacity);
C_EXPORT void QPainter_clipRegion(QPainterH handle, QRegionH retval);
C_EXPORT void QPainter_clipPath(QPainterH handle, QPainterPathH retval);
C_EXPORT void QPainter_setClipRect(QPainterH handle, const QRectFH AnonParam1, Qt::ClipOperation op);
C_EXPORT void QPainter_setClipRect2(QPainterH handle, PRect AnonParam1, Qt::ClipOperation op);
C_EXPORT void QPainter_setClipRect3(QPainterH handle, int x, int y, int w, int h, Qt::ClipOperation op);
C_EXPORT void QPainter_setClipRegion(QPainterH handle, const QRegionH AnonParam1, Qt::ClipOperation op);
C_EXPORT void QPainter_setClipPath(QPainterH handle, const QPainterPathH path, Qt::ClipOperation op);
C_EXPORT void QPainter_setClipping(QPainterH handle, bool enable);
C_EXPORT bool QPainter_hasClipping(QPainterH handle);
C_EXPORT void QPainter_clipBoundingRect(QPainterH handle, QRectFH retval);
C_EXPORT void QPainter_save(QPainterH handle);
C_EXPORT void QPainter_restore(QPainterH handle);
C_EXPORT void QPainter_setMatrix(QPainterH handle, const QMatrixH matrix, bool combine);
C_EXPORT const QMatrixH QPainter_matrix(QPainterH handle);
C_EXPORT const QMatrixH QPainter_deviceMatrix(QPainterH handle);
C_EXPORT void QPainter_resetMatrix(QPainterH handle);
C_EXPORT void QPainter_setTransform(QPainterH handle, const QTransformH transform, bool combine);
C_EXPORT const QTransformH QPainter_transform(QPainterH handle);
C_EXPORT const QTransformH QPainter_deviceTransform(QPainterH handle);
C_EXPORT void QPainter_resetTransform(QPainterH handle);
C_EXPORT void QPainter_setWorldMatrix(QPainterH handle, const QMatrixH matrix, bool combine);
C_EXPORT const QMatrixH QPainter_worldMatrix(QPainterH handle);
C_EXPORT void QPainter_setWorldTransform(QPainterH handle, const QTransformH matrix, bool combine);
C_EXPORT const QTransformH QPainter_worldTransform(QPainterH handle);
C_EXPORT void QPainter_combinedMatrix(QPainterH handle, QMatrixH retval);
C_EXPORT void QPainter_combinedTransform(QPainterH handle, QTransformH retval);
C_EXPORT void QPainter_setMatrixEnabled(QPainterH handle, bool enabled);
C_EXPORT bool QPainter_matrixEnabled(QPainterH handle);
C_EXPORT void QPainter_setWorldMatrixEnabled(QPainterH handle, bool enabled);
C_EXPORT bool QPainter_worldMatrixEnabled(QPainterH handle);
C_EXPORT void QPainter_scale(QPainterH handle, qreal sx, qreal sy);
C_EXPORT void QPainter_shear(QPainterH handle, qreal sh, qreal sv);
C_EXPORT void QPainter_rotate(QPainterH handle, qreal a);
C_EXPORT void QPainter_translate(QPainterH handle, const QPointFH offset);
C_EXPORT void QPainter_translate2(QPainterH handle, const QPointH offset);
C_EXPORT void QPainter_translate3(QPainterH handle, qreal dx, qreal dy);
C_EXPORT void QPainter_window(QPainterH handle, PRect retval);
C_EXPORT void QPainter_setWindow(QPainterH handle, PRect window);
C_EXPORT void QPainter_setWindow2(QPainterH handle, int x, int y, int w, int h);
C_EXPORT void QPainter_viewport(QPainterH handle, PRect retval);
C_EXPORT void QPainter_setViewport(QPainterH handle, PRect viewport);
C_EXPORT void QPainter_setViewport2(QPainterH handle, int x, int y, int w, int h);
C_EXPORT void QPainter_setViewTransformEnabled(QPainterH handle, bool enable);
C_EXPORT bool QPainter_viewTransformEnabled(QPainterH handle);
C_EXPORT void QPainter_strokePath(QPainterH handle, const QPainterPathH path, const QPenH pen);
C_EXPORT void QPainter_fillPath(QPainterH handle, const QPainterPathH path, const QBrushH brush);
C_EXPORT void QPainter_drawPath(QPainterH handle, const QPainterPathH path);
C_EXPORT void QPainter_drawPoint(QPainterH handle, const QPointFH pt);
C_EXPORT void QPainter_drawPoint2(QPainterH handle, const QPointH p);
C_EXPORT void QPainter_drawPoint3(QPainterH handle, int x, int y);
C_EXPORT void QPainter_drawPoints(QPainterH handle, const QPointFH points, int pointCount);
C_EXPORT void QPainter_drawPoints2(QPainterH handle, const QPolygonFH points);
C_EXPORT void QPainter_drawPoints3(QPainterH handle, const QPointH points, int pointCount);
C_EXPORT void QPainter_drawPoints4(QPainterH handle, const QPolygonH points);
C_EXPORT void QPainter_drawLine(QPainterH handle, const QLineFH line);
C_EXPORT void QPainter_drawLine2(QPainterH handle, const QLineH line);
C_EXPORT void QPainter_drawLine3(QPainterH handle, int x1, int y1, int x2, int y2);
C_EXPORT void QPainter_drawLine4(QPainterH handle, const QPointH p1, const QPointH p2);
C_EXPORT void QPainter_drawLine5(QPainterH handle, const QPointFH p1, const QPointFH p2);
C_EXPORT void QPainter_drawLines(QPainterH handle, const QLineFH lines, int lineCount);
C_EXPORT void QPainter_drawLines2(QPainterH handle, const QPointFH pointPairs, int lineCount);
C_EXPORT void QPainter_drawLines3(QPainterH handle, const QLineH lines, int lineCount);
C_EXPORT void QPainter_drawLines4(QPainterH handle, const QPointH pointPairs, int lineCount);
C_EXPORT void QPainter_drawRect(QPainterH handle, const QRectFH rect);
C_EXPORT void QPainter_drawRect2(QPainterH handle, int x1, int y1, int w, int h);
C_EXPORT void QPainter_drawRect3(QPainterH handle, PRect rect);
C_EXPORT void QPainter_drawRects(QPainterH handle, const QRectFH rects, int rectCount);
C_EXPORT void QPainter_drawRects2(QPainterH handle, PRect rects, int rectCount);
C_EXPORT void QPainter_drawEllipse(QPainterH handle, const QRectFH r);
C_EXPORT void QPainter_drawEllipse2(QPainterH handle, PRect r);
C_EXPORT void QPainter_drawEllipse3(QPainterH handle, int x, int y, int w, int h);
C_EXPORT void QPainter_drawEllipse4(QPainterH handle, const QPointFH center, qreal rx, qreal ry);
C_EXPORT void QPainter_drawEllipse5(QPainterH handle, const QPointH center, int rx, int ry);
C_EXPORT void QPainter_drawPolyline(QPainterH handle, const QPointFH points, int pointCount);
C_EXPORT void QPainter_drawPolyline2(QPainterH handle, const QPolygonFH polyline);
C_EXPORT void QPainter_drawPolyline3(QPainterH handle, const QPointH points, int pointCount);
C_EXPORT void QPainter_drawPolyline4(QPainterH handle, const QPolygonH polygon);
C_EXPORT void QPainter_drawPolygon(QPainterH handle, const QPointFH points, int pointCount, Qt::FillRule fillRule);
C_EXPORT void QPainter_drawPolygon2(QPainterH handle, const QPolygonFH polygon, Qt::FillRule fillRule);
C_EXPORT void QPainter_drawPolygon3(QPainterH handle, const QPointH points, int pointCount, Qt::FillRule fillRule);
C_EXPORT void QPainter_drawPolygon4(QPainterH handle, const QPolygonH polygon, Qt::FillRule fillRule);
C_EXPORT void QPainter_drawConvexPolygon(QPainterH handle, const QPointFH points, int pointCount);
C_EXPORT void QPainter_drawConvexPolygon2(QPainterH handle, const QPolygonFH polygon);
C_EXPORT void QPainter_drawConvexPolygon3(QPainterH handle, const QPointH points, int pointCount);
C_EXPORT void QPainter_drawConvexPolygon4(QPainterH handle, const QPolygonH polygon);
C_EXPORT void QPainter_drawArc(QPainterH handle, const QRectFH rect, int a, int alen);
C_EXPORT void QPainter_drawArc2(QPainterH handle, PRect AnonParam1, int a, int alen);
C_EXPORT void QPainter_drawArc3(QPainterH handle, int x, int y, int w, int h, int a, int alen);
C_EXPORT void QPainter_drawPie(QPainterH handle, const QRectFH rect, int a, int alen);
C_EXPORT void QPainter_drawPie2(QPainterH handle, int x, int y, int w, int h, int a, int alen);
C_EXPORT void QPainter_drawPie3(QPainterH handle, PRect AnonParam1, int a, int alen);
C_EXPORT void QPainter_drawChord(QPainterH handle, const QRectFH rect, int a, int alen);
C_EXPORT void QPainter_drawChord2(QPainterH handle, int x, int y, int w, int h, int a, int alen);
C_EXPORT void QPainter_drawChord3(QPainterH handle, PRect AnonParam1, int a, int alen);
C_EXPORT void QPainter_drawRoundedRect(QPainterH handle, const QRectFH rect, qreal xRadius, qreal yRadius, Qt::SizeMode mode);
C_EXPORT void QPainter_drawRoundedRect2(QPainterH handle, int x, int y, int w, int h, qreal xRadius, qreal yRadius, Qt::SizeMode mode);
C_EXPORT void QPainter_drawRoundedRect3(QPainterH handle, PRect rect, qreal xRadius, qreal yRadius, Qt::SizeMode mode);
C_EXPORT void QPainter_drawRoundRect(QPainterH handle, const QRectFH r, int xround, int yround);
C_EXPORT void QPainter_drawRoundRect2(QPainterH handle, int x, int y, int w, int h, int AnonParam5, int AnonParam6);
C_EXPORT void QPainter_drawRoundRect3(QPainterH handle, PRect r, int xround, int yround);
C_EXPORT void QPainter_drawTiledPixmap(QPainterH handle, const QRectFH rect, const QPixmapH pm, const QPointFH offset);
C_EXPORT void QPainter_drawTiledPixmap2(QPainterH handle, int x, int y, int w, int h, const QPixmapH AnonParam5, int sx, int sy);
C_EXPORT void QPainter_drawTiledPixmap3(QPainterH handle, PRect AnonParam1, const QPixmapH AnonParam2, const QPointH AnonParam3);
C_EXPORT void QPainter_drawPicture(QPainterH handle, const QPointFH p, const QPictureH picture);
C_EXPORT void QPainter_drawPicture2(QPainterH handle, int x, int y, const QPictureH picture);
C_EXPORT void QPainter_drawPicture3(QPainterH handle, const QPointH p, const QPictureH picture);
C_EXPORT void QPainter_drawPixmap(QPainterH handle, const QRectFH targetRect, const QPixmapH pixmap, const QRectFH sourceRect);
C_EXPORT void QPainter_drawPixmap2(QPainterH handle, PRect targetRect, const QPixmapH pixmap, PRect sourceRect);
C_EXPORT void QPainter_drawPixmap3(QPainterH handle, int x, int y, int w, int h, const QPixmapH pm, int sx, int sy, int sw, int sh);
C_EXPORT void QPainter_drawPixmap4(QPainterH handle, int x, int y, const QPixmapH pm, int sx, int sy, int sw, int sh);
C_EXPORT void QPainter_drawPixmap5(QPainterH handle, const QPointFH p, const QPixmapH pm, const QRectFH sr);
C_EXPORT void QPainter_drawPixmap6(QPainterH handle, const QPointH p, const QPixmapH pm, PRect sr);
C_EXPORT void QPainter_drawPixmap7(QPainterH handle, const QPointFH p, const QPixmapH pm);
C_EXPORT void QPainter_drawPixmap8(QPainterH handle, const QPointH p, const QPixmapH pm);
C_EXPORT void QPainter_drawPixmap9(QPainterH handle, int x, int y, const QPixmapH pm);
C_EXPORT void QPainter_drawPixmap10(QPainterH handle, PRect r, const QPixmapH pm);
C_EXPORT void QPainter_drawPixmap11(QPainterH handle, int x, int y, int w, int h, const QPixmapH pm);
C_EXPORT void QPainter_drawImage(QPainterH handle, const QRectFH targetRect, const QImageH image, const QRectFH sourceRect, unsigned int flags);
C_EXPORT void QPainter_drawImage2(QPainterH handle, PRect targetRect, const QImageH image, PRect sourceRect, unsigned int flags);
C_EXPORT void QPainter_drawImage3(QPainterH handle, const QPointFH p, const QImageH image, const QRectFH sr, unsigned int flags);
C_EXPORT void QPainter_drawImage4(QPainterH handle, const QPointH p, const QImageH image, PRect sr, unsigned int flags);
C_EXPORT void QPainter_drawImage5(QPainterH handle, const QRectFH r, const QImageH image);
C_EXPORT void QPainter_drawImage6(QPainterH handle, PRect r, const QImageH image);
C_EXPORT void QPainter_drawImage7(QPainterH handle, const QPointFH p, const QImageH image);
C_EXPORT void QPainter_drawImage8(QPainterH handle, const QPointH p, const QImageH image);
C_EXPORT void QPainter_drawImage9(QPainterH handle, int x, int y, const QImageH image, int sx, int sy, int sw, int sh, unsigned int flags);
C_EXPORT void QPainter_setLayoutDirection(QPainterH handle, Qt::LayoutDirection direction);
C_EXPORT Qt::LayoutDirection QPainter_layoutDirection(QPainterH handle);
C_EXPORT void QPainter_drawGlyphRun(QPainterH handle, const QPointFH position, const QGlyphRunH glyphRun);
C_EXPORT void QPainter_drawStaticText(QPainterH handle, const QPointFH topLeftPosition, const QStaticTextH staticText);
C_EXPORT void QPainter_drawStaticText2(QPainterH handle, const QPointH topLeftPosition, const QStaticTextH staticText);
C_EXPORT void QPainter_drawStaticText3(QPainterH handle, int left, int top, const QStaticTextH staticText);
C_EXPORT void QPainter_drawText(QPainterH handle, const QPointFH p, PWideString s);
C_EXPORT void QPainter_drawText2(QPainterH handle, const QPointH p, PWideString s);
C_EXPORT void QPainter_drawText3(QPainterH handle, int x, int y, PWideString s);
C_EXPORT void QPainter_drawText4(QPainterH handle, const QPointFH p, PWideString str, int tf, int justificationPadding);
C_EXPORT void QPainter_drawText5(QPainterH handle, const QRectFH r, int flags, PWideString text, QRectFH br);
C_EXPORT void QPainter_drawText6(QPainterH handle, PRect r, int flags, PWideString text, PRect br);
C_EXPORT void QPainter_drawText7(QPainterH handle, int x, int y, int w, int h, int flags, PWideString text, PRect br);
C_EXPORT void QPainter_drawText8(QPainterH handle, const QRectFH r, PWideString text, const QTextOptionH o);
C_EXPORT void QPainter_boundingRect(QPainterH handle, QRectFH retval, const QRectFH rect, int flags, PWideString text);
C_EXPORT void QPainter_boundingRect2(QPainterH handle, PRect retval, PRect rect, int flags, PWideString text);
C_EXPORT void QPainter_boundingRect3(QPainterH handle, PRect retval, int x, int y, int w, int h, int flags, PWideString text);
C_EXPORT void QPainter_boundingRect4(QPainterH handle, QRectFH retval, const QRectFH rect, PWideString text, const QTextOptionH o);
C_EXPORT void QPainter_fillRect(QPainterH handle, const QRectFH AnonParam1, const QBrushH AnonParam2);
C_EXPORT void QPainter_fillRect2(QPainterH handle, int x, int y, int w, int h, const QBrushH AnonParam5);
C_EXPORT void QPainter_fillRect3(QPainterH handle, PRect AnonParam1, const QBrushH AnonParam2);
C_EXPORT void QPainter_fillRect4(QPainterH handle, const QRectFH AnonParam1, const QColorH color);
C_EXPORT void QPainter_fillRect5(QPainterH handle, int x, int y, int w, int h, const QColorH color);
C_EXPORT void QPainter_fillRect6(QPainterH handle, PRect AnonParam1, const QColorH color);
C_EXPORT void QPainter_fillRect7(QPainterH handle, int x, int y, int w, int h, Qt::GlobalColor c);
C_EXPORT void QPainter_fillRect8(QPainterH handle, PRect r, Qt::GlobalColor c);
C_EXPORT void QPainter_fillRect9(QPainterH handle, const QRectFH r, Qt::GlobalColor c);
C_EXPORT void QPainter_fillRect10(QPainterH handle, int x, int y, int w, int h, Qt::BrushStyle style);
C_EXPORT void QPainter_fillRect11(QPainterH handle, PRect r, Qt::BrushStyle style);
C_EXPORT void QPainter_fillRect12(QPainterH handle, const QRectFH r, Qt::BrushStyle style);
C_EXPORT void QPainter_eraseRect(QPainterH handle, const QRectFH AnonParam1);
C_EXPORT void QPainter_eraseRect2(QPainterH handle, int x, int y, int w, int h);
C_EXPORT void QPainter_eraseRect3(QPainterH handle, PRect AnonParam1);
C_EXPORT void QPainter_setRenderHint(QPainterH handle, QPainter::RenderHint hint, bool on);
C_EXPORT void QPainter_setRenderHints(QPainterH handle, unsigned int hints, bool on);
C_EXPORT unsigned int QPainter_renderHints(QPainterH handle);
C_EXPORT bool QPainter_testRenderHint(QPainterH handle, QPainter::RenderHint hint);
C_EXPORT QPaintEngineH QPainter_paintEngine(QPainterH handle);
C_EXPORT void QPainter_setRedirected(const QPaintDeviceH device, QPaintDeviceH replacement, const QPointH offset);
C_EXPORT QPaintDeviceH QPainter_redirected(const QPaintDeviceH device, QPointH offset);
C_EXPORT void QPainter_restoreRedirected(const QPaintDeviceH device);
C_EXPORT void QPainter_beginNativePainting(QPainterH handle);
C_EXPORT void QPainter_endNativePainting(QPainterH handle);

#endif
