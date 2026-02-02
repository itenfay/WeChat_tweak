//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderDebugSetting : NSObject
{
    _Bool _showSpeedFloatWindow;
    _Bool _testStreamSwitch;
    _Bool _showFansCount;
    _Bool _isHeaderBlurStyle;
    _Bool _isBulletAnimationAtTop;
    _Bool _shouldHideLiveEntrance;
    _Bool _openFPSTest;
    _Bool _openFPSAutoScroll;
    _Bool _openRotationDector;
    unsigned long long _useRecommendSystemType;
    unsigned long long _configFeedStyle;
    unsigned long long _configNearbyStyle;
    unsigned long long _configMachineStyle;
    unsigned long long _TLRightItemType;
    unsigned long long _unreadFeedNum;
    unsigned long long _unreadLiveNum;
    unsigned long long _unreadDynamicNum;
    unsigned long long _totalFeedNum;
    unsigned long long _totalLiveNum;
    unsigned long long _totalDynamicNum;
}

+ (void)initialize;
+ (void)PBArrayAdd_totalDynamicNum;
+ (void)PBArrayAdd_totalLiveNum;
+ (void)PBArrayAdd_totalFeedNum;
+ (void)PBArrayAdd_unreadDynamicNum;
+ (void)PBArrayAdd_unreadLiveNum;
+ (void)PBArrayAdd_unreadFeedNum;
+ (void)PBArrayAdd_TLRightItemType;
+ (void)PBArrayAdd_shouldHideLiveEntrance;
+ (void)PBArrayAdd_isBulletAnimationAtTop;
+ (void)PBArrayAdd_configMachineStyle;
+ (void)PBArrayAdd_configNearbyStyle;
+ (void)PBArrayAdd_configFeedStyle;
+ (void)PBArrayAdd_isHeaderBlurStyle;
+ (void)PBArrayAdd_useRecommendSystemType;
+ (void)PBArrayAdd_showFansCount;
+ (void)PBArrayAdd_testStreamSwitch;
+ (void)PBArrayAdd_showSpeedFloatWindow;
@property(nonatomic) _Bool openRotationDector; // @synthesize openRotationDector=_openRotationDector;
@property(nonatomic) _Bool openFPSAutoScroll; // @synthesize openFPSAutoScroll=_openFPSAutoScroll;
@property(nonatomic) _Bool openFPSTest; // @synthesize openFPSTest=_openFPSTest;
@property(nonatomic) unsigned long long totalDynamicNum; // @synthesize totalDynamicNum=_totalDynamicNum;
@property(nonatomic) unsigned long long totalLiveNum; // @synthesize totalLiveNum=_totalLiveNum;
@property(nonatomic) unsigned long long totalFeedNum; // @synthesize totalFeedNum=_totalFeedNum;
@property(nonatomic) unsigned long long unreadDynamicNum; // @synthesize unreadDynamicNum=_unreadDynamicNum;
@property(nonatomic) unsigned long long unreadLiveNum; // @synthesize unreadLiveNum=_unreadLiveNum;
@property(nonatomic) unsigned long long unreadFeedNum; // @synthesize unreadFeedNum=_unreadFeedNum;
@property(nonatomic) unsigned long long TLRightItemType; // @synthesize TLRightItemType=_TLRightItemType;
@property(nonatomic) _Bool shouldHideLiveEntrance; // @synthesize shouldHideLiveEntrance=_shouldHideLiveEntrance;
@property(nonatomic) _Bool isBulletAnimationAtTop; // @synthesize isBulletAnimationAtTop=_isBulletAnimationAtTop;
@property(nonatomic) unsigned long long configMachineStyle; // @synthesize configMachineStyle=_configMachineStyle;
@property(nonatomic) unsigned long long configNearbyStyle; // @synthesize configNearbyStyle=_configNearbyStyle;
@property(nonatomic) unsigned long long configFeedStyle; // @synthesize configFeedStyle=_configFeedStyle;
@property(nonatomic) _Bool isHeaderBlurStyle; // @synthesize isHeaderBlurStyle=_isHeaderBlurStyle;
@property(nonatomic) unsigned long long useRecommendSystemType; // @synthesize useRecommendSystemType=_useRecommendSystemType;
@property(nonatomic) _Bool showFansCount; // @synthesize showFansCount=_showFansCount;
@property(nonatomic) _Bool testStreamSwitch; // @synthesize testStreamSwitch=_testStreamSwitch;
@property(nonatomic) _Bool showSpeedFloatWindow; // @synthesize showSpeedFloatWindow=_showSpeedFloatWindow;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

