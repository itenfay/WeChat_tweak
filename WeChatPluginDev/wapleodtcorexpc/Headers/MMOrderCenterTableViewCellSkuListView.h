//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMOrderCenterTableViewCellSkuListExpander, NSArray, NSMutableArray, NSString;
@protocol MMOrderCenterTableViewCellComponentAggregatedDelegate;

@interface MMOrderCenterTableViewCellSkuListView : UIView
{
    id <MMOrderCenterTableViewCellComponentAggregatedDelegate> _delegate;
    MMOrderCenterTableViewCellSkuListExpander *_expander;
    NSMutableArray *_accessibilityElementsArray;
    NSArray *_skuViews;
}

+ (double)expanderHeight;
+ (double)heightForOrder:(id)arg1 inWidth:(double)arg2 estimate:(_Bool)arg3;
+ (_Bool)shouldUseComponentForOrder:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *skuViews; // @synthesize skuViews=_skuViews;
@property(retain, nonatomic) NSMutableArray *accessibilityElementsArray; // @synthesize accessibilityElementsArray=_accessibilityElementsArray;
@property(retain, nonatomic) MMOrderCenterTableViewCellSkuListExpander *expander; // @synthesize expander=_expander;
@property(nonatomic) __weak id <MMOrderCenterTableViewCellComponentAggregatedDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityElements;
- (void)onExpanderTapped;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)addSkuItems:(id)arg1 order:(id)arg2;
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

