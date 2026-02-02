//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UIColor, UIFont;

@interface MMStringStyle : NSObject
{
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_backgroundColor;
    long long _underlineStyle;
    UIColor *_underlineColor;
    long long _strikethroughStyle;
    UIColor *_strikethroughColor;
    NSMutableDictionary *_attributes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) UIColor *strikethroughColor; // @synthesize strikethroughColor=_strikethroughColor;
@property(nonatomic) long long strikethroughStyle; // @synthesize strikethroughStyle=_strikethroughStyle;
@property(retain, nonatomic) UIColor *underlineColor; // @synthesize underlineColor=_underlineColor;
@property(nonatomic) long long underlineStyle; // @synthesize underlineStyle=_underlineStyle;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (id)attributesDic;
- (id)init;

@end

