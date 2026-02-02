//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, UIColor, UIFont;

@interface GCTextCellLayoutInfo : NSObject
{
    _Bool _alignCenter;
    int _numLine;
    NSMutableArray *_contentTextStyles;
    double _sysTitleWidth;
    double _originX;
    double _lineHeight;
    UIFont *_textFont;
    UIColor *_textColor;
    struct CGSize _contentTextSize;
    struct UIEdgeInsets _contentMarginInsets;
}

- (void).cxx_destruct;
@property(nonatomic) int numLine; // @synthesize numLine=_numLine;
@property(nonatomic) _Bool alignCenter; // @synthesize alignCenter=_alignCenter;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) struct UIEdgeInsets contentMarginInsets; // @synthesize contentMarginInsets=_contentMarginInsets;
@property(nonatomic) double originX; // @synthesize originX=_originX;
@property(nonatomic) double sysTitleWidth; // @synthesize sysTitleWidth=_sysTitleWidth;
@property(nonatomic) struct CGSize contentTextSize; // @synthesize contentTextSize=_contentTextSize;
@property(retain, nonatomic) NSMutableArray *contentTextStyles; // @synthesize contentTextStyles=_contentTextStyles;

@end

