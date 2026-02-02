//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderPoiGroupBuyResponse_PoiGroupBuyCoupon, NSMutableArray, UIButton, UIImageView, UILabel, WCFinderFullScrollTextView;
@protocol WCFinderPoiGroupBuyViewDelegate;

@interface WCFinderPoiGroupBuyView : UIView
{
    id <WCFinderPoiGroupBuyViewDelegate> _delegate;
    unsigned long long _viewStyle;
    FinderPoiGroupBuyResponse_PoiGroupBuyCoupon *_groupBuyCoupon;
    UIButton *_actionButton;
    UIImageView *_imageView;
    WCFinderFullScrollTextView *_titleContainerView;
    UILabel *_typeLabel;
    UIView *_tagContainer;
    NSMutableArray *_tagLabelArray;
    UILabel *_discountPriceLabel;
    UILabel *_fullPriceLabel;
    UILabel *_discountLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(retain, nonatomic) UILabel *fullPriceLabel; // @synthesize fullPriceLabel=_fullPriceLabel;
@property(retain, nonatomic) UILabel *discountPriceLabel; // @synthesize discountPriceLabel=_discountPriceLabel;
@property(retain, nonatomic) NSMutableArray *tagLabelArray; // @synthesize tagLabelArray=_tagLabelArray;
@property(retain, nonatomic) UIView *tagContainer; // @synthesize tagContainer=_tagContainer;
@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) WCFinderFullScrollTextView *titleContainerView; // @synthesize titleContainerView=_titleContainerView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) FinderPoiGroupBuyResponse_PoiGroupBuyCoupon *groupBuyCoupon; // @synthesize groupBuyCoupon=_groupBuyCoupon;
@property(nonatomic) unsigned long long viewStyle; // @synthesize viewStyle=_viewStyle;
@property(nonatomic) __weak id <WCFinderPoiGroupBuyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)genTagLabelWithText:(id)arg1;
- (void)onActionButtonClicked:(id)arg1;
- (double)wordingLeft;
- (void)updateLayout;
- (void)updateWithCoupon:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

