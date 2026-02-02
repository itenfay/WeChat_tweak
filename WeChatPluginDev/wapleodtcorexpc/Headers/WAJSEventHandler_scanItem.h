//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol IWACameraScanViewControllerHelper;

@interface WAJSEventHandler_scanItem
{
    id <IWACameraScanViewControllerHelper> _viewControllerHelper;
    NSString *_scanResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *scanResult; // @synthesize scanResult=_scanResult;
@property(retain, nonatomic) id <IWACameraScanViewControllerHelper> viewControllerHelper; // @synthesize viewControllerHelper=_viewControllerHelper;
- (void)onCameraScanViewControllerDidBePoped;
- (void)onScanItemResult:(id)arg1;
- (void)showScanItemWithParams:(id)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

