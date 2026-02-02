//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MMLimitedModeDataPB
{
    NSMutableDictionary *_agreenAuthorizationDic;
    NSMutableDictionary *_becomeGuardianDic;
}

+ (void)initialize;
+ (void)PBArrayAdd_becomeGuardianDic;
+ (void)PBArrayAdd_agreenAuthorizationDic;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *becomeGuardianDic; // @synthesize becomeGuardianDic=_becomeGuardianDic;
@property(retain, nonatomic) NSMutableDictionary *agreenAuthorizationDic; // @synthesize agreenAuthorizationDic=_agreenAuthorizationDic;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

