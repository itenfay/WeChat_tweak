//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MiddleTipsWithBackground : NSObject
{
    NSString *_text;
    NSString *_text_color;
    NSString *_text_color_dark;
    NSString *_background_color;
    NSString *_background_color_dark;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *background_color_dark; // @synthesize background_color_dark=_background_color_dark;
@property(retain, nonatomic) NSString *background_color; // @synthesize background_color=_background_color;
@property(retain, nonatomic) NSString *text_color_dark; // @synthesize text_color_dark=_text_color_dark;
@property(retain, nonatomic) NSString *text_color; // @synthesize text_color=_text_color;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;

@end

