//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface MMECProductTextShowBoxItem : NSObject
{
    NSString *_iconURL;
    NSString *_text;
    UIColor *_textColor;
    UIColor *_borderColor;
    UIColor *_backgroundColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;

@end

