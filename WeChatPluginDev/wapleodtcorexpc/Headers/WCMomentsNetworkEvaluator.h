//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCMomentsNetworkEvaluator
{
    unsigned int _networkConnectionStatus;
    long long _networkLinkCondition;
}

@property(readonly, nonatomic) long long networkLinkCondition; // @synthesize networkLinkCondition=_networkLinkCondition;
@property(readonly, nonatomic) unsigned int networkConnectionStatus; // @synthesize networkConnectionStatus=_networkConnectionStatus;
- (void)onNetworkWeakChanged:(_Bool)arg1 currentRTT:(unsigned int)arg2;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (id)descriptionForNetworkStatus;
- (long long)getNetworkLinkCondition;
- (unsigned int)getNetworkConnectionStatus;
- (void)initEvaluator;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

