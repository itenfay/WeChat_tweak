//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIFont;

@interface WNDisplayFontInfo : NSObject
{
    NSString *_displayName;
    NSString *_familyName;
    UIFont *_font;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initWithDisplayName:(id)arg1 andFamilyName:(id)arg2 andFont:(id)arg3;

@end

