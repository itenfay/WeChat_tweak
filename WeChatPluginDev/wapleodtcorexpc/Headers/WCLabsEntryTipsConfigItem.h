//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCLabsEntryTipsConfigItem : NSObject
{
    int _priority;
    NSString *_appScheme;
    NSString *_packetName;
    NSDictionary *_wording;
    NSString *_swiperId;
    NSDictionary *_extInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *swiperId; // @synthesize swiperId=_swiperId;
@property(retain, nonatomic) NSDictionary *wording; // @synthesize wording=_wording;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *packetName; // @synthesize packetName=_packetName;
@property(retain, nonatomic) NSString *appScheme; // @synthesize appScheme=_appScheme;

@end

