//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CameraScanViewController, NSString;
@protocol WACameraScanViewControllerHelperDelegate;

@interface WACameraScanViewControllerHelper : NSObject
{
    CameraScanViewController *_viewController;
    id <WACameraScanViewControllerHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WACameraScanViewControllerHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CameraScanViewController *viewController; // @synthesize viewController=_viewController;
- (void)onCameraScanViewControllerDidBePoped;
- (void)onScanItemResult:(id)arg1;
- (void)onScanCodeResult:(id)arg1;
- (void)obtainScanResultDidFinish:(id)arg1;
- (_Bool)shouldBackToSessionImmediately;
- (_Bool)shouldObtainScanResult;
- (id)getCameraScanViewViewController;
- (id)initWithScanItemParam:(id)arg1;
- (id)initWithScanCodeParam:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

