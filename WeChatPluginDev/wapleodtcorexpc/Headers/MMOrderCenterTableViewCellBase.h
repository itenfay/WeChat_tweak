//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMCustomerOrderInfo, UIView;

@interface MMOrderCenterTableViewCellBase : UITableViewCell
{
    MMCustomerOrderInfo *_order;
    UIView *_containerView;
    UIView *_highlightingView;
}

+ (double)cellHeightForOrder:(id)arg1 inWidth:(double)arg2 estimate:(_Bool)arg3;
+ (double)availableContentWidthForCellWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightingView; // @synthesize highlightingView=_highlightingView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMCustomerOrderInfo *order; // @synthesize order=_order;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateContainerViewHeight:(double)arg1;
- (void)updateCellWithOrder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

