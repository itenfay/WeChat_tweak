//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, MMUILabel, NSString, UITapGestureRecognizer, UIView;
@protocol MMFinderLivePaymentTrialModeCellDelegate;

@interface MMFinderLivePaymentTrialModeCell
{
    _Bool _isSelected;
    id <MMFinderLivePaymentTrialModeCellDelegate> _delegate;
    NSString *_detailTitle;
    NSString *_detailDescription;
    long long _purchaseLivePreviewType;
    MMUILabel *_detailTitleLabel;
    MMUILabel *_detailDescriptionLabel;
    MMUIImageView *_selectStatusImageView;
    UIView *_separatorLine;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) MMUIImageView *selectStatusImageView; // @synthesize selectStatusImageView=_selectStatusImageView;
@property(retain, nonatomic) MMUILabel *detailDescriptionLabel; // @synthesize detailDescriptionLabel=_detailDescriptionLabel;
@property(retain, nonatomic) MMUILabel *detailTitleLabel; // @synthesize detailTitleLabel=_detailTitleLabel;
@property(nonatomic) long long purchaseLivePreviewType; // @synthesize purchaseLivePreviewType=_purchaseLivePreviewType;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSString *detailDescription; // @synthesize detailDescription=_detailDescription;
@property(retain, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
@property(nonatomic) __weak id <MMFinderLivePaymentTrialModeCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initViews;
- (void)onTapped;
- (id)initWithFrame:(struct CGRect)arg1 purchaseLivePreviewType:(long long)arg2;

@end

