//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, SKStoreProductViewController;

@interface WCCanvasWebStoreComponent
{
    SKStoreProductViewController *_productViewController;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) SKStoreProductViewController *productViewController; // @synthesize productViewController=_productViewController;
- (void)doAppStoreColorReport;
- (void)reportSKLoadingTimeWithBeginTime:(unsigned long long)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)dismissProductViewController;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)initViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

