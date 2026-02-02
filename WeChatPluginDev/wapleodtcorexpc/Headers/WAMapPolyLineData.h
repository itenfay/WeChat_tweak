//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor, UIImage;

@interface WAMapPolyLineData : NSObject
{
    _Bool _dotLine;
    _Bool _arrowLine;
    _Bool _enableGradient;
    long long _lineId;
    UIColor *_color;
    UIColor *_fillColor;
    double _width;
    double _borderWidth;
    UIColor *_borderColor;
    UIImage *_arrowImg;
    long long _style;
    double _symbolGap;
    long long _displayLevel;
}

- (void).cxx_destruct;
@property(nonatomic) long long displayLevel; // @synthesize displayLevel=_displayLevel;
@property(nonatomic) double symbolGap; // @synthesize symbolGap=_symbolGap;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIImage *arrowImg; // @synthesize arrowImg=_arrowImg;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) _Bool enableGradient; // @synthesize enableGradient=_enableGradient;
@property(nonatomic) _Bool arrowLine; // @synthesize arrowLine=_arrowLine;
@property(nonatomic) _Bool dotLine; // @synthesize dotLine=_dotLine;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) long long lineId; // @synthesize lineId=_lineId;

@end

