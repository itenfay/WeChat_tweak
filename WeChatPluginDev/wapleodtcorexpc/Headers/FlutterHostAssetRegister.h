//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterHostAssetDefault, NSMutableDictionary, NSString;

@interface FlutterHostAssetRegister
{
    NSMutableDictionary *_handlerMap;
    FlutterHostAssetDefault *_defaultHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FlutterHostAssetDefault *defaultHandler; // @synthesize defaultHandler=_defaultHandler;
@property(retain, nonatomic) NSMutableDictionary *handlerMap; // @synthesize handlerMap=_handlerMap;
- (id)findHandlerWithKey:(id)arg1;
- (void)unregisterAssetHandlerWithKey:(id)arg1;
- (void)registerAssetHandlerWithKey:(id)arg1 Handler:(id)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

