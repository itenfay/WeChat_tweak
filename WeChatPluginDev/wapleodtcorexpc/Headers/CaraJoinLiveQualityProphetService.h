//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CaraCppJoinLiveQualityProphet, NSString;

@interface CaraJoinLiveQualityProphetService
{
    CaraCppJoinLiveQualityProphet *_underlying;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CaraCppJoinLiveQualityProphet *underlying; // @synthesize underlying=_underlying;
- (void)reportThatLiveRoomLag:(id)arg1 context:(id)arg2;
- (void)stopPredict;
- (id)getPrediction;
- (void)startPredict;
- (void)reportThatJoinLive:(id)arg1 context:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

