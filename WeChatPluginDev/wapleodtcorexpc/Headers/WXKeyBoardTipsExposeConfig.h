//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WXKeyBoardTipsExposeConfig : NSObject
{
    unsigned int _configMask;
    unsigned int _exposeEnable;
    unsigned int _clickToExitCount;
    unsigned int _exposeDays;
    unsigned int _exposeInterval;
    unsigned int _exposeCount;
    unsigned int _version;
    NSDictionary *_wording;
    NSString *_swiperId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *swiperId; // @synthesize swiperId=_swiperId;
@property(retain, nonatomic) NSDictionary *wording; // @synthesize wording=_wording;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int exposeCount; // @synthesize exposeCount=_exposeCount;
@property(nonatomic) unsigned int exposeInterval; // @synthesize exposeInterval=_exposeInterval;
@property(nonatomic) unsigned int exposeDays; // @synthesize exposeDays=_exposeDays;
@property(nonatomic) unsigned int clickToExitCount; // @synthesize clickToExitCount=_clickToExitCount;
@property(nonatomic) unsigned int exposeEnable; // @synthesize exposeEnable=_exposeEnable;
@property(nonatomic) unsigned int configMask; // @synthesize configMask=_configMask;

@end

