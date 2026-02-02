//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CaraCppLiveReddotProphet, NSString;

@interface CaraLiveReddotProphetService
{
    CaraCppLiveReddotProphet *_underlying;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CaraCppLiveReddotProphet *underlying; // @synthesize underlying=_underlying;
- (void)reportThatPreload:(id)arg1 byPrediction:(id)arg2;
- (void)reportThatReddotConsume:(id)arg1 isReady:(id)arg2;
- (void)predict:(id)arg1 context:(id)arg2 onPredicted:(CDUnknownBlockType)arg3;
- (void)reportThatReddotExpose:(id)arg1 isReady:(id)arg2 context:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

