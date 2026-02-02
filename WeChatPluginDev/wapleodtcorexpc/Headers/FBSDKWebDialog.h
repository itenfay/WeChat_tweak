//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FBSDKWebDialogView, NSDictionary, NSString, UIView;
@protocol FBSDKWebDialogDelegate;

@interface FBSDKWebDialog : NSObject
{
    UIView *_backgroundView;
    FBSDKWebDialogView *_dialogView;
    _Bool _deferVisibility;
    id <FBSDKWebDialogDelegate> _delegate;
    NSString *_name;
    NSDictionary *_parameters;
}

+ (id)showWithName:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <FBSDKWebDialogDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=shouldDeferVisibility) _Bool deferVisibility; // @synthesize deferVisibility=_deferVisibility;
- (void)_updateViewsWithScale:(double)arg1 alpha:(double)arg2 animationDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (struct CGRect)_applicationFrameForOrientation;
- (struct CGAffineTransform)_transformForOrientation;
- (_Bool)_showWebView;
- (id)_generateURL:(id *)arg1;
- (void)_failWithError:(id)arg1;
- (void)_dismissAnimated:(_Bool)arg1;
- (void)_completeWithResults:(id)arg1;
- (void)_cancel;
- (void)_removeObservers;
- (void)_deviceOrientationDidChangeNotification:(id)arg1;
- (void)_addObservers;
- (void)webDialogViewDidFinishLoad:(id)arg1;
- (void)webDialogViewDidCancel:(id)arg1;
- (void)webDialogView:(id)arg1 didFailWithError:(id)arg2;
- (void)webDialogView:(id)arg1 didCompleteWithResults:(id)arg2;
- (_Bool)show;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

