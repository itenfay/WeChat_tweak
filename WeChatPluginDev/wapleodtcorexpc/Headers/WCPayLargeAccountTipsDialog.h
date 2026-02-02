//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayLargeAccountTipsDialog : NSObject
{
    NSString *_title;
    NSString *_content;
    NSString *_button_name;
    NSString *_button_jump_url;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *button_jump_url; // @synthesize button_jump_url=_button_jump_url;
@property(retain, nonatomic) NSString *button_name; // @synthesize button_name=_button_name;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)genFromDic:(id)arg1;

@end

