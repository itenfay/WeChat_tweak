//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, NSString, RichTextView, UILabel, UIView, WCFinderAuthorContactRecommendView, WCFinderFeedContentVM, WCFinderLandScapeCardCellStyle, WCFinderStaticCoverInfoView, _TtC6WeChat25WCFinderSimpleProgressBar;
@protocol WCFinderLandScapeBidCardTableViewCellDelegate;

@interface WCFinderLandScapeBidCardTableViewCell
{
    id <WCFinderLandScapeBidCardTableViewCellDelegate> _bigCardCellDelegate;
    MMWebImageView *_coverView;
    UIView *_backView;
    RichTextView *_descLabel;
    UILabel *_timeLabel;
    WCFinderStaticCoverInfoView *_infoView;
    UILabel *_recommendReasonLabel;
    UILabel *_maskLabel;
    WCFinderAuthorContactRecommendView *_contactView;
    _TtC6WeChat25WCFinderSimpleProgressBar *_progressBar;
    UIView *_seperateLine;
    WCFinderFeedContentVM *_contentVM;
    WCFinderLandScapeCardCellStyle *_style;
}

+ (double)cellHeightWithDataItem:(id)arg1 viewW:(double)arg2;
+ (id)cellId;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLandScapeCardCellStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) UIView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) _TtC6WeChat25WCFinderSimpleProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) WCFinderAuthorContactRecommendView *contactView; // @synthesize contactView=_contactView;
@property(retain, nonatomic) UILabel *maskLabel; // @synthesize maskLabel=_maskLabel;
@property(retain, nonatomic) UILabel *recommendReasonLabel; // @synthesize recommendReasonLabel=_recommendReasonLabel;
@property(retain, nonatomic) WCFinderStaticCoverInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) RichTextView *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) MMWebImageView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) __weak id <WCFinderLandScapeBidCardTableViewCellDelegate> bigCardCellDelegate; // @synthesize bigCardCellDelegate=_bigCardCellDelegate;
- (void)onGlobalPlaybackInfoUpdatedWithTid:(id)arg1;
- (void)onFinderDataItemUpdate:(id)arg1;
- (id)recommendReasonColor;
- (double)backViewWidth;
- (void)layoutSubviews;
- (void)updateWithContentVM:(id)arg1 style:(id)arg2;
- (void)updateWithContentVM:(id)arg1;
- (void)prepareForReuse;
- (void)setShowMaskView:(_Bool)arg1;
- (void)setupSubViews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

