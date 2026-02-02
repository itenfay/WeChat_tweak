//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LocationRetriever, NSDictionary, NSString, NSURLRequest, WCAdConfirmHalfScreenAdapter, WCAdDetermineHalfScreenView, WCAdWheelPickerLogic, WCCanvasJSLogic, WKWebView;
@protocol YYWebViewInterface;

@interface WCCanvasPreloadWebviewComponent
{
    WKWebView<YYWebViewInterface> *_webView;
    WCCanvasJSLogic *_jsLogic;
    NSDictionary *_params;
    NSString *_callbackID;
    LocationRetriever *_locationRetriever;
    WCAdDetermineHalfScreenView *_determineHalfScreenView;
    WCAdConfirmHalfScreenAdapter *_phoneNumAdapter;
    WCAdWheelPickerLogic *_wheelPickerLogic;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdWheelPickerLogic *wheelPickerLogic; // @synthesize wheelPickerLogic=_wheelPickerLogic;
@property(retain, nonatomic) WCAdConfirmHalfScreenAdapter *phoneNumAdapter; // @synthesize phoneNumAdapter=_phoneNumAdapter;
@property(retain, nonatomic) WCAdDetermineHalfScreenView *determineHalfScreenView; // @synthesize determineHalfScreenView=_determineHalfScreenView;
@property(retain, nonatomic) LocationRetriever *locationRetriever; // @synthesize locationRetriever=_locationRetriever;
@property(retain, nonatomic) NSString *callbackID; // @synthesize callbackID=_callbackID;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) WCCanvasJSLogic *jsLogic; // @synthesize jsLogic=_jsLogic;
@property(retain, nonatomic) WKWebView<YYWebViewInterface> *webView; // @synthesize webView=_webView;
- (_Bool)jumpWeApp:(id)arg1 callbackID:(id)arg2;
- (_Bool)requestAppointment:(id)arg1 callbackID:(id)arg2;
- (void)reportControlFloatComponentWithAction:(id)arg1 result:(id)arg2;
- (_Bool)controlFloatComponent:(id)arg1 callbackID:(id)arg2;
- (_Bool)queryFinderFollowState:(id)arg1 callbackID:(id)arg2;
- (_Bool)finderFollow:(id)arg1 callbackID:(id)arg2;
- (_Bool)openFinderProfile:(id)arg1 callbackID:(id)arg2;
- (void)onCancelButtonClick;
- (void)onConfirmButtonClickWithResultInfo:(id)arg1;
- (_Bool)showPickerWithParams:(id)arg1 callbackID:(id)arg2;
- (void)goToSettingLocationAuthorization;
- (void)onLocationAuthorizationCancelled;
- (void)showGuideAlertForLocationAuthorization;
- (void)onDetermineViewDidClose:(_Bool)arg1;
- (void)onDetermineViewButtonClickedWithType:(long long)arg1 determineInfo:(id)arg2;
- (void)confirmAdapterClosedWithResult:(long long)arg1 extInfo:(id)arg2;
- (void)reportLocationAuthResultWithName:(id)arg1 status:(id)arg2;
- (void)onRetrieveLocationCallbackTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (id)validAuthDomainArray;
- (_Bool)checkDomain:(id)arg1;
- (_Bool)setCanAutoFillDataWithParams:(id)arg1 callbackID:(id)arg2;
- (_Bool)getCanAutoFillDataWithParams:(id)arg1 callbackID:(id)arg2;
- (_Bool)requestBindPhoneNumberWithParams:(id)arg1 callbackID:(id)arg2;
- (_Bool)getDeviceInfo:(id)arg1 callbackID:(id)arg2;
- (_Bool)jumpToAppStore:(id)arg1 callbackID:(id)arg2;
- (void)showLocationPermissionViewWithUserInfo:(id)arg1;
- (void)retrieveLocationForGeoType:(id)arg1;
- (void)tryToRetrieveLocationForGeoType:(id)arg1;
- (_Bool)getLocation:(id)arg1 callbackID:(id)arg2;
- (void)onUpdateContentHeight:(id)arg1;
- (_Bool)dispatchUpdateContentHeight:(id)arg1 callbackID:(id)arg2;
- (void)onImageDownloadFinish:(id)arg1 url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (id)getCurrentMMUIViewController;
- (id)getLocalImageData:(id)arg1 syncQrImageDownload:(_Bool)arg2;
- (void)qrScanWithImage:(id)arg1 url:(id)arg2 directJump:(_Bool)arg3;
- (_Bool)dispatchQRScan:(id)arg1 callbackID:(id)arg2;
- (_Bool)onAdH5FuncDispatched:(id)arg1 callbackID:(id)arg2;
- (_Bool)onOperateOpenUrlInWebview:(id)arg1 callbackID:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 navigation:(id)arg3;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1 navigation:(id)arg2;
- (id)getPreInjectScriptStr;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURLRequest *request;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSURLRequest",?,R,N

@property(readonly) Class superclass;

@end

