//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUIButton, NSIndexPath, NSMutableSet, NSString, UIButton, UIColor, UIImageView, UILabel, UIView, WCDownloadArgsWrap, WCFinderCommentSectionViewModel, WCFinderFeedContentTextView, WCFinderHeadImageView, WCFinderJumpInfoPanelView, WCFinderLiveNowView, WCPlayerView;
@protocol WCFinderCommentAdTableViewCellDelegate;

@interface WCFinderCommentAdTableViewCell : UITableViewCell
{
    _Bool _isOnFirstScreen;
    _Bool _isExposing;
    WCPlayerView *playerView;
    id <WCFinderCommentAdTableViewCellDelegate> _delegate;
    WCFinderCommentSectionViewModel *_commentVM;
    NSIndexPath *_indexPath;
    UIColor *_customBgColor;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_nickNameLabel;
    UIButton *_feedbackButton;
    WCFinderFeedContentTextView *_textView;
    WCFinderJumpInfoPanelView *_jumpInfoPanelView;
    UIImageView *_adImageView;
    WCFinderLiveNowView *_liveNowView;
    UIView *_cardContainer;
    MMUIButton *_cardActionButton;
    unsigned long long _startExposeTimestamp;
    unsigned long long _startDecodeTimestamp;
    unsigned long long _playCount;
    unsigned long long _videoExposeTime;
    unsigned long long _playTotoalTime;
    WCDownloadArgsWrap *_playerArgsWrap;
    NSMutableSet *_lastBufferEventArray;
    unsigned long long _preloadPercent;
    unsigned long long _startPlayTime;
}

+ (id)commentInViewModel:(id)arg1;
+ (double)heightForMediaWithRatio:(double)arg1 commentViewHeight:(double)arg2 maxHeightPercentage:(long long)arg3 width:(double)arg4 minArea:(unsigned long long)arg5;
+ (double)textViewMaxWidthWith:(double)arg1 avatarLeftMargin:(double)arg2;
+ (double)sectionHeightWith:(id)arg1 width:(double)arg2 halfScreenHeight:(double)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long startPlayTime; // @synthesize startPlayTime=_startPlayTime;
@property(nonatomic) unsigned long long preloadPercent; // @synthesize preloadPercent=_preloadPercent;
@property(retain, nonatomic) NSMutableSet *lastBufferEventArray; // @synthesize lastBufferEventArray=_lastBufferEventArray;
@property(retain, nonatomic) WCDownloadArgsWrap *playerArgsWrap; // @synthesize playerArgsWrap=_playerArgsWrap;
@property(nonatomic) _Bool isExposing; // @synthesize isExposing=_isExposing;
@property(nonatomic) unsigned long long playTotoalTime; // @synthesize playTotoalTime=_playTotoalTime;
@property(nonatomic) unsigned long long videoExposeTime; // @synthesize videoExposeTime=_videoExposeTime;
@property(nonatomic) unsigned long long playCount; // @synthesize playCount=_playCount;
@property(nonatomic) unsigned long long startDecodeTimestamp; // @synthesize startDecodeTimestamp=_startDecodeTimestamp;
@property(nonatomic) unsigned long long startExposeTimestamp; // @synthesize startExposeTimestamp=_startExposeTimestamp;
@property(retain, nonatomic) MMUIButton *cardActionButton; // @synthesize cardActionButton=_cardActionButton;
@property(retain, nonatomic) UIView *cardContainer; // @synthesize cardContainer=_cardContainer;
@property(retain, nonatomic) WCFinderLiveNowView *liveNowView; // @synthesize liveNowView=_liveNowView;
@property(retain, nonatomic) UIImageView *adImageView; // @synthesize adImageView=_adImageView;
@property(retain, nonatomic) WCFinderJumpInfoPanelView *jumpInfoPanelView; // @synthesize jumpInfoPanelView=_jumpInfoPanelView;
@property(retain, nonatomic) WCFinderFeedContentTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIButton *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIColor *customBgColor; // @synthesize customBgColor=_customBgColor;
@property(nonatomic) _Bool isOnFirstScreen; // @synthesize isOnFirstScreen=_isOnFirstScreen;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) WCFinderCommentSectionViewModel *commentVM; // @synthesize commentVM=_commentVM;
@property(nonatomic) __weak id <WCFinderCommentAdTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak WCPlayerView *playerView; // @synthesize playerView;
- (id)getGeneralMonitorCellBizId;
- (void)onPlayerStartPlay:(id)arg1;
- (void)onPlayerDownloadMoovReady:(id)arg1 progressInfo:(id)arg2;
- (void)onPlayerStartDownload:(id)arg1;
- (void)onVideoDidPlayToEndTime;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(_Bool)arg2;
- (double)jumpInfoPanelViewRelateMediaWidth:(id)arg1;
- (void)onFinderJumpInfoViewDidClick:(id)arg1 inArea:(unsigned long long)arg2;
- (void)onFinderJumpInfoViewDidClick:(id)arg1;
- (void)updateFeedbackButtonLayout;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (long long)hitPreloadPercent;
- (_Bool)isVideoExist;
- (id)replaceCommaToSemicolon:(id)arg1;
- (id)getWaitDetailsWith:(id)arg1;
- (void)showCommentMenuView;
- (void)longPress:(id)arg1;
- (void)feedbackButtonClicked;
- (void)clickADContentActionWithArea:(unsigned long long)arg1;
- (void)clickContentLink;
- (id)getComment;
- (void)clickNickname;
- (double)heightForMediaWithRatio:(double)arg1 maxHeightPercentage:(long long)arg2 minArea:(unsigned long long)arg3;
- (void)updatePlayerViewWithCommentInfo:(id)arg1 videoInfo:(id)arg2;
- (void)updateImageViewWithCommentImageInfo:(id)arg1 imgInfo:(id)arg2;
- (void)layoutUI;
- (void)updateLiveLogoIfNeeded;
- (void)updateAvatarCornerWithAuthorFlag:(_Bool)arg1;
- (void)updateAccountInfoWithJumpInfoStyle:(id)arg1;
- (id)loadingMonitorInfo;
- (id)commentAdReportDictWithReportScene:(long long)arg1 clickArea:(unsigned long long)arg2;
- (id)commentAdReportDictWithReportScene:(long long)arg1;
- (_Bool)canReportWithReportScene:(long long)arg1;
- (void)pausePlayIfCan;
- (void)seekToTime:(double)arg1;
- (void)startPlayIfCan;
- (void)checkPlayerExposeState;
- (void)updateWithModel:(id)arg1 width:(double)arg2;
- (void)resetCellData;
- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

