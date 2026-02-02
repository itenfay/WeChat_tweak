//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLivePurchasedComposedViewControllerOpenParams, MMLiteAppViewController, NSString, WCFinderNavTabTitleView;

@interface MMFinderLivePurchasedComposedViewController
{
    MMFinderLivePurchasedComposedViewControllerOpenParams *_openParam;
    WCFinderNavTabTitleView *_customTitleView;
    MMLiteAppViewController *_paidMicViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiteAppViewController *paidMicViewController; // @synthesize paidMicViewController=_paidMicViewController;
@property(retain, nonatomic) WCFinderNavTabTitleView *customTitleView; // @synthesize customTitleView=_customTitleView;
@property(retain, nonatomic) MMFinderLivePurchasedComposedViewControllerOpenParams *openParam; // @synthesize openParam=_openParam;
- (_Bool)gestureRecognizerShouldBeginForCollectionView:(id)arg1 gestureRecognizer:(id)arg2 ignoreReturnAndCallSuper:(_Bool *)arg3;
- (void)unembedChildViewController:(id)arg1;
- (void)embedSubviewFromChildViewController:(id)arg1;
- (void)loadPaidMicLiteAppViewController;
- (id)definePages;
- (void)viewDidLayoutSubviews;
- (_Bool)shouldRelayoutCollectionView;
- (double)collectionViewTopMargin;
- (id)titleView;
- (void)installTitleView;
- (void)viewDidLoad;
- (id)initWithParam:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

