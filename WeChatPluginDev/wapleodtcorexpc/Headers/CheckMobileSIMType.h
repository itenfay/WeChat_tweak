//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NSTimer;

@interface CheckMobileSIMType
{
    _Bool hasGetSimType;
    unsigned int businessFlag;
    unsigned int productType;
    unsigned int simType;
    unsigned long long lastCheckMobileSIMTypeTime;
    unsigned long long cacheExpiredTime;
    NSTimer *timer;
    NSString *simCardIp;
}

- (void).cxx_destruct;
- (void)onSimCardNetTypeChange;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)autoUpdate;
- (void)NotifyWKTypeChange:(unsigned int)arg1 reason:(int)arg2;
- (void)NotifySimTypeChange:(unsigned int)arg1 reason:(int)arg2;
- (_Bool)MayBeUnicomNetwork;
- (id)getIPAddresses;
- (id)getIPAddress;
- (id)GetIDFV;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)Check:(int)arg1;
- (_Bool)ParseSIMType:(int)arg1 flag:(unsigned int)arg2;
- (int)GetWKType;
- (int)GetSIMType:(int)arg1;
- (void)onAuthOK;
- (void)onServiceClearData;
- (void)onServiceInit;
- (int)voIPMobileSIMType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

