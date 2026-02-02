//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface WSWebViewPlugin_JSBridge
{
    _Bool _autoSendOnUIInit;
    _Bool _bViewAppear;
    _Bool _hasSendUiInitEvent;
    _Bool _bPreRender;
    NSMutableDictionary *_extraUIInitParams;
    long long _uiinitRetryCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long uiinitRetryCount; // @synthesize uiinitRetryCount=_uiinitRetryCount;
@property(nonatomic) _Bool bPreRender; // @synthesize bPreRender=_bPreRender;
@property(nonatomic) _Bool hasSendUiInitEvent; // @synthesize hasSendUiInitEvent=_hasSendUiInitEvent;
@property(nonatomic) _Bool bViewAppear; // @synthesize bViewAppear=_bViewAppear;
@property(retain, nonatomic) NSMutableDictionary *extraUIInitParams; // @synthesize extraUIInitParams=_extraUIInitParams;
@property(nonatomic) _Bool autoSendOnUIInit; // @synthesize autoSendOnUIInit=_autoSendOnUIInit;
- (id)getContextMap;
- (void)doSendOnUIInitEvent;
- (void)trySendOnUIInitEvent;
- (void)trySendOnUIInitEventWhenPreRender;
- (void)trySendOnUIInitEventWhenPageExpose;
- (void)sendVertSearchEntriesDataEvent;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (id)init;

@end

