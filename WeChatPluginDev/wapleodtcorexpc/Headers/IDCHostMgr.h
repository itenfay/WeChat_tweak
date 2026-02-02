//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class HostList, NSSet, NSString;

@interface IDCHostMgr
{
    HostList *_axHostList;
    NSSet *_axHostSet;
    NSSet *_mainHostSet;
}

+ (void)tryTestMMTlsRegion;
+ (void)ClearMMTlsAllPsk;
+ (unsigned int)GetMMTlsRegion;
+ (void)updateCertRegion:(unsigned int)arg1;
+ (id)GetLocalHostListWithType:(struct basic_string<char, std::char_traits<char>, std::allocator<char>>)arg1;
+ (id)GetRealHostFromHost:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSSet *mainHostSet; // @synthesize mainHostSet=_mainHostSet;
@property(retain) NSSet *axHostSet; // @synthesize axHostSet=_axHostSet;
@property(retain, nonatomic) HostList *axHostList; // @synthesize axHostList=_axHostList;
- (void)changeDebugIpIfNeeded;
- (void)HandleNetworkSectResp:(id)arg1;
- (void)HandleIPListFromPB:(id)arg1 PortList:(id)arg2 TimeOutList:(id)arg3;
- (void)HandleHostListFromPB:(id)arg1;
- (void)HandleAxHostListFromPB:(id)arg1;
- (_Bool)isInAxHostList:(id)arg1;
- (_Bool)isInMainHostList:(id)arg1;
- (id)getAnyAxHost;
- (id)getAnyMainHost;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

