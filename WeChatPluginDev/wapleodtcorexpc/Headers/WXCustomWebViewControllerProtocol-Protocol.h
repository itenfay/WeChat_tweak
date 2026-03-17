//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "IWCBaseWebViewControllerProtocol-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, NSURL, UIView, WebViewA8KeyLogicImpl, WebViewJSLogicImpl;
@protocol WXCustomWebViewControllerDelegate, YYWebViewInterface;

@protocol WXCustomWebViewControllerProtocol <IWCBaseWebViewControllerProtocol>
- (NSString *)getShareUrl;
- (unsigned char)getPermissionWithName:(NSString *)arg1;
- (void)startupPreVerifyJSAPI:(NSDictionary *)arg1 failHandleBlock:(void (^)(NSDictionary *))arg2;
- (void)sendEventToJSBridge:(NSString *)arg1 Param:(NSDictionary *)arg2;
- (void)forceShowCloseButton;
- (void)doJsApiInitEvent;
- (void)setDisableWebAlertView:(_Bool)arg1;
- (_Bool)allowImagePreview;
- (void)enableWebContentImageLongPressingTag;
- (_Bool)allowFayByImage;
- (_Bool)allowShareByImage;
- (_Bool)allowScanQRCodeByImage;
- (unsigned int)getCurrentScene;
- (NSDictionary *)extraInfo;
- (NSString *)getCurrentAppId;
- (NSString *)getCurrentUrl;

@optional
@property(nonatomic) __weak id <WXCustomWebViewControllerDelegate> m_delegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<WXCustomWebViewControllerDelegate>",?,W,N

@property(nonatomic) _Bool m_bIsJsapiUploadVideoUploading;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(retain, nonatomic) UIView<YYWebViewInterface> *webView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView<YYWebViewInterface>",?,&,N

@property(readonly, nonatomic) _Bool m_bOfflinePage;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) WebViewJSLogicImpl *m_jsLogicImpl;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"WebViewJSLogicImpl",?,R,N

@property(readonly, nonatomic) WebViewA8KeyLogicImpl *m_a8KeyLogicImpl;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"WebViewA8KeyLogicImpl",?,R,N

@property(retain, nonatomic) NSMutableDictionary *m_extraInfo;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSMutableDictionary",?,&,N

@property(readonly, nonatomic) NSString *m_initUrl;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

- (void)goToURL:(NSURL *)arg1;
- (void)setWebViewContentSize:(struct CGSize)arg1;
@end

