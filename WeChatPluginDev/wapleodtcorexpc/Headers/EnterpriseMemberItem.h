//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EnterpriseMemberItem
{
    NSString *_m_nsUsrName;
    NSString *_m_nsContactDisplayName;
    unsigned long long _m_uiContactVer;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_uiContactVer;
+ (void)PBArrayAdd_m_nsContactDisplayName;
+ (void)PBArrayAdd_m_nsUsrName;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long m_uiContactVer; // @synthesize m_uiContactVer=_m_uiContactVer;
@property(retain, nonatomic) NSString *m_nsContactDisplayName; // @synthesize m_nsContactDisplayName=_m_nsContactDisplayName;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName=_m_nsUsrName;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

