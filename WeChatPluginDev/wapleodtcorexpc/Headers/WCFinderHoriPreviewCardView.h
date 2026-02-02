//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, SightIconView, UILabel, WCFinderFeedStaticCoverView;
@protocol WCFinderHoriPreviewCardViewDelegate;

@interface WCFinderHoriPreviewCardView
{
    id <WCFinderHoriPreviewCardViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    MMUIButton *_editButton;
    WCFinderFeedStaticCoverView *_coverView;
    SightIconView *_playIconView;
    unsigned long long _style;
}

+ (double)getCoverWidHeightRatioByStyle:(unsigned long long)arg1;
+ (double)getCoverTargetHeightRatioByStyle:(unsigned long long)arg1;
+ (id)getCoverTitleTipsByStyle:(unsigned long long)arg1;
+ (id)getDescTipsByStyle:(unsigned long long)arg1;
+ (id)getTitleTipsByStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) WCFinderFeedStaticCoverView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) MMUIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WCFinderHoriPreviewCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickEditBtn;
- (void)layoutAllSubviews;
- (void)loadFromDataItem:(id)arg1;
- (void)updateCoverViewStyle:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;

@end

