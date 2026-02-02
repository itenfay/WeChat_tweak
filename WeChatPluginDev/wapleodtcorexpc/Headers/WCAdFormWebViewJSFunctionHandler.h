//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LocationRetriever, NSDictionary, NSString, WCAdConfirmHalfScreenAdapter, WCAdDetermineHalfScreenView, WCAdDynamicCanvasPageInfo, WCAdWheelPickerLogic, WKWebView;
@protocol WCAdFormWebViewJSFunctionHandlerDelegate, YYWebViewInterface;

@interface WCAdFormWebViewJSFunctionHandler : NSObject
{
    id <WCAdFormWebViewJSFunctionHandlerDelegate> _delegate;
    WKWebView<YYWebViewInterface> *_webView;
    WCAdDynamicCanvasPageInfo *_pageInfo;
    NSString *_componentId;
    NSString *_qrExtInfo;
    NSDictionary *_params;
    NSString *_callbackID;
    LocationRetriever *_locationRetriever;
    WCAdDetermineHalfScreenView *_determineHalfScreenView;
    WCAdConfirmHalfScreenAdapter *_phoneNumAdapter;
    WCAdWheelPickerLogic *_wheelPickerLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdWheelPickerLogic *wheelPickerLogic; // @synthesize wheelPickerLogic=_wheelPickerLogic;
@property(retain, nonatomic) WCAdConfirmHalfScreenAdapter *phoneNumAdapter; // @synthesize phoneNumAdapter=_phoneNumAdapter;
@property(retain, nonatomic) WCAdDetermineHalfScreenView *determineHalfScreenView; // @synthesize determineHalfScreenView=_determineHalfScreenView;
@property(retain, nonatomic) LocationRetriever *locationRetriever; // @synthesize locationRetriever=_locationRetriever;
@property(retain, nonatomic) NSString *callbackID; // @synthesize callbackID=_callbackID;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *qrExtInfo; // @synthesize qrExtInfo=_qrExtInfo;
@property(retain, nonatomic) NSString *componentId; // @synthesize componentId=_componentId;
@property(retain, nonatomic) WCAdDynamicCanvasPageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(nonatomic) __weak WKWebView<YYWebViewInterface> *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <WCAdFormWebViewJSFunctionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)performAction:(id)arg1 callbackID:(id)arg2;
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
- (_Bool)dispatchQRScan:(id)arg1 callbackID:(id)arg2;
- (void)sendCallback:(id)arg1 ret:(int)arg2 error:(id)arg3 data:(id)arg4;
- (_Bool)dispatchFunction:(id)arg1 callbackID:(id)arg2;
- (id)initWithWebView:(id)arg1 pageInfo:(id)arg2 componentId:(id)arg3 qrExtInfo:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

