//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface KindaViewControllerRouteManager
{
    NSMutableArray *_routeActions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *routeActions; // @synthesize routeActions=_routeActions;
- (void)parseNext;
- (void)addRouteAction:(id)arg1;
- (void)routeActionDidTimeout:(id)arg1;
- (void)closeTinyApp:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)closeTinyApp:(id)arg1 animated:(_Bool)arg2;
- (void)PopViewControllerAndPush:(id)arg1 animated:(_Bool)arg2;
- (void)PopToViewController:(id)arg1 animated:(_Bool)arg2;
- (void)PushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)PushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)PresentModalViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)PresentModalViewController:(id)arg1 animated:(_Bool)arg2;
- (void)DismissModalViewController:(id)arg1 Animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)DismissModalViewController:(id)arg1 Animated:(_Bool)arg2;
- (void)DismissOrPopViewController:(id)arg1 Animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)DismissOrPopViewController:(id)arg1 Animated:(_Bool)arg2;
- (id)previousViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

