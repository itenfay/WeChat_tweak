//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, NSString, UIImageView, UILabel;
@protocol MMFinderLiveShopShelfCouponsSimpleHeaderViewDelegate;

@interface MMFinderLiveShopShelfCouponsSimpleHeaderView : UIView
{
    id <MMFinderLiveShopShelfCouponsSimpleHeaderViewDelegate> _delegate;
    NSString *_title;
    long long _backMode;
    UIImageView *_couponIconView;
    UILabel *_titleLabel;
    MMUIButton *_closeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *couponIconView; // @synthesize couponIconView=_couponIconView;
@property(nonatomic) long long backMode; // @synthesize backMode=_backMode;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <MMFinderLiveShopShelfCouponsSimpleHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickLeftButton:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

