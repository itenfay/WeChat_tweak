//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMCustomerOrderInfo, MMUIButton, NSString;
@protocol MMOrderCenterTableViewCellComponentAggregatedDelegate;

@interface MMOrderCenterTableViewCellTimeReviewView : UIView
{
    id <MMOrderCenterTableViewCellComponentAggregatedDelegate> _delegate;
    MMUIButton *_rateButton;
    MMCustomerOrderInfo *_order;
}

+ (id)rateButtonLabelForOrder:(id)arg1;
+ (id)timeStringForOrder:(id)arg1;
+ (_Bool)shouldUseComponentForOrder:(id)arg1;
+ (double)heightForOrder:(id)arg1 inWidth:(double)arg2 estimate:(_Bool)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) MMCustomerOrderInfo *order; // @synthesize order=_order;
@property(retain, nonatomic) MMUIButton *rateButton; // @synthesize rateButton=_rateButton;
@property(nonatomic) __weak id <MMOrderCenterTableViewCellComponentAggregatedDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onReviewButtonTapped;
- (void)onCellWillDisplay;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateWithOrder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

