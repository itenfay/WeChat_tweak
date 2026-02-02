//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface ScanStatMgr
{
    unsigned int _networkType;
    NSString *_UUID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) unsigned int networkType; // @synthesize networkType=_networkType;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)uploadScanReport:(unsigned int)arg1 withLogExt:(id)arg2 productId:(id)arg3 statId:(id)arg4 type:(unsigned int)arg5 value:(id)arg6 count:(unsigned int)arg7 showType:(unsigned int)arg8;
- (void)statClickEvent:(unsigned int)arg1 productId:(id)arg2 statId:(id)arg3 type:(unsigned int)arg4 value:(id)arg5 actionListCount:(unsigned int)arg6 showType:(unsigned int)arg7;
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

