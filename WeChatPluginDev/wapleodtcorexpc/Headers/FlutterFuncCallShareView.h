//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface FlutterFuncCallShareView
{
    NSMutableDictionary *_viewMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *viewMap; // @synthesize viewMap=_viewMap;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)funcName;
- (id)callHost:(id)arg1 engineId:(id)arg2;
- (id)handleRequest:(id)arg1 request:(id)arg2;
- (void)registerView:(id)arg1 shareViewProtocol:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

