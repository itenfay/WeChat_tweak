//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WCCanvasDynamicDataLoader;

@interface WCAdLoadCanvasLogic : NSObject
{
    WCCanvasDynamicDataLoader *_dynamicDataLoader;
    NSMutableDictionary *_loadCompleteHandlerDic;
    NSMutableDictionary *_preloadResFlagDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *preloadResFlagDic; // @synthesize preloadResFlagDic=_preloadResFlagDic;
@property(retain, nonatomic) NSMutableDictionary *loadCompleteHandlerDic; // @synthesize loadCompleteHandlerDic=_loadCompleteHandlerDic;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dynamicDataLoader; // @synthesize dynamicDataLoader=_dynamicDataLoader;
- (void)onCanvasServerDataReturn:(id)arg1 errorCode:(int)arg2 forLoadParams:(id)arg3;
- (void)preloadForCanvasDSLJson:(id)arg1 preloadRes:(_Bool)arg2;
- (void)preloadForCanvasXml:(id)arg1 preloadRes:(_Bool)arg2;
- (void)preloadCanvas:(id)arg1 uxInfo:(id)arg2 canvasScene:(unsigned int)arg3 canvasDynamicInfo:(id)arg4 shouldPreloadRes:(_Bool)arg5;
- (void)loadCanvas:(id)arg1 uxInfo:(id)arg2 canvasScene:(unsigned int)arg3 canvasDynamicInfo:(id)arg4 compatibleMode:(_Bool)arg5 remoteLoadBeginBlock:(CDUnknownBlockType)arg6 completeHandler:(CDUnknownBlockType)arg7;
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

