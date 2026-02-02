//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveShopShelfCoordinator, MMFinderLiveShopShelfCouponsTableContainerView, MMFinderLiveTaskId, NSString;
@protocol MMFinderLiveCouponsViewDelegate;

@interface MMFinderLiveCouponsView : UIView
{
    MMFinderLiveShopShelfCoordinator *_shopShelfCoordinator;
    id <MMFinderLiveCouponsViewDelegate> _delegate;
    MMFinderLiveTaskId *_taskID;
    MMFinderLiveShopShelfCouponsTableContainerView *_containerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveShopShelfCouponsTableContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskID; // @synthesize taskID=_taskID;
@property(nonatomic) __weak id <MMFinderLiveCouponsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MMFinderLiveShopShelfCoordinator *shopShelfCoordinator; // @synthesize shopShelfCoordinator=_shopShelfCoordinator;
- (void)updateWithCoordinator;
- (void)stopLoading;
- (void)startLoading;
- (void)onHeaderViewBackButtonClicked;
- (void)layoutSubviews;
- (id)cellViewModelsBy:(id)arg1;
- (id)initWithTaskID:(id)arg1 shopShelfCoordinator:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

