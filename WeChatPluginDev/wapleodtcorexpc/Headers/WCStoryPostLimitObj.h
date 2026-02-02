//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCStoryPostLimitObj : NSObject
{
    unsigned int _hadPostedCount;
    unsigned int _nextPostPeriod;
    unsigned int _lastPostSuccTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastPostSuccTime;
+ (void)PBArrayAdd_nextPostPeriod;
+ (void)PBArrayAdd_hadPostedCount;
@property(nonatomic) unsigned int lastPostSuccTime; // @synthesize lastPostSuccTime=_lastPostSuccTime;
@property(nonatomic) unsigned int nextPostPeriod; // @synthesize nextPostPeriod=_nextPostPeriod;
@property(nonatomic) unsigned int hadPostedCount; // @synthesize hadPostedCount=_hadPostedCount;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

