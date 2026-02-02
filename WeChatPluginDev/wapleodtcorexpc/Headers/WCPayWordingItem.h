//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayWordingItem : NSObject
{
    _Bool needShow;
    NSString *entryTip;
    NSString *title;
    NSString *desc;
    NSString *subTitle;
    NSString *subDesc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *subDesc; // @synthesize subDesc;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) _Bool needShow; // @synthesize needShow;
@property(retain, nonatomic) NSString *entryTip; // @synthesize entryTip;
- (id)init;

@end

