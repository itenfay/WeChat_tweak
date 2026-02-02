//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MultiDeviceLoginConfirmInfo, MultiDeviceLoginInfo, NSString;
@protocol MultiDeviceLoginLogicDelegate;

@interface MultiDeviceLoginLogic : NSObject
{
    _Bool _showingVerifyWebView;
    id <MultiDeviceLoginLogicDelegate> _delegate;
    MultiDeviceLoginInfo *_info;
    MultiDeviceLoginConfirmInfo *_confirmInfo;
}

+ (void)cancelLoginWithLoginUrlStr:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool showingVerifyWebView; // @synthesize showingVerifyWebView=_showingVerifyWebView;
@property(retain, nonatomic) MultiDeviceLoginConfirmInfo *confirmInfo; // @synthesize confirmInfo=_confirmInfo;
@property(retain, nonatomic) MultiDeviceLoginInfo *info; // @synthesize info=_info;
@property(nonatomic) __weak id <MultiDeviceLoginLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)webViewDidReturn:(id)arg1;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(_Bool *)arg3;
- (void)markMultiDeviceGuideShown;
- (_Bool)needShowMultiDeviceGuide;
- (void)privateConfirmLoginWithInfo:(id)arg1;
- (void)confirmLoginWithInfo:(id)arg1;
- (void)cancelLogin;
- (void)jumpToUsageURL;
- (id)initWithLoginInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

