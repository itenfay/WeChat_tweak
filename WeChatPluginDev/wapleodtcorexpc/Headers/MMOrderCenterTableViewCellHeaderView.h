//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, NSArray, NSString, UIImageView, UILabel;
@protocol MMOrderCenterTableViewCellComponentAggregatedDelegate;

@interface MMOrderCenterTableViewCellHeaderView : UIView
{
    id <MMOrderCenterTableViewCellComponentAggregatedDelegate> _delegate;
    MMWebImageView *_outletAvatarView;
    UILabel *_outletNameView;
    UIImageView *_rightChevronView;
    UILabel *_storeNameView;
    NSArray *_outletNameTagViews;
    UILabel *_statusView;
}

+ (double)heightForOrder:(id)arg1 inWidth:(double)arg2 estimate:(_Bool)arg3;
+ (_Bool)shouldUseComponentForOrder:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) NSArray *outletNameTagViews; // @synthesize outletNameTagViews=_outletNameTagViews;
@property(retain, nonatomic) UILabel *storeNameView; // @synthesize storeNameView=_storeNameView;
@property(retain, nonatomic) UIImageView *rightChevronView; // @synthesize rightChevronView=_rightChevronView;
@property(retain, nonatomic) UILabel *outletNameView; // @synthesize outletNameView=_outletNameView;
@property(retain, nonatomic) MMWebImageView *outletAvatarView; // @synthesize outletAvatarView=_outletAvatarView;
@property(nonatomic) __weak id <MMOrderCenterTableViewCellComponentAggregatedDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityElements;
- (void)updateStatusViewWithOrder:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onTapped;
- (void)layoutSubviews;
- (void)updateOutletNameTagViewsWithOrder:(id)arg1;
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

