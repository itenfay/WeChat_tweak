//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface OCRTransJSHandler
{
    NSString *_senderUserName;
    NSString *_imageTransDataJsonStr;
    long long _ocrResultType;
    NSMutableDictionary *_imageTransDataCallbackID2RequestIDMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *imageTransDataCallbackID2RequestIDMap; // @synthesize imageTransDataCallbackID2RequestIDMap=_imageTransDataCallbackID2RequestIDMap;
@property(nonatomic) long long ocrResultType; // @synthesize ocrResultType=_ocrResultType;
@property(retain, nonatomic) NSString *imageTransDataJsonStr; // @synthesize imageTransDataJsonStr=_imageTransDataJsonStr;
@property(retain, nonatomic) NSString *senderUserName; // @synthesize senderUserName=_senderUserName;
- (void)notifyImageTransDataJsonStrWithCallbackID:(id)arg1;
- (void)handleJSAPIShakeWithParams:(id)arg1 callbackID:(id)arg2;
- (void)handleJSAPISetTitleWithParams:(id)arg1 callbackID:(id)arg2;
- (void)handleJSAPICollectWithParams:(id)arg1 callbackID:(id)arg2;
- (void)handleJSAPICopyWithParams:(id)arg1 callbackID:(id)arg2;
- (void)handleJSAPISendWithParams:(id)arg1 callbackID:(id)arg2;
- (void)handleJSAPIGetImageTransDataWithParams:(id)arg1 callbackID:(id)arg2;
- (_Bool)onJsApiHandlerForwardDealWithFunc:(id)arg1 params:(id)arg2 callbackID:(id)arg3;
- (id)jsEventsNeedRegister;
- (void)sendJsEventOnTapTopBar;
- (unsigned long long)getLocalJSBusinessType;
- (void)setImageTransDataJsonStr:(id)arg1 withOcrResultType:(long long)arg2;
- (id)init;

@end

