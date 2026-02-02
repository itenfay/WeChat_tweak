//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMCustomerOrderInfo, NSArray, NSString;
@protocol MMOrderCenterTableViewCellComponentAggregatedDelegate;

@interface MMOrderCenterTableViewCellPriceView : UIView
{
    id <MMOrderCenterTableViewCellComponentAggregatedDelegate> _delegate;
    MMCustomerOrderInfo *_order;
    NSArray *_labels;
}

+ (id)pricePartsForOrder:(id)arg1;
+ (long long)itemCountInOrder:(id)arg1;
+ (id)itemCountLocalizedStringForOrder:(id)arg1;
+ (double)heightForOrder:(id)arg1 inWidth:(double)arg2 estimate:(_Bool)arg3;
+ (void)getPartsLineIndexWith:(id)arg1 getSize:(CDUnknownBlockType)arg2 getFont:(CDUnknownBlockType)arg3 maxWidth:(double)arg4 partResultAction:(CDUnknownBlockType)arg5;
+ (_Bool)shouldUseComponentForOrder:(id)arg1;
+ (id)fontForType:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) MMCustomerOrderInfo *order; // @synthesize order=_order;
@property(nonatomic) __weak id <MMOrderCenterTableViewCellComponentAggregatedDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)accessibilityFrame;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
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

