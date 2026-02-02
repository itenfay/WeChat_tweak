//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCFinderProfileOverviewCacheItem;

@interface WCFinderProfileOverviewCache : NSObject
{
    NSArray *_items;
    WCFinderProfileOverviewCacheItem *_cache;
}

+ (void)initialize;
+ (void)PBArrayAdd_cache;
+ (void)PBArrayAdd_items;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderProfileOverviewCacheItem *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

