//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString, WCAdvertiseInfo, WCCanvasDynamicDataLoader;

@interface WAJSEventHandler_openADCanvas
{
    NSDictionary *_param;
    WCCanvasDynamicDataLoader *_dataLoader;
    WCAdvertiseInfo *_adInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdvertiseInfo *adInfo; // @synthesize adInfo=_adInfo;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void)onCloseCanvasPageView;
- (void)webViewReturn:(id)arg1;
- (void)onCanvasServerDataReturn:(id)arg1 errorCode:(int)arg2 forLoadParams:(id)arg3;
- (unsigned long long)getUInt64ForKey:(id)arg1 inParams:(id)arg2;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

