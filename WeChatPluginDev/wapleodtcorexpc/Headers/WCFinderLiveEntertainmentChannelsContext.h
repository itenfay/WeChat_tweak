//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveEcGetLiveConfigResponse, FinderLiveStreamGetAsyncLoadInfoConfig, NSData, NSString, WCFinderLiveEntertainmentChannelsViewModel;

@interface WCFinderLiveEntertainmentChannelsContext : NSObject
{
    _Bool enableSkeleton;
    _Bool enableAvatarSkeleton;
    _Bool _isViewAppearing;
    _Bool _skipFeedsReport;
    int _scene;
    double skeletonAnimationDelay;
    NSString *_themeId;
    NSData *_lastBuffer;
    FinderLiveStreamGetAsyncLoadInfoConfig *_asyncLoadInfoConfig;
    double _actionButtonDistanceToBottom;
    WCFinderLiveEntertainmentChannelsViewModel *_vcVM;
    FinderLiveEcGetLiveConfigResponse *_ecConfigResp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveEcGetLiveConfigResponse *ecConfigResp; // @synthesize ecConfigResp=_ecConfigResp;
@property(nonatomic) __weak WCFinderLiveEntertainmentChannelsViewModel *vcVM; // @synthesize vcVM=_vcVM;
@property(nonatomic) double actionButtonDistanceToBottom; // @synthesize actionButtonDistanceToBottom=_actionButtonDistanceToBottom;
@property(nonatomic) _Bool skipFeedsReport; // @synthesize skipFeedsReport=_skipFeedsReport;
@property(retain, nonatomic) FinderLiveStreamGetAsyncLoadInfoConfig *asyncLoadInfoConfig; // @synthesize asyncLoadInfoConfig=_asyncLoadInfoConfig;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *themeId; // @synthesize themeId=_themeId;
@property(nonatomic) _Bool isViewAppearing; // @synthesize isViewAppearing=_isViewAppearing;
@property(readonly, nonatomic) double skeletonAnimationDelay; // @synthesize skeletonAnimationDelay;
@property(readonly, nonatomic) _Bool enableAvatarSkeleton; // @synthesize enableAvatarSkeleton;
@property(readonly, nonatomic) _Bool enableSkeleton; // @synthesize enableSkeleton;
- (id)initWithThemeId:(id)arg1 scene:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

