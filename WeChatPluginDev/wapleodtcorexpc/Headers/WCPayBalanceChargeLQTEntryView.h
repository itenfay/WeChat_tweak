//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, UIButton, UIImageView, WCPayBalanceChargeLQTInfo;
@protocol WCPayBalanceChargeLQTEntryViewDelegate;

@interface WCPayBalanceChargeLQTEntryView : UIView
{
    id <WCPayBalanceChargeLQTEntryViewDelegate> _delegate;
    WCPayBalanceChargeLQTInfo *_chargeInfoData;
    UIImageView *_logoImgView;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
    UIImageView *_arrowImgView;
    UIView *_topLineView;
    UIView *_bottomLineView;
    UIButton *_coverBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *coverBtn; // @synthesize coverBtn=_coverBtn;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *logoImgView; // @synthesize logoImgView=_logoImgView;
@property(retain, nonatomic) WCPayBalanceChargeLQTInfo *chargeInfoData; // @synthesize chargeInfoData=_chargeInfoData;
@property(nonatomic) __weak id <WCPayBalanceChargeLQTEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)coverBtnClick;
- (void)reloadContentView;
- (void)refreshContentViewWithChargeInfo:(id)arg1 containerWidth:(double)arg2;
- (id)initContentViewWithContainerWidth:(double)arg1 delegate:(id)arg2;

@end

