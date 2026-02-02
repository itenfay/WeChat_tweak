//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdOpenAdCanvasParamsInfo, WCAdvertiseInfo, WCCanvasDynamicDataLoader;
@protocol WCAdOpenAdCanvasJsLogicDelegate;

@interface WCAdOpenAdCanvasJsLogic : NSObject
{
    int _canvasPageScene;
    id <WCAdOpenAdCanvasJsLogicDelegate> _delegate;
    WCCanvasDynamicDataLoader *_dataLoader;
    WCAdvertiseInfo *_adInfo;
    WCAdOpenAdCanvasParamsInfo *_paramsInfo;
    long long _jsEnterScene;
}

- (void).cxx_destruct;
@property(nonatomic) int canvasPageScene; // @synthesize canvasPageScene=_canvasPageScene;
@property(nonatomic) long long jsEnterScene; // @synthesize jsEnterScene=_jsEnterScene;
@property(retain, nonatomic) WCAdOpenAdCanvasParamsInfo *paramsInfo; // @synthesize paramsInfo=_paramsInfo;
@property(retain, nonatomic) WCAdvertiseInfo *adInfo; // @synthesize adInfo=_adInfo;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <WCAdOpenAdCanvasJsLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCanvasServerDataReturn:(id)arg1 errorCode:(int)arg2 forLoadParams:(id)arg3;
- (void)hideLoading;
- (void)showLoading;
- (void)notifyOpenAdCanvasFailWithMsg:(id)arg1;
- (void)notifyOpenAdCanvasSuccessWithMsg:(id)arg1;
- (int)getCanvasPageScene:(long long)arg1 source:(long long)arg2;
- (void)openAdCanvas:(id)arg1 jsEnterScene:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

