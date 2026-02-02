//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMMusicPlayerContoller, NSString, UIButton, UIImageView, UILabel, WCFinderAnimationLoadingView, WCFinderMusicFeedVM, WCFinderProgressView;
@protocol WCFinderProfileMusicViewDelegate;

@interface WCFinderProfileMusicView : UIView
{
    _Bool _isFirstRow;
    id <WCFinderProfileMusicViewDelegate> _delegate;
    WCFinderMusicFeedVM *_feedVM;
    UIView *_accessiblityView;
    UIView *_coverView;
    UIView *_viewCountContainer;
    UILabel *_viewCountLabel;
    UIImageView *_likeIconView;
    UIImageView *_mvIconView;
    MMMusicPlayerContoller *_musicPlayerCtrl;
    UILabel *_titleLabel;
    UILabel *_authorLabel;
    UILabel *_descLabel;
    UILabel *_timeLabel;
    WCFinderAnimationLoadingView *_loadingView;
    UIImageView *_failedIconView;
    UILabel *_statusLabel;
    UILabel *_typeLabel;
    UIButton *_delButton;
    UIButton *_retryButton;
    WCFinderProgressView *_progressView;
    UIView *_leftContainer;
    UIView *_rightContainer;
    unsigned long long _type;
    NSString *_oldObserveKey;
}

+ (double)displayHeightWithIndexPath:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isFirstRow; // @synthesize isFirstRow=_isFirstRow;
@property(retain, nonatomic) NSString *oldObserveKey; // @synthesize oldObserveKey=_oldObserveKey;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIView *rightContainer; // @synthesize rightContainer=_rightContainer;
@property(retain, nonatomic) UIView *leftContainer; // @synthesize leftContainer=_leftContainer;
@property(retain, nonatomic) WCFinderProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) UIButton *delButton; // @synthesize delButton=_delButton;
@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIImageView *failedIconView; // @synthesize failedIconView=_failedIconView;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMMusicPlayerContoller *musicPlayerCtrl; // @synthesize musicPlayerCtrl=_musicPlayerCtrl;
@property(retain, nonatomic) UIImageView *mvIconView; // @synthesize mvIconView=_mvIconView;
@property(retain, nonatomic) UIImageView *likeIconView; // @synthesize likeIconView=_likeIconView;
@property(retain, nonatomic) UILabel *viewCountLabel; // @synthesize viewCountLabel=_viewCountLabel;
@property(retain, nonatomic) UIView *viewCountContainer; // @synthesize viewCountContainer=_viewCountContainer;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIView *accessiblityView; // @synthesize accessiblityView=_accessiblityView;
@property(retain, nonatomic) WCFinderMusicFeedVM *feedVM; // @synthesize feedVM=_feedVM;
@property(nonatomic) __weak id <WCFinderProfileMusicViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)collectionCell;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)onClickDelete;
- (void)onClickRetry;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)configLoadingView:(id)arg1 hidden:(_Bool)arg2;
- (id)createButton:(id)arg1 iconName:(id)arg2 action:(SEL)arg3;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(_Bool)arg3;
- (void)feedVMProgressDidUpdate:(id)arg1;
- (void)feedVMDidUpdate:(id)arg1;
- (id)curThumbImage;
- (void)layoutArrangeViews:(id)arg1 originX:(double)arg2;
- (_Bool)displayAlignCenterWithStyle:(long long)arg1;
- (void)layoutRightViewWithStyle:(long long)arg1;
- (void)layoutContainer:(id)arg1 spacing:(double)arg2 maxWidth:(double)arg3;
- (void)layoutSubviews;
- (id)statusTextForStatus:(long long)arg1;
- (id)fetchCovertDisplayViewFromContainer:(id)arg1 viewClass:(Class)arg2;
- (_Bool)updateCoverViewWithMediaInfo:(id)arg1 coverUrl:(id)arg2;
- (void)updateTypeInfo:(id)arg1;
- (void)updateLabel:(id)arg1 hidden:(_Bool)arg2 text:(id)arg3 fatWidth:(double)arg4;
- (void)update:(id)arg1 type:(unsigned long long)arg2 isFirstRow:(_Bool)arg3;
- (void)addSubviews:(id)arg1 toRoot:(id)arg2;
- (void)setupUI;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

