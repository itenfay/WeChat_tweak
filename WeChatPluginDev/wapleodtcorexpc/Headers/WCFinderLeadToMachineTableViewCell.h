//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderObjectPlaceHolderInfo, NSString, RichTextView, UIImageView, UIView, WCFinderAuthInfoIconView, WCFinderCustomImageRichTextView, WCFinderDataItem, WCFinderFeedContentVM, WCFinderGradientView, WCFinderHeadImageView, WCFinderSimplePlayerView;
@protocol WCFinderLeadToMachineTableViewCellDelegate;

@interface WCFinderLeadToMachineTableViewCell
{
    id <WCFinderLeadToMachineTableViewCellDelegate> _delegate;
    WCFinderFeedContentVM *_contentVM;
    WCFinderCustomImageRichTextView *_completeTitleView;
    UIView *_leadToMachineContainerView;
    WCFinderCustomImageRichTextView *_leadToMachineTipsLabel;
    UIImageView *_leadToMachineArrowIcon;
    UIView *_playerContainerView;
    WCFinderSimplePlayerView *_playerView;
    WCFinderHeadImageView *_headImgView;
    RichTextView *_nicknameLabel;
    WCFinderAuthInfoIconView *_authIconView;
    WCFinderGradientView *_gradientView;
    RichTextView *_continueScrollTipsView;
    WCFinderDataItem *_playItem;
    double _currentPlayPosition;
    FinderObjectPlaceHolderInfo *_placeHolderInfo;
    struct CGSize _layoutSize;
}

+ (void)reportFailToExposeWithCommentScene:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderObjectPlaceHolderInfo *placeHolderInfo; // @synthesize placeHolderInfo=_placeHolderInfo;
@property(nonatomic) double currentPlayPosition; // @synthesize currentPlayPosition=_currentPlayPosition;
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(retain, nonatomic) WCFinderDataItem *playItem; // @synthesize playItem=_playItem;
@property(retain, nonatomic) RichTextView *continueScrollTipsView; // @synthesize continueScrollTipsView=_continueScrollTipsView;
@property(retain, nonatomic) WCFinderGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) RichTextView *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(retain, nonatomic) WCFinderSimplePlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIView *playerContainerView; // @synthesize playerContainerView=_playerContainerView;
@property(retain, nonatomic) UIImageView *leadToMachineArrowIcon; // @synthesize leadToMachineArrowIcon=_leadToMachineArrowIcon;
@property(retain, nonatomic) WCFinderCustomImageRichTextView *leadToMachineTipsLabel; // @synthesize leadToMachineTipsLabel=_leadToMachineTipsLabel;
@property(retain, nonatomic) UIView *leadToMachineContainerView; // @synthesize leadToMachineContainerView=_leadToMachineContainerView;
@property(retain, nonatomic) WCFinderCustomImageRichTextView *completeTitleView; // @synthesize completeTitleView=_completeTitleView;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) __weak id <WCFinderLeadToMachineTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)pauseMediaPlayShowPauseBtn:(_Bool)arg1;
- (void)stopVideoIfSupport;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(_Bool)arg2;
- (_Bool)currentMediaIsPlay;
- (_Bool)shouldCaluculateAsFocusCell;
- (void)reportEvent:(id)arg1 withNextFeedID:(id)arg2 commentScene:(int)arg3;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setSubviewsHidden:(_Bool)arg1;
- (void)setEmptyState;
- (void)updateWithPlayItem:(id)arg1;
- (id)completeTitleContentWith:(id)arg1;
- (void)updateWithPlaceholderInfo:(id)arg1 playItem:(id)arg2 contentVM:(id)arg3;
- (void)updateWithPlaceholderInfo:(id)arg1 playItem:(id)arg2;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

