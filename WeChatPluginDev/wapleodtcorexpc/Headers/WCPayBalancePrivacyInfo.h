//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayBalancePrivacyInfo : NSObject
{
    unsigned int _switch_state;
    NSString *_icon;
    NSString *_title;
    NSString *_desc;
    NSString *_switch_state_info;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *switch_state_info; // @synthesize switch_state_info=_switch_state_info;
@property(nonatomic) unsigned int switch_state; // @synthesize switch_state=_switch_state;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;

@end

