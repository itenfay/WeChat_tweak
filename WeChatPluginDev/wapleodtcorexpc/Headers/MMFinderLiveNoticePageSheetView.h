//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveNoticeInfo, MMUIButton, MMUIImageView, MMWebImageView, NSString, UILabel, UIScrollView, WCFinderJumpInfoDynamicCarouselLiveNoticeViewModel;

@interface MMFinderLiveNoticePageSheetView
{
    NSString *_finderUsername;
    FinderLiveNoticeInfo *_noticeInfo;
    CDUnknownBlockType _didClickActionButtonBlock;
    WCFinderJumpInfoDynamicCarouselLiveNoticeViewModel *_dynamicCarouselLiveNoticeViewModel;
    UIScrollView *_contentScrollView;
    MMWebImageView *_iconImageView;
    UILabel *_titleLabel;
    MMUIImageView *_detailIconImageView;
    UILabel *_detailLabel;
    MMUIButton *_actionButton;
}

+ (id)createActionButton;
+ (id)createDetailLabel;
+ (id)createDetailIconImageView;
+ (id)createTitleLabel;
+ (id)createIconImageView;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUIImageView *detailIconImageView; // @synthesize detailIconImageView=_detailIconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) WCFinderJumpInfoDynamicCarouselLiveNoticeViewModel *dynamicCarouselLiveNoticeViewModel; // @synthesize dynamicCarouselLiveNoticeViewModel=_dynamicCarouselLiveNoticeViewModel;
@property(copy, nonatomic) CDUnknownBlockType didClickActionButtonBlock; // @synthesize didClickActionButtonBlock=_didClickActionButtonBlock;
@property(readonly, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(readonly, copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 reserveStateChanged:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)didClickActionButton:(id)arg1;
- (void)fitSizeAndLayout;
- (void)updateSubviews;
- (void)loadContentView;
- (void)_initPageSheet;
- (void)_init;
- (id)initWithFrame:(struct CGRect)arg1 finderUsername:(id)arg2 dynamicCarouselLiveNoticeViewModel:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 finderUsername:(id)arg2 noticeInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

