//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CaraCppConsumeSessionProphet, NSString;

@interface CaraConsumeSessionProphetService
{
    CaraCppConsumeSessionProphet *_underlying;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CaraCppConsumeSessionProphet *underlying; // @synthesize underlying=_underlying;
- (void)onConsumeSession:(id)arg1 stayTimeInterval:(float)arg2;
- (void)onMainSessionReload;
- (void)onMainFrameEndReload;
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

