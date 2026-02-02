//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, MMWebViewController, NSData, NSString, WCCgiBlockHelper;
@protocol CheckQRCodeLoginDelegate;

@interface CheckQRCodeLoginCGI : NSObject
{
    unsigned int _m_checkTime;
    id <CheckQRCodeLoginDelegate> _delegate;
    NSString *_m_uuid;
    NSData *_m_notifyKey;
    MMTimer *_m_timer;
    WCCgiBlockHelper *_checkLoginQRCodeCgiHelper;
    MMWebViewController *_authUrlWebView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMWebViewController *authUrlWebView; // @synthesize authUrlWebView=_authUrlWebView;
@property(retain, nonatomic) WCCgiBlockHelper *checkLoginQRCodeCgiHelper; // @synthesize checkLoginQRCodeCgiHelper=_checkLoginQRCodeCgiHelper;
@property(retain, nonatomic) MMTimer *m_timer; // @synthesize m_timer=_m_timer;
@property(retain, nonatomic) NSData *m_notifyKey; // @synthesize m_notifyKey=_m_notifyKey;
@property(retain, nonatomic) NSString *m_uuid; // @synthesize m_uuid=_m_uuid;
@property(nonatomic) unsigned int m_checkTime; // @synthesize m_checkTime=_m_checkTime;
@property(nonatomic) __weak id <CheckQRCodeLoginDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(_Bool *)arg3;
- (void)webViewDidReturn:(id)arg1;
- (void)checkLoginQRCodeCancel;
- (void)checkLoginQRCodeFailed;
- (void)handleResponse:(id)arg1;
- (void)changeCheckQrcodeStatePaused:(_Bool)arg1;
- (void)handleOpenAuthUrl:(id)arg1;
- (void)sendCheckQRCodeRequest;
- (void)handleNotifyStatus:(unsigned int)arg1 userName:(id)arg2 nickName:(id)arg3 pwd:(id)arg4 headImageURL:(id)arg5 authUrl:(id)arg6;
- (void)handleNotifyData:(id)arg1;
- (void)stopRequest;
- (void)stopCheckTimer;
- (void)resetCheckTimer;
- (_Bool)isDataValid;
- (void)clearData;
- (void)internalStopCheckQRCode;
- (void)StopCheckQRCode;
- (void)StartCheckQRCodeWithTime:(unsigned int)arg1 uuid:(id)arg2 notifyKey:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

