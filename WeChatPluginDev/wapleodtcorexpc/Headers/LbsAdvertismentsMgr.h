//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface LbsAdvertismentsMgr
{
    NSMutableDictionary *_adInfos;
    NSMutableDictionary *_adActionInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *adActionInfos; // @synthesize adActionInfos=_adActionInfos;
@property(retain, nonatomic) NSMutableDictionary *adInfos; // @synthesize adInfos=_adInfos;
- (void)onServiceInit;
- (long long)logFeatureActionForAd:(id)arg1 isAdClicked:(_Bool)arg2;
- (_Bool)isAdvertismentCanClose:(id)arg1;
- (_Bool)isAdvertismentCanShow:(id)arg1;
- (void)closeAd:(id)arg1;
- (void)showAd:(id)arg1;
- (void)appendAdInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

