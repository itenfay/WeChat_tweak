//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFinderGetLiveTabsInfo : NSObject
{
    NSArray *_liveTabList;
    NSString *_title;
    unsigned long long _hideTabs;
    unsigned long long _prefechTabPullType;
    unsigned long long _prefechPreTabPullType;
    unsigned long long _prefechNextTabPullType;
    NSArray *_navTabList;
}

+ (id)finderGetLiveTabsInfoFrom:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_navTabList;
+ (void)PBArrayAdd_liveTabList;
+ (void)PBArrayAdd_prefechNextTabPullType;
+ (void)PBArrayAdd_prefechPreTabPullType;
+ (void)PBArrayAdd_prefechTabPullType;
+ (void)PBArrayAdd_hideTabs;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *navTabList; // @synthesize navTabList=_navTabList;
@property(nonatomic) unsigned long long prefechNextTabPullType; // @synthesize prefechNextTabPullType=_prefechNextTabPullType;
@property(nonatomic) unsigned long long prefechPreTabPullType; // @synthesize prefechPreTabPullType=_prefechPreTabPullType;
@property(nonatomic) unsigned long long prefechTabPullType; // @synthesize prefechTabPullType=_prefechTabPullType;
@property(nonatomic) unsigned long long hideTabs; // @synthesize hideTabs=_hideTabs;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *liveTabList; // @synthesize liveTabList=_liveTabList;
- (id)recommendTabInfo;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

