//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CaraCppLiveCellProphet, NSString;

@interface CaraLiveCellProphetService
{
    CaraCppLiveCellProphet *_underlying;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CaraCppLiveCellProphet *underlying; // @synthesize underlying=_underlying;
- (void)reportThatPreload:(id)arg1;
- (void)reportThatCellConsume:(id)arg1;
- (void)predict:(id)arg1 onPredicted:(CDUnknownBlockType)arg2;
- (void)reportThatCellExpose:(id)arg1 isReady:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

