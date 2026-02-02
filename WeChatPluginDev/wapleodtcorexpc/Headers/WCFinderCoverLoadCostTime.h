//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface WCFinderCoverLoadCostTime : NSObject
{
    _Bool _needRecord;
    double _beginTime;
    NSMutableSet *_firstScreenFeeds;
    NSMutableDictionary *_resourceCostInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *resourceCostInfo; // @synthesize resourceCostInfo=_resourceCostInfo;
@property(retain, nonatomic) NSMutableSet *firstScreenFeeds; // @synthesize firstScreenFeeds=_firstScreenFeeds;
@property(nonatomic) _Bool needRecord; // @synthesize needRecord=_needRecord;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
- (id)createMediaLoadInfo;
- (double)allResourceFinishTimePoint;
- (void)recordFirstScreenFeedCoverRender:(id)arg1 beginTime:(double)arg2 costTime:(unsigned long long)arg3;
- (void)recordFirstScreenFeed:(id)arg1;
- (id)init;

@end

