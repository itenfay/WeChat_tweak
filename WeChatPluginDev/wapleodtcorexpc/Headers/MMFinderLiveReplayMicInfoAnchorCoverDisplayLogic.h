//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveConnectMicUsersInfo, MMFinderLiveTaskId, NSMutableDictionary, UIView;

@interface MMFinderLiveReplayMicInfoAnchorCoverDisplayLogic : NSObject
{
    MMFinderLiveTaskId *_taskId;
    UIView *_micUserContainerView;
    MMFinderLiveConnectMicUsersInfo *_allMicUsersInfo;
    NSMutableDictionary *_userViewInfoDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *userViewInfoDict; // @synthesize userViewInfoDict=_userViewInfoDict;
@property(retain, nonatomic) MMFinderLiveConnectMicUsersInfo *allMicUsersInfo; // @synthesize allMicUsersInfo=_allMicUsersInfo;
@property(retain, nonatomic) UIView *micUserContainerView; // @synthesize micUserContainerView=_micUserContainerView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (_Bool)insertLiveAnchorAudioMicBackgroundVideoToPipRenderLayer:(id)arg1;
- (_Bool)insertLiveAnchorAudioMicCoverImageToPIPRenderLayer:(id)arg1;
- (id)replayTask;
- (void)configureCoverImageViewForConnectMicViewInfo:(id)arg1;
- (void)configureGestureAnimationContainerViewForConnectMicViewInfo:(id)arg1;
- (void)clearMicViewInfo:(id)arg1;
- (void)updateSubviewsWithMicUserInfo:(id)arg1;
- (id)getOpposingAnchorAudioModeBackgroundVideoViewModelList;
- (id)getAnchorAudioMicCoverImageViewList;
- (void)updateConnectMicOtherAnchorCoverViewAppearanceBySdkUserId:(id)arg1 isAudioMode:(_Bool)arg2;
- (void)updateGestureAnimationContainerViewVisibilityWithCommonHide:(_Bool)arg1;
- (id)getMicAnchorGestureAnimationContainerViewBySdkUserId:(id)arg1;
- (void)bringBackgroundOfUserInPipToFront:(id)arg1;
- (void)layoutComponents;
- (void)notifyPIPHandleLogicConfig;
- (void)clearAndHide;
- (void)showWithConnectMicUsersInfo:(id)arg1;
- (id)initWithMicUserContainerView:(id)arg1 andLiveTaskId:(id)arg2;

@end

