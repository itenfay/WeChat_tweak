//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableSet;

@interface WCFinderOtherTabPrefetchManager : NSObject
{
    NSMutableArray *_prefetchQueue;
    NSMutableSet *_requestingTabSet;
    NSDictionary *_conflictTabMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *conflictTabMap; // @synthesize conflictTabMap=_conflictTabMap;
@property(retain, nonatomic) NSMutableSet *requestingTabSet; // @synthesize requestingTabSet=_requestingTabSet;
@property(retain, nonatomic) NSMutableArray *prefetchQueue; // @synthesize prefetchQueue=_prefetchQueue;
- (id)redDotPathWithTabType:(int)arg1;
- (void)prefetchImmediatelyWithTab:(int)arg1;
- (long long)convertToTimelineTabType:(int)arg1;
- (void)prefetchIfOk;
- (void)requestNewDataFinishWithPullType:(unsigned long long)arg1 tabType:(int)arg2;
- (void)startRequestNewDataWithPullType:(unsigned long long)arg1 tabType:(int)arg2;
- (void)prefetchOtherTabAtProperTime:(int)arg1;

@end

