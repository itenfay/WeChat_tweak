//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MultiTalkBannerItem
{
    unsigned int routeid;
    unsigned int createtime;
    unsigned int multiTalkStatus;
    unsigned int bannerSDKMode;
    NSString *wxGroupId;
    NSString *wxMultiTalkGroupId;
    unsigned long long roomid;
    unsigned long long roomkey;
    NSString *wxMultiTalkUserList;
    NSString *wxMultiTalkInviteNick;
    unsigned long long bannerItemSeq;
}

+ (void)__wcdb_column_constraint_11:(void *)arg1;
+ (id)swift_bannerSDKMode;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)bannerSDKMode;
+ (id)swift_bannerItemSeq;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)bannerItemSeq;
+ (id)swift_multiTalkStatus;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)multiTalkStatus;
+ (id)swift_wxMultiTalkInviteNick;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)wxMultiTalkInviteNick;
+ (id)swift_wxMultiTalkUserList;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)wxMultiTalkUserList;
+ (id)swift_createtime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)createtime;
+ (id)swift_routeid;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)routeid;
+ (id)swift_roomkey;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)roomkey;
+ (id)swift_roomid;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)roomid;
+ (id)swift_wxMultiTalkGroupId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)wxMultiTalkGroupId;
+ (id)swift_wxGroupId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)wxGroupId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int bannerSDKMode; // @synthesize bannerSDKMode;
@property(nonatomic) unsigned long long bannerItemSeq; // @synthesize bannerItemSeq;
@property(nonatomic) unsigned int multiTalkStatus; // @synthesize multiTalkStatus;
@property(retain, nonatomic) NSString *wxMultiTalkInviteNick; // @synthesize wxMultiTalkInviteNick;
@property(retain, nonatomic) NSString *wxMultiTalkUserList; // @synthesize wxMultiTalkUserList;
@property(nonatomic) unsigned int createtime; // @synthesize createtime;
@property(nonatomic) unsigned int routeid; // @synthesize routeid;
@property(nonatomic) unsigned long long roomkey; // @synthesize roomkey;
@property(nonatomic) unsigned long long roomid; // @synthesize roomid;
@property(retain, nonatomic) NSString *wxMultiTalkGroupId; // @synthesize wxMultiTalkGroupId;
@property(retain, nonatomic) NSString *wxGroupId; // @synthesize wxGroupId;
@property(readonly, copy) NSString *description;
- (_Bool)isBannerItemValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

