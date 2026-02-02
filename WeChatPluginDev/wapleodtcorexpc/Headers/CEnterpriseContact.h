//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EnterpriseRoomData, NSString;

@interface CEnterpriseContact
{
    _Bool m_bHeadImageUpdateFlag;
    _Bool m_bUpdateFlag;
    unsigned int m_uiUserFlag;
    unsigned int m_uiContactType;
    NSString *m_nsContactDisplayName;
    unsigned long long m_uiContactVer;
    NSString *m_nsProfileJumpUrl;
    NSString *m_nsAddMemberUrl;
    EnterpriseRoomData *m_oRoomData;
    NSString *m_nsBrandUserName;
}

+ (id)contactFromBizChatUser:(id)arg1 brandUserName:(id)arg2;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (id)swift_m_bUpdateFlag;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)m_bUpdateFlag;
+ (id)swift_m_uiDraftTime;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)m_uiDraftTime;
+ (id)swift_m_nsDraft;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)m_nsDraft;
+ (id)swift_m_nsAtUserList;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)m_nsAtUserList;
+ (id)swift_m_nsBrandUserName;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)m_nsBrandUserName;
+ (id)swift_m_bHeadImageUpdateFlag;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)m_bHeadImageUpdateFlag;
+ (id)swift_m_oRoomData;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)m_oRoomData;
+ (id)swift_m_uiContactType;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)m_uiContactType;
+ (id)swift_m_uiUserFlag;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)m_uiUserFlag;
+ (id)swift_m_nsAddMemberUrl;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)m_nsAddMemberUrl;
+ (id)swift_m_nsHeadHDImgUrl;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)m_nsHeadHDImgUrl;
+ (id)swift_m_nsProfileJumpUrl;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)m_nsProfileJumpUrl;
+ (id)swift_m_uiContactVer;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)m_uiContactVer;
+ (id)swift_m_nsContactDisplayName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)m_nsContactDisplayName;
+ (id)swift_m_nsUsrName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)m_nsUsrName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_bUpdateFlag; // @synthesize m_bUpdateFlag;
@property(retain, nonatomic) NSString *m_nsBrandUserName; // @synthesize m_nsBrandUserName;
@property(nonatomic) _Bool m_bHeadImageUpdateFlag; // @synthesize m_bHeadImageUpdateFlag;
@property(retain, nonatomic) EnterpriseRoomData *m_oRoomData; // @synthesize m_oRoomData;
@property(nonatomic) unsigned int m_uiContactType; // @synthesize m_uiContactType;
@property(nonatomic) unsigned int m_uiUserFlag; // @synthesize m_uiUserFlag;
@property(retain, nonatomic) NSString *m_nsAddMemberUrl; // @synthesize m_nsAddMemberUrl;
@property(retain, nonatomic) NSString *m_nsProfileJumpUrl; // @synthesize m_nsProfileJumpUrl;
@property(nonatomic) unsigned long long m_uiContactVer; // @synthesize m_uiContactVer;
@property(retain, nonatomic) NSString *m_nsContactDisplayName; // @synthesize m_nsContactDisplayName;
- (_Bool)isContactTop;
- (_Bool)isFavorite;
- (_Bool)isWeixinSingleConatct;
- (_Bool)isSelf;
- (_Bool)isChatStatusNotifyOpen;
- (_Bool)isChatroom;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(retain, nonatomic) NSString *m_nsAtUserList;
@property(retain, nonatomic) NSString *m_nsDraft;
@property(retain, nonatomic) NSString *m_nsHeadHDImgUrl;
@property(retain, nonatomic) NSString *m_nsUsrName;
@property(nonatomic) unsigned int m_uiDraftTime;
@property(readonly) Class superclass;

@end

