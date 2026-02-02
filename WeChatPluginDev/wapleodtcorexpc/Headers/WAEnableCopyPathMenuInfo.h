//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAEnableCopyPathMenuInfo : NSObject
{
    unsigned int _recvTime;
    unsigned int _expireSeconds;
    NSString *_appid;
}

+ (void)initialize;
+ (void)PBArrayAdd_expireSeconds;
+ (void)PBArrayAdd_recvTime;
+ (void)PBArrayAdd_appid;
- (void).cxx_destruct;
@property(nonatomic) unsigned int expireSeconds; // @synthesize expireSeconds=_expireSeconds;
@property(nonatomic) unsigned int recvTime; // @synthesize recvTime=_recvTime;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

