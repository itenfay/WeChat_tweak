//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MMMusicMVCGIService
{
    NSMutableDictionary *_postingMVModeldDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *postingMVModeldDic; // @synthesize postingMVModeldDic=_postingMVModeldDic;
- (void)reportFinderPostFailure:(id)arg1;
- (void)reportFinderPostSuccess:(id)arg1;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)postMVWithMVModel:(id)arg1;
- (void)sendGetMVInfoReqWithObjectId:(unsigned long long)arg1 nonceId:(id)arg2;
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

