//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, MMUIButton, NSString, UIImageView, UILabel, UIStackView, UIView;

@interface WCFinderMSActionToolBarCell
{
    UIView *_progressView;
    CAShapeLayer *_ovalShapeLayer;
    UILabel *_tipsLabel;
    UIStackView *_normalStackView;
    UILabel *_timeLabel;
    UIImageView *_stickyTopIcon;
    MMUIButton *_moreButton;
    UIStackView *_actionStackView;
    MMUIButton *_likeButton;
    MMUIButton *_commentButton;
}

+ (struct CGSize)calculateDisplaySize:(struct CGSize)arg1 forVM:(id)arg2 cellIdentifier:(id)arg3 showSceneIntroduce:(_Bool)arg4;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) MMUIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIStackView *actionStackView; // @synthesize actionStackView=_actionStackView;
@property(retain, nonatomic) MMUIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIImageView *stickyTopIcon; // @synthesize stickyTopIcon=_stickyTopIcon;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIStackView *normalStackView; // @synthesize normalStackView=_normalStackView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) CAShapeLayer *ovalShapeLayer; // @synthesize ovalShapeLayer=_ovalShapeLayer;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
- (void)onFeedContentStickyTopStatueChanged:(id)arg1;
- (void)onFinderDataItemPostProgressWithTid:(id)arg1 progress:(id)arg2;
- (void)onLongPress:(id)arg1;
- (id)commentCount:(id)arg1;
- (id)favCount:(id)arg1;
- (void)onFeedContent:(id)arg1 commentDataChanged:(id)arg2;
- (void)onFeedContent:(id)arg1 favDataChanged:(id)arg2;
- (void)onClickMore;
- (void)onClickComment;
- (void)onClickLike;
- (void)updateProgress:(double)arg1;
- (void)onContentVMChanged;
- (void)setupLayout;
- (void)prepareForReuse;
- (id)createAcitonButton:(id)arg1 iconSize:(double)arg2 iconColor:(id)arg3 action:(SEL)arg4;
- (void)setupActionStackView;
- (void)setupNormalStackView;
- (void)setupUploadingStackView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

