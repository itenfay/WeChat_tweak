//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPSubtitleRenderModel : NSObject
{
    int _canvasWidth;
    int _canvasHeight;
    float _fontSize;
    float _fontScale;
    unsigned int _fontColor;
    float _outlineWidth;
    unsigned int _outlineColor;
    unsigned int _fontStyleOptions;
    float _lineSpace;
    float _startMargin;
    float _endMargin;
    float _verticalMargin;
    unsigned long long _paramFlags;
    unsigned long long _paramPriorityFlags;
    NSString *_familyName;
}

- (void).cxx_destruct;
@property(nonatomic) float verticalMargin; // @synthesize verticalMargin=_verticalMargin;
@property(nonatomic) float endMargin; // @synthesize endMargin=_endMargin;
@property(nonatomic) float startMargin; // @synthesize startMargin=_startMargin;
@property(nonatomic) float lineSpace; // @synthesize lineSpace=_lineSpace;
@property(nonatomic) unsigned int fontStyleOptions; // @synthesize fontStyleOptions=_fontStyleOptions;
@property(nonatomic) unsigned int outlineColor; // @synthesize outlineColor=_outlineColor;
@property(nonatomic) float outlineWidth; // @synthesize outlineWidth=_outlineWidth;
@property(nonatomic) unsigned int fontColor; // @synthesize fontColor=_fontColor;
@property(nonatomic) float fontScale; // @synthesize fontScale=_fontScale;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(nonatomic) unsigned long long paramPriorityFlags; // @synthesize paramPriorityFlags=_paramPriorityFlags;
@property(nonatomic) unsigned long long paramFlags; // @synthesize paramFlags=_paramFlags;
@property(nonatomic) int canvasHeight; // @synthesize canvasHeight=_canvasHeight;
@property(nonatomic) int canvasWidth; // @synthesize canvasWidth=_canvasWidth;

@end

