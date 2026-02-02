//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UILabel;
@protocol WCPayNFCCardDepositViewDelegate;

@interface WCPayNFCCardDepositView : UIView
{
    _Bool _isFreeFilled;
    _Bool _isSelected;
    long long _depositAmount;
    id <WCPayNFCCardDepositViewDelegate> _delegate;
    UIView *_labelView;
    UILabel *_amountLabel;
    UILabel *_suffixLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) UILabel *suffixLabel; // @synthesize suffixLabel=_suffixLabel;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UIView *labelView; // @synthesize labelView=_labelView;
@property(nonatomic) __weak id <WCPayNFCCardDepositViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isFreeFilled; // @synthesize isFreeFilled=_isFreeFilled;
@property(nonatomic) long long depositAmount; // @synthesize depositAmount=_depositAmount;
- (void)setSelected:(_Bool)arg1;
- (void)updateView;
- (void)onTapDepositView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

