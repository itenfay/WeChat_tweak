//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UIView;
@protocol MMOrderCenterTableViewCellComponent, MMOrderCenterTableViewModularCellDelegate;

@interface MMOrderCenterTableViewModularCell
{
    id <MMOrderCenterTableViewModularCellDelegate> _delegate;
    UIView<MMOrderCenterTableViewCellComponent> *_headerView;
    UIView<MMOrderCenterTableViewCellComponent> *_skuListView;
    UIView<MMOrderCenterTableViewCellComponent> *_trackingView;
    UIView<MMOrderCenterTableViewCellComponent> *_priceView;
    UIView<MMOrderCenterTableViewCellComponent> *_timeReviewView;
    UIView<MMOrderCenterTableViewCellComponent> *_finderRefererView;
    NSArray *_components;
}

+ (double)cellHeightForOrder:(id)arg1 inWidth:(double)arg2 estimate:(_Bool)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *components; // @synthesize components=_components;
@property(retain, nonatomic) UIView<MMOrderCenterTableViewCellComponent> *finderRefererView; // @synthesize finderRefererView=_finderRefererView;
@property(retain, nonatomic) UIView<MMOrderCenterTableViewCellComponent> *timeReviewView; // @synthesize timeReviewView=_timeReviewView;
@property(retain, nonatomic) UIView<MMOrderCenterTableViewCellComponent> *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) UIView<MMOrderCenterTableViewCellComponent> *trackingView; // @synthesize trackingView=_trackingView;
@property(retain, nonatomic) UIView<MMOrderCenterTableViewCellComponent> *skuListView; // @synthesize skuListView=_skuListView;
@property(retain, nonatomic) UIView<MMOrderCenterTableViewCellComponent> *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <MMOrderCenterTableViewModularCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateAccessibilityElements;
- (id)updateComponent:(id)arg1 ofClass:(Class)arg2 withOrder:(id)arg3;
- (struct CGPoint)layoutComponent:(id)arg1 atPosition:(struct CGPoint)arg2 withBottomMargin:(double)arg3;
- (void)reportEvent:(id)arg1 params:(id)arg2;
- (void)onReviewButtonTapped;
- (void)onTrackingViewTapped;
- (void)onExpandTapped;
- (void)onStoreAvatarTapped;
- (void)onFinderRefererTapped;
- (void)onCellWillDisplay;
- (void)layoutSubviews;
- (void)updateCellWithOrder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

