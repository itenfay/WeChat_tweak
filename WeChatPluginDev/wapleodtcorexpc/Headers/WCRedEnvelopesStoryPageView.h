//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RedPacketStoryInfo_StoryDetail, RedPacketStoryInfo_WxappInfo, UIButton, UIImageView, UILabel, WCPayWebImageView, WCPlayerConfigControlView, WCPlayerHttpMediaWrap, WCPlayerPlayArgs, WCPlayerPlaybackInfo, WCPlayerView, WCRedEnvelopesReceiveHomeTemplateItem, WCRedEnvelopesReceiveHomeTemplateView;
@protocol WCRedEnvelopesStoryPageViewDelegate;

@interface WCRedEnvelopesStoryPageView : UIView
{
    _Bool _isPageOne;
    _Bool _isMutedNow;
    _Bool _isPortrait;
    _Bool _isLoopPlay;
    unsigned int _m_loopCount;
    unsigned int _subtypeId;
    id <WCRedEnvelopesStoryPageViewDelegate> _m_delegate;
    WCPlayerPlaybackInfo *_m_storyPlayerReporter;
    double _m_lastStopTime;
    RedPacketStoryInfo_StoryDetail *_m_storyDetail;
    RedPacketStoryInfo_WxappInfo *_m_wxAppInfo;
    NSString *_nsTitle;
    NSString *_nsDesc;
    NSString *_m_nsUrl;
    WCPayWebImageView *_m_backgroundBlurView;
    UIButton *_getSameCoverEntryBtn;
    WCPayWebImageView *_m_contentView;
    unsigned long long _m_viewStyle;
    WCRedEnvelopesReceiveHomeTemplateView *_m_redSkinView;
    WCRedEnvelopesReceiveHomeTemplateItem *_m_redSkinItem;
    UILabel *_m_titleLabel;
    UILabel *_m_descLabel;
    WCPlayerView *_m_storyPlayerView;
    WCPayWebImageView *_firstFrameImageView;
    WCPlayerPlayArgs *_m_storyPlayerInfo;
    WCPlayerHttpMediaWrap *_m_storyMediaWrap;
    WCPlayerConfigControlView *_m_storyControlView;
    UIButton *_m_mutedBtn;
    UIButton *_m_videoMutedBtn;
    UIImageView *_storyPageLoadingView;
    long long _resourceIndex;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLoopPlay; // @synthesize isLoopPlay=_isLoopPlay;
@property(nonatomic) long long resourceIndex; // @synthesize resourceIndex=_resourceIndex;
@property(nonatomic) unsigned int subtypeId; // @synthesize subtypeId=_subtypeId;
@property(retain, nonatomic) UIImageView *storyPageLoadingView; // @synthesize storyPageLoadingView=_storyPageLoadingView;
@property(retain, nonatomic) UIButton *m_videoMutedBtn; // @synthesize m_videoMutedBtn=_m_videoMutedBtn;
@property(nonatomic) _Bool isPortrait; // @synthesize isPortrait=_isPortrait;
@property(nonatomic) _Bool isMutedNow; // @synthesize isMutedNow=_isMutedNow;
@property(retain, nonatomic) UIButton *m_mutedBtn; // @synthesize m_mutedBtn=_m_mutedBtn;
@property(retain, nonatomic) WCPlayerConfigControlView *m_storyControlView; // @synthesize m_storyControlView=_m_storyControlView;
@property(retain, nonatomic) WCPlayerHttpMediaWrap *m_storyMediaWrap; // @synthesize m_storyMediaWrap=_m_storyMediaWrap;
@property(retain, nonatomic) WCPlayerPlayArgs *m_storyPlayerInfo; // @synthesize m_storyPlayerInfo=_m_storyPlayerInfo;
@property(retain, nonatomic) WCPayWebImageView *firstFrameImageView; // @synthesize firstFrameImageView=_firstFrameImageView;
@property(retain, nonatomic) WCPlayerView *m_storyPlayerView; // @synthesize m_storyPlayerView=_m_storyPlayerView;
@property(retain, nonatomic) UILabel *m_descLabel; // @synthesize m_descLabel=_m_descLabel;
@property(retain, nonatomic) UILabel *m_titleLabel; // @synthesize m_titleLabel=_m_titleLabel;
@property(retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateItem *m_redSkinItem; // @synthesize m_redSkinItem=_m_redSkinItem;
@property(retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateView *m_redSkinView; // @synthesize m_redSkinView=_m_redSkinView;
@property(nonatomic) unsigned long long m_viewStyle; // @synthesize m_viewStyle=_m_viewStyle;
@property(retain, nonatomic) WCPayWebImageView *m_contentView; // @synthesize m_contentView=_m_contentView;
@property(retain, nonatomic) UIButton *getSameCoverEntryBtn; // @synthesize getSameCoverEntryBtn=_getSameCoverEntryBtn;
@property(retain, nonatomic) WCPayWebImageView *m_backgroundBlurView; // @synthesize m_backgroundBlurView=_m_backgroundBlurView;
@property(nonatomic) _Bool isPageOne; // @synthesize isPageOne=_isPageOne;
@property(retain, nonatomic) NSString *m_nsUrl; // @synthesize m_nsUrl=_m_nsUrl;
@property(retain, nonatomic) NSString *nsDesc; // @synthesize nsDesc=_nsDesc;
@property(retain, nonatomic) NSString *nsTitle; // @synthesize nsTitle=_nsTitle;
@property(retain, nonatomic) RedPacketStoryInfo_WxappInfo *m_wxAppInfo; // @synthesize m_wxAppInfo=_m_wxAppInfo;
@property(retain, nonatomic) RedPacketStoryInfo_StoryDetail *m_storyDetail; // @synthesize m_storyDetail=_m_storyDetail;
@property(nonatomic) unsigned int m_loopCount; // @synthesize m_loopCount=_m_loopCount;
@property(nonatomic) double m_lastStopTime; // @synthesize m_lastStopTime=_m_lastStopTime;
@property(retain, nonatomic) WCPlayerPlaybackInfo *m_storyPlayerReporter; // @synthesize m_storyPlayerReporter=_m_storyPlayerReporter;
@property(nonatomic) __weak id <WCRedEnvelopesStoryPageViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)setMuteBtn:(_Bool)arg1;
- (void)onTapMutaBtn;
- (void)onTapSightIconView;
- (void)onLoopPlayToEnd;
- (id)initWithFrame:(struct CGRect)arg1 withStoryDetail:(id)arg2 subtypeId:(unsigned int)arg3 index:(long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1 withStoryDetail:(id)arg2 subtypeId:(unsigned int)arg3 index:(long long)arg4 wxAppInfo:(id)arg5;
- (void)onClickGetSameRedSkinEntryBtn:(id)arg1;
- (id)getSameCoverButtonView;
- (void)onVideoPlay;
- (id)createPlayerInfoFromMediaWrap:(id)arg1;
- (void)onLoadWCPayWebImageFail:(id)arg1;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (_Bool)isNotchScreen;
- (void)setDefaultImage:(id)arg1;
- (void)setImageUrl:(id)arg1;
- (void)updateViews;
- (void)layoutSubviews;
- (id)createPlayerConfig;
- (id)createMediaWrapFromURL:(id)arg1;
- (void)stopPlaying;
- (void)resumePaying:(_Bool)arg1;
- (void)resumePaying;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

