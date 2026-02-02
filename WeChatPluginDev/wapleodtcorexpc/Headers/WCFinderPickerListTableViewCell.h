//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, NSString, RichTextView, UIImageView, UILabel, WCFinderAuthInfoIconView, WCFinderFeedContentVM, WCFinderFullNewMultiMediaView, WCFinderHeadImageView, WCFinderNormalProgressBar;
@protocol WCFinderPickerListTableViewCellDelegate;

@interface WCFinderPickerListTableViewCell
{
    _Bool _isPaused;
    id <WCFinderPickerListTableViewCellDelegate> _delegate;
    WCFinderFullNewMultiMediaView *_mediaView;
    WCFinderFeedContentVM *_contentVM;
    WCFinderHeadImageView *_headView;
    WCFinderAuthInfoIconView *_authView;
    RichTextView *_nameLabel;
    UIImageView *_likeIcon;
    UILabel *_likeNumLabel;
    RichTextView *_contentLabel;
    WCFinderNormalProgressBar *_progressBar;
    CAGradientLayer *_gradientLayer;
    UILabel *_curProgressTimeLabel;
    UILabel *_totalProgressTimeLabel;
    UIImageView *_pauseView;
    double _duration;
}

+ (double)cellH;
+ (id)cellId;
- (void).cxx_destruct;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(retain, nonatomic) UIImageView *pauseView; // @synthesize pauseView=_pauseView;
@property(retain, nonatomic) UILabel *totalProgressTimeLabel; // @synthesize totalProgressTimeLabel=_totalProgressTimeLabel;
@property(retain, nonatomic) UILabel *curProgressTimeLabel; // @synthesize curProgressTimeLabel=_curProgressTimeLabel;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) WCFinderNormalProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) RichTextView *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *likeNumLabel; // @synthesize likeNumLabel=_likeNumLabel;
@property(retain, nonatomic) UIImageView *likeIcon; // @synthesize likeIcon=_likeIcon;
@property(retain, nonatomic) RichTextView *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authView; // @synthesize authView=_authView;
@property(retain, nonatomic) WCFinderHeadImageView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) WCFinderFullNewMultiMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(nonatomic) __weak id <WCFinderPickerListTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_triggerAntiAddictCheckLogic;
- (void)stopVideoIfSupport;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(_Bool)arg2;
- (_Bool)shouldCaluculateAsFocusCell;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onPlayerProgressBarCurPlayPrecent:(double)arg1 dragState:(unsigned long long)arg2;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onTap:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setTargetViewHidden:(_Bool)arg1;
- (_Bool)isSupportVideoProcess;
- (void)layoutSubviews;
- (id)createGradientLayer;
- (void)updateMediaWith:(id)arg1 isSubScene:(_Bool)arg2;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

