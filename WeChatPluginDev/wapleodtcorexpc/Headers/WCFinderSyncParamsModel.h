//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderSyncClientStatus_DiscoveryReddotInfo, WCFinderRedDotCtrlInfo;

@interface WCFinderSyncParamsModel : NSObject
{
    _Bool _isFinderDau;
    int _selectorType;
    int _scene;
    int _reportScene;
    long long _stayTLInterval;
    WCFinderRedDotCtrlInfo *_guideRedDotCtrlInfo;
    WCFinderRedDotCtrlInfo *_finderEntranceRedDotCtrlInfo;
    long long _businessFlagShowOnBadge;
    FinderSyncClientStatus_DiscoveryReddotInfo *_finderDiscoveryReddotInfo;
    FinderSyncClientStatus_DiscoveryReddotInfo *_liveDiscoveryReddotInfo;
    FinderSyncClientStatus_DiscoveryReddotInfo *_socialHotDiscoveryReddotInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFinderDau; // @synthesize isFinderDau=_isFinderDau;
@property(retain, nonatomic) FinderSyncClientStatus_DiscoveryReddotInfo *socialHotDiscoveryReddotInfo; // @synthesize socialHotDiscoveryReddotInfo=_socialHotDiscoveryReddotInfo;
@property(retain, nonatomic) FinderSyncClientStatus_DiscoveryReddotInfo *liveDiscoveryReddotInfo; // @synthesize liveDiscoveryReddotInfo=_liveDiscoveryReddotInfo;
@property(retain, nonatomic) FinderSyncClientStatus_DiscoveryReddotInfo *finderDiscoveryReddotInfo; // @synthesize finderDiscoveryReddotInfo=_finderDiscoveryReddotInfo;
@property(nonatomic) long long businessFlagShowOnBadge; // @synthesize businessFlagShowOnBadge=_businessFlagShowOnBadge;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *finderEntranceRedDotCtrlInfo; // @synthesize finderEntranceRedDotCtrlInfo=_finderEntranceRedDotCtrlInfo;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *guideRedDotCtrlInfo; // @synthesize guideRedDotCtrlInfo=_guideRedDotCtrlInfo;
@property(nonatomic) long long stayTLInterval; // @synthesize stayTLInterval=_stayTLInterval;
@property(nonatomic) int reportScene; // @synthesize reportScene=_reportScene;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) int selectorType; // @synthesize selectorType=_selectorType;
- (id)initWithSelectorType:(int)arg1 scene:(int)arg2 reportScene:(int)arg3 stayTLInterval:(long long)arg4;

@end

