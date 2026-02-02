//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLivePurchasedComposedViewControllerOpenParams, NSString;

@interface WCFinderPurchasedViewController
{
    _Bool _shouldHideMemberTab;
    _Bool _shouldHidePaidCollectionTab;
    _Bool _shouldHideLiveTab;
    MMFinderLivePurchasedComposedViewControllerOpenParams *_composedOpenParam;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLivePurchasedComposedViewControllerOpenParams *composedOpenParam; // @synthesize composedOpenParam=_composedOpenParam;
@property(nonatomic) _Bool shouldHideLiveTab; // @synthesize shouldHideLiveTab=_shouldHideLiveTab;
@property(nonatomic) _Bool shouldHidePaidCollectionTab; // @synthesize shouldHidePaidCollectionTab=_shouldHidePaidCollectionTab;
@property(nonatomic) _Bool shouldHideMemberTab; // @synthesize shouldHideMemberTab=_shouldHideMemberTab;
- (_Bool)gestureRecognizerShouldBeginForCollectionView:(id)arg1 gestureRecognizer:(id)arg2 ignoreReturnAndCallSuper:(_Bool *)arg3;
- (void)unembedChildViewController:(id)arg1;
- (void)embedSubviewFromChildViewController:(id)arg1;
- (id)definePages;
- (void)viewDidLoad;
- (id)initWithPurchasedComposedOpenParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

