//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMMultiSceneReporter
{
    long long _preScene;
    long long _lastScene;
    NSString *_lastSceneInfo;
    long long _lastAction;
}

- (void).cxx_destruct;
@property(nonatomic) long long lastAction; // @synthesize lastAction=_lastAction;
@property(retain, nonatomic) NSString *lastSceneInfo; // @synthesize lastSceneInfo=_lastSceneInfo;
@property(nonatomic) long long lastScene; // @synthesize lastScene=_lastScene;
@property(nonatomic) long long preScene; // @synthesize preScene=_preScene;
- (void)EX_WebViewControllerDidAppear:(id)arg1;
- (_Bool)needBizInfo:(long long)arg1;
- (void)reportAction:(long long)arg1;
- (void)reportAction:(long long)arg1 scene:(long long)arg2;
- (void)reportAction:(long long)arg1 scene:(long long)arg2 bizInfo:(id)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

