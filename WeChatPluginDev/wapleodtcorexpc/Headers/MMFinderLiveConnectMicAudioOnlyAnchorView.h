//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveTaskId, MMFinderLiveWcPlayerView, MMLiveAudioModeAnimatedBackgroundPlayerViewModel, MMLiveResourceFetcherRootFlowAction, NSString, UIImageView;

@interface MMFinderLiveConnectMicAudioOnlyAnchorView : UIView
{
    UIImageView *_coverImageView;
    MMFinderLiveWcPlayerView *_backgroundVideoView;
    MMLiveAudioModeAnimatedBackgroundPlayerViewModel *_backgroundVideoViewModel;
    NSString *_coverImageViewName;
    NSString *_backgroundVideoViewName;
    UIView *_shadingView;
    MMFinderLiveTaskId *_finderTaskId;
    NSString *_sdkUserId;
    NSString *_backgroundVideoUri;
    MMLiveResourceFetcherRootFlowAction *_downloadMgr;
    struct CGRect _backgroundVideoViewNormalizedFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveResourceFetcherRootFlowAction *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
@property(retain, nonatomic) NSString *backgroundVideoUri; // @synthesize backgroundVideoUri=_backgroundVideoUri;
@property(retain, nonatomic) NSString *sdkUserId; // @synthesize sdkUserId=_sdkUserId;
@property(retain, nonatomic) MMFinderLiveTaskId *finderTaskId; // @synthesize finderTaskId=_finderTaskId;
@property(retain, nonatomic) UIView *shadingView; // @synthesize shadingView=_shadingView;
@property(copy, nonatomic) NSString *backgroundVideoViewName; // @synthesize backgroundVideoViewName=_backgroundVideoViewName;
@property(copy, nonatomic) NSString *coverImageViewName; // @synthesize coverImageViewName=_coverImageViewName;
@property(nonatomic) struct CGRect backgroundVideoViewNormalizedFrame; // @synthesize backgroundVideoViewNormalizedFrame=_backgroundVideoViewNormalizedFrame;
@property(retain, nonatomic) MMLiveAudioModeAnimatedBackgroundPlayerViewModel *backgroundVideoViewModel; // @synthesize backgroundVideoViewModel=_backgroundVideoViewModel;
@property(retain, nonatomic) MMFinderLiveWcPlayerView *backgroundVideoView; // @synthesize backgroundVideoView=_backgroundVideoView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void)startAudioModeBackgroundPlayerWithPath:(id)arg1;
- (void)createBackgroundVideoView;
- (void)layoutSubviews;
- (void)configureCoverViewWithBackgroundConfiguration:(id)arg1 fallbackImageUri:(id)arg2;
- (id)initWithTaskId:(id)arg1 sdkUserId:(id)arg2 coverImageViewName:(id)arg3 backgroundVideoViewName:(id)arg4;
- (id)initWithTaskId:(id)arg1 sdkUserId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

