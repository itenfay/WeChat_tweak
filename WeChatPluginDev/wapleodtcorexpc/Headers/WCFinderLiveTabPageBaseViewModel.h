//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFinderLiveTabPageBaseViewModel : NSObject
{
    long long _scene;
    NSArray *_liveTabList;
    NSString *_title;
    unsigned long long _hideTabs;
    unsigned long long _prefechTabPullType;
    unsigned long long _prefechPreTabPullType;
    unsigned long long _prefechNextTabPullType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long prefechNextTabPullType; // @synthesize prefechNextTabPullType=_prefechNextTabPullType;
@property(nonatomic) unsigned long long prefechPreTabPullType; // @synthesize prefechPreTabPullType=_prefechPreTabPullType;
@property(nonatomic) unsigned long long prefechTabPullType; // @synthesize prefechTabPullType=_prefechTabPullType;
@property(nonatomic) unsigned long long hideTabs; // @synthesize hideTabs=_hideTabs;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *liveTabList; // @synthesize liveTabList=_liveTabList;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (_Bool)hasTabDataUpdated:(id)arg1;
- (_Bool)isEqualWith:(id)arg1;
- (void)updateVmWith:(id)arg1;
- (_Bool)shouldCacheTabWithScene:(unsigned long long)arg1;
- (void)checkSyncToLocalLiveTabsCache:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)checkLoadLocalLiveTabsCache;

@end

