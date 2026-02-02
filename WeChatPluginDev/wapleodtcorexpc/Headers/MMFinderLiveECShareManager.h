//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveECProductShareLogic, MMFinderLiveECShopWindowShareLogic, NSString;

@interface MMFinderLiveECShareManager
{
    MMFinderLiveECProductShareLogic *_productShareLogic;
    MMFinderLiveECShopWindowShareLogic *_shopWindowShareLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveECShopWindowShareLogic *shopWindowShareLogic; // @synthesize shopWindowShareLogic=_shopWindowShareLogic;
@property(retain, nonatomic) MMFinderLiveECProductShareLogic *productShareLogic; // @synthesize productShareLogic=_productShareLogic;
- (void)getShopDisplayWindowCard:(id)arg1 isMpChat:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onLiveECShareWithShareTask:(id)arg1;
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

