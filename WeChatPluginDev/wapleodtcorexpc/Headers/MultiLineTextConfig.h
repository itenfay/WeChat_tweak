//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface MultiLineTextConfig : NSObject
{
    UIFont *_font;
    UIColor *_fontColor;
    double _lineHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(retain, nonatomic) UIColor *fontColor; // @synthesize fontColor=_fontColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;

@end

