//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMicroMerchantFoldReportInfo : NSObject
{
    unsigned long long _hitRuleType;
    NSString *_feedID;
    NSString *_username;
    NSString *_sessionID;
    unsigned long long _scene;
    unsigned long long _statusType;
}

+ (unsigned long long)hitRuleTypeWithInteractionType:(unsigned long long)arg1;
+ (id)reportInfoWithFoldAgainUsername:(id)arg1 sessionID:(id)arg2;
+ (id)reportInfoWithInteraction:(id)arg1 sessionID:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long statusType; // @synthesize statusType=_statusType;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(nonatomic) unsigned long long hitRuleType; // @synthesize hitRuleType=_hitRuleType;
- (void)report;
- (id)initWithHitRuleType:(unsigned long long)arg1 feedID:(id)arg2 username:(id)arg3 sessionID:(id)arg4 scene:(unsigned long long)arg5 statusType:(unsigned long long)arg6;

@end

