//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LiveFollowCacheInfo : NSObject
{
    _Bool _isFinderBizLive;
    unsigned int _liveStartTime;
    unsigned long long _liveTaskId;
}

+ (void)initialize;
+ (void)PBArrayAdd_isFinderBizLive;
+ (void)PBArrayAdd_liveStartTime;
+ (void)PBArrayAdd_liveTaskId;
@property(nonatomic) _Bool isFinderBizLive; // @synthesize isFinderBizLive=_isFinderBizLive;
@property(nonatomic) unsigned int liveStartTime; // @synthesize liveStartTime=_liveStartTime;
@property(nonatomic) unsigned long long liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

