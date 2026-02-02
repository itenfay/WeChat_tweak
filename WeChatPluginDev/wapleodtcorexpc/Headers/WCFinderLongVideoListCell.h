//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, MMUIButton, MMWebImageView, NSString, RichTextView, UILabel, UIView, WCFinderAuthorContactRecommendView, WCFinderFeedContentVM, WCFinderFriendLikeCustomInfoView, WCFinderSimplePlayerView, _TtC6WeChat25WCFinderSimpleProgressBar;
@protocol WCFinderLongVideoListCellDelegate;

@interface WCFinderLongVideoListCell : UICollectionViewCell
{
    _Bool _needCallbackAutoPlay;
    id <WCFinderLongVideoListCellDelegate> _delegate;
    NSString *_playSessionId;
    WCFinderFeedContentVM *_contentVM;
    UILabel *_recommendReasonLabel;
    WCFinderFriendLikeCustomInfoView *_friendLikeInfoView;
    WCFinderAuthorContactRecommendView *_contactView;
    RichTextView *_titleContentView;
    MMWebImageView *_feedImageView;
    UILabel *_timeLabel;
    WCFinderSimplePlayerView *_playerView;
    CAGradientLayer *_bottomGradientLayer;
    unsigned long long _playStartTsInMs;
    double _startVideoPlayTime;
    MMWebImageView *_fullFeedImageView;
    UIView *_fullFeedImageViewContainer;
    UIView *_playerContainerView;
    _TtC6WeChat25WCFinderSimpleProgressBar *_progressBar;
    UIView *_seperateLine;
    MMUIButton *_landscapeButton;
    struct WCShowArea _playerViewShowArea;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needCallbackAutoPlay; // @synthesize needCallbackAutoPlay=_needCallbackAutoPlay;
@property(retain, nonatomic) MMUIButton *landscapeButton; // @synthesize landscapeButton=_landscapeButton;
@property(retain, nonatomic) UIView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) _TtC6WeChat25WCFinderSimpleProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) UIView *playerContainerView; // @synthesize playerContainerView=_playerContainerView;
@property(retain, nonatomic) UIView *fullFeedImageViewContainer; // @synthesize fullFeedImageViewContainer=_fullFeedImageViewContainer;
@property(retain, nonatomic) MMWebImageView *fullFeedImageView; // @synthesize fullFeedImageView=_fullFeedImageView;
@property(nonatomic) double startVideoPlayTime; // @synthesize startVideoPlayTime=_startVideoPlayTime;
@property(nonatomic) unsigned long long playStartTsInMs; // @synthesize playStartTsInMs=_playStartTsInMs;
@property(retain, nonatomic) CAGradientLayer *bottomGradientLayer; // @synthesize bottomGradientLayer=_bottomGradientLayer;
@property(nonatomic) struct WCShowArea playerViewShowArea; // @synthesize playerViewShowArea=_playerViewShowArea;
@property(retain, nonatomic) WCFinderSimplePlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) MMWebImageView *feedImageView; // @synthesize feedImageView=_feedImageView;
@property(retain, nonatomic) RichTextView *titleContentView; // @synthesize titleContentView=_titleContentView;
@property(retain, nonatomic) WCFinderAuthorContactRecommendView *contactView; // @synthesize contactView=_contactView;
@property(retain, nonatomic) WCFinderFriendLikeCustomInfoView *friendLikeInfoView; // @synthesize friendLikeInfoView=_friendLikeInfoView;
@property(retain, nonatomic) UILabel *recommendReasonLabel; // @synthesize recommendReasonLabel=_recommendReasonLabel;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) NSString *playSessionId; // @synthesize playSessionId=_playSessionId;
@property(nonatomic) __weak id <WCFinderLongVideoListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onGlobalPlaybackInfoUpdatedWithTid:(id)arg1;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)updateTimeLabel:(int)arg1;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (id)coverSnapshot;
- (struct CGRect)coverPosition;
- (id)showingRecommendReason;
- (int)getCommentScene;
- (long long)maxProgress;
- (unsigned long long)realPlayTimeInMs;
- (double)currentVideoPlayTime;
- (_Bool)currentPlaying;
- (CDUnknownBlockType)fakeStopPlay;
- (void)stopPlay;
- (void)startPlay;
- (void)onLongPress:(id)arg1;
- (double)mylayout;
- (void)layoutSubviews;
- (struct CGSize)getCellSizeWithContentVM:(id)arg1 showSeperateLine:(_Bool)arg2 maxSize:(struct CGSize)arg3;
- (void)updateContentVM:(id)arg1 showSeperateLine:(_Bool)arg2;
- (void)setUpUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

