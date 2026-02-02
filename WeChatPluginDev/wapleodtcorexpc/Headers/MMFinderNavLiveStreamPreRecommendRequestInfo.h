//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderNavLiveStreamPreRecommendRequestInfo : NSObject
{
    unsigned long long _requestTimeMs;
    unsigned long long _objectId;
    NSString *_reddotTipsUUid;
}

+ (void)initialize;
+ (void)PBArrayAdd_reddotTipsUUid;
+ (void)PBArrayAdd_objectId;
+ (void)PBArrayAdd_requestTimeMs;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reddotTipsUUid; // @synthesize reddotTipsUUid=_reddotTipsUUid;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(nonatomic) unsigned long long requestTimeMs; // @synthesize requestTimeMs=_requestTimeMs;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

