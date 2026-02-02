//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class DataCenterConfig, NSArray, NSString, WCFinderUserMentionModel, WCFinderUserMessage;

@interface WCFinderUserInfoSetting : NSObject
{
    _Bool _shouldShowTimelineRedDot;
    _Bool _shouldShowPersonCenterRedDot;
    _Bool _hasShowFindPostRedDot;
    _Bool _hasShowCameraRedDot;
    _Bool _hasShowLocationChangeTipsInProfile;
    _Bool _isFinishShowTouchTips;
    _Bool _hasShowDiscoveryFindPostRedDot;
    _Bool _hasBuildFindPostRedDot;
    _Bool _hasPostRealName;
    int _unreadMessageCount;
    WCFinderUserMentionModel *_mentionModel;
    WCFinderUserMessage *_userMessage;
    NSArray *_notInterestedConfigArr;
    long long _touchTipsShouldTimes;
    DataCenterConfig *_dataCenterConfig;
    NSArray *_slideUpGuideConfigArr;
    unsigned long long _requestFansCacheDate;
}

+ (void)initialize;
+ (void)PBArrayAdd_hasPostRealName;
+ (void)PBArrayAdd_requestFansCacheDate;
+ (void)PBArrayAdd_slideUpGuideConfigArr;
+ (void)PBArrayAdd_hasBuildFindPostRedDot;
+ (void)PBArrayAdd_hasShowDiscoveryFindPostRedDot;
+ (void)PBArrayAdd_touchTipsShouldTimes;
+ (void)PBArrayAdd_isFinishShowTouchTips;
+ (void)PBArrayAdd_dataCenterConfig;
+ (void)PBArrayAdd_hasShowLocationChangeTipsInProfile;
+ (void)PBArrayAdd_hasShowCameraRedDot;
+ (void)PBArrayAdd_hasShowFindPostRedDot;
+ (void)PBArrayAdd_shouldShowPersonCenterRedDot;
+ (void)PBArrayAdd_notInterestedConfigArr;
+ (void)PBArrayAdd_shouldShowTimelineRedDot;
+ (void)PBArrayAdd_userMessage;
+ (void)PBArrayAdd_mentionModel;
+ (void)PBArrayAdd_unreadMessageCount;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasPostRealName; // @synthesize hasPostRealName=_hasPostRealName;
@property(nonatomic) unsigned long long requestFansCacheDate; // @synthesize requestFansCacheDate=_requestFansCacheDate;
@property(retain, nonatomic) NSArray *slideUpGuideConfigArr; // @synthesize slideUpGuideConfigArr=_slideUpGuideConfigArr;
@property(retain, nonatomic) DataCenterConfig *dataCenterConfig; // @synthesize dataCenterConfig=_dataCenterConfig;
@property(nonatomic) _Bool hasBuildFindPostRedDot; // @synthesize hasBuildFindPostRedDot=_hasBuildFindPostRedDot;
@property(nonatomic) _Bool hasShowDiscoveryFindPostRedDot; // @synthesize hasShowDiscoveryFindPostRedDot=_hasShowDiscoveryFindPostRedDot;
@property(nonatomic) long long touchTipsShouldTimes; // @synthesize touchTipsShouldTimes=_touchTipsShouldTimes;
@property(nonatomic) _Bool isFinishShowTouchTips; // @synthesize isFinishShowTouchTips=_isFinishShowTouchTips;
@property(nonatomic) _Bool hasShowLocationChangeTipsInProfile; // @synthesize hasShowLocationChangeTipsInProfile=_hasShowLocationChangeTipsInProfile;
@property(nonatomic) _Bool hasShowCameraRedDot; // @synthesize hasShowCameraRedDot=_hasShowCameraRedDot;
@property(nonatomic) _Bool hasShowFindPostRedDot; // @synthesize hasShowFindPostRedDot=_hasShowFindPostRedDot;
@property(retain, nonatomic) NSArray *notInterestedConfigArr; // @synthesize notInterestedConfigArr=_notInterestedConfigArr;
@property(nonatomic) _Bool shouldShowPersonCenterRedDot; // @synthesize shouldShowPersonCenterRedDot=_shouldShowPersonCenterRedDot;
@property(nonatomic) _Bool shouldShowTimelineRedDot; // @synthesize shouldShowTimelineRedDot=_shouldShowTimelineRedDot;
@property(retain, nonatomic) WCFinderUserMessage *userMessage; // @synthesize userMessage=_userMessage;
@property(retain, nonatomic) WCFinderUserMentionModel *mentionModel; // @synthesize mentionModel=_mentionModel;
@property(nonatomic) int unreadMessageCount; // @synthesize unreadMessageCount=_unreadMessageCount;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

