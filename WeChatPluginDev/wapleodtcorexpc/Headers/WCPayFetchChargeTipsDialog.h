//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayFetchChargeTipsDialog : NSObject
{
    NSString *_title;
    NSString *_content;
    NSArray *_show_infos;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *show_infos; // @synthesize show_infos=_show_infos;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)genFromDic:(id)arg1;

@end

