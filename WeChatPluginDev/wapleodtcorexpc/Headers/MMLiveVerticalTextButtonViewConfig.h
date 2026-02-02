//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface MMLiveVerticalTextButtonViewConfig : NSObject
{
    _Bool _buttonRoundCorner;
    unsigned long long _displayType;
    double _textPadding;
    UIFont *_textFont;
    UIColor *_buttonBgColor;
    UIColor *_textColor;
    UIColor *_buttonBlurColor;
    double _maxLabelWidth;
    struct CGSize _buttonSize;
}

+ (id)defaultConfig;
- (void).cxx_destruct;
@property(nonatomic) double maxLabelWidth; // @synthesize maxLabelWidth=_maxLabelWidth;
@property(nonatomic) struct CGSize buttonSize; // @synthesize buttonSize=_buttonSize;
@property(retain, nonatomic) UIColor *buttonBlurColor; // @synthesize buttonBlurColor=_buttonBlurColor;
@property(nonatomic) _Bool buttonRoundCorner; // @synthesize buttonRoundCorner=_buttonRoundCorner;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *buttonBgColor; // @synthesize buttonBgColor=_buttonBgColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(nonatomic) double textPadding; // @synthesize textPadding=_textPadding;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;

@end

