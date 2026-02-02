//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface WCFinderBulletStyleConfig : NSObject
{
    UIFont *_font;
    UIColor *_fgColor;
    UIColor *_strokeColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *fgColor; // @synthesize fgColor=_fgColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;

@end

