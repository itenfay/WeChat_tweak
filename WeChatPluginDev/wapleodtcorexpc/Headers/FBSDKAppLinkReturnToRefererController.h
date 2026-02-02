//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FBSDKAppLinkReturnToRefererView, NSString, UINavigationController;
@protocol FBSDKAppLinkReturnToRefererControllerDelegate;

@interface FBSDKAppLinkReturnToRefererController : NSObject
{
    UINavigationController *_navigationController;
    FBSDKAppLinkReturnToRefererView *_view;
    id <FBSDKAppLinkReturnToRefererControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBSDKAppLinkReturnToRefererControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)openRefererAppLink:(id)arg1;
- (void)closeViewAnimated:(_Bool)arg1 explicitlyClosed:(_Bool)arg2;
- (void)closeViewAnimated:(_Bool)arg1;
- (void)updateNavigationBarY:(double)arg1;
- (void)moveNavigationBar;
- (void)orientationDidChange:(id)arg1;
- (void)statusBarFrameDidChange:(id)arg1;
- (void)statusBarFrameWillChange:(id)arg1;
- (void)returnToRefererViewDidTapInsideLink:(id)arg1 link:(id)arg2;
- (void)returnToRefererViewDidTapInsideCloseButton:(id)arg1;
- (void)removeFromNavController;
- (void)showViewForRefererURL:(id)arg1;
- (void)showViewForRefererAppLink:(id)arg1;
@property(retain, nonatomic) FBSDKAppLinkReturnToRefererView *view;
- (void)dealloc;
- (id)initForDisplayAboveNavController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

