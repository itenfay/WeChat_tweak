//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSData, NSSet, NSString;

@interface EnterpriseBrandAttr
{
    _Bool _chatOpen;
    _Bool _showConfirm;
    _Bool _bannerUsePreset;
    _Bool _hideCreateChat;
    _Bool _hideModChatMember;
    _Bool _hideColleageInvite;
    unsigned int _qyUin;
    unsigned int _userUin;
    unsigned int _userFlag;
    unsigned int _wwExposeTimes;
    unsigned int _wwMaxExposeTimes;
    unsigned int _wwUserType;
    unsigned int _unreadCnt;
    NSString *_userName;
    unsigned long long _wwCorpId;
    unsigned long long _wwUserVid;
    NSData *_protoAttrData;
    NSString *_colleageInviteTitle;
    NSString *_colleageInviteJumpUrl;
    NSArray *_homeContacts;
    NSSet *_hiddenAppUserNameList;
}

+ (void)__wcdb_column_constraint_19:(void *)arg1;
+ (id)swift_colleageInviteJumpUrl;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)colleageInviteJumpUrl;
+ (id)swift_colleageInviteTitle;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)colleageInviteTitle;
+ (id)swift_protoAttrData;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)protoAttrData;
+ (id)swift_hideColleageInvite;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)hideColleageInvite;
+ (id)swift_hideModChatMember;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)hideModChatMember;
+ (id)swift_hideCreateChat;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)hideCreateChat;
+ (id)swift_bannerUsePreset;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)bannerUsePreset;
+ (id)swift_showConfirm;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)showConfirm;
+ (id)swift_unreadCnt;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)unreadCnt;
+ (id)swift_chatOpen;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)chatOpen;
+ (id)swift_wwUserType;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)wwUserType;
+ (id)swift_wwUserVid;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)wwUserVid;
+ (id)swift_wwCorpId;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)wwCorpId;
+ (id)swift_wwMaxExposeTimes;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)wwMaxExposeTimes;
+ (id)swift_wwExposeTimes;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)wwExposeTimes;
+ (id)swift_userFlag;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)userFlag;
+ (id)swift_userUin;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)userUin;
+ (id)swift_qyUin;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)qyUin;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)userName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *hiddenAppUserNameList; // @synthesize hiddenAppUserNameList=_hiddenAppUserNameList;
@property(retain, nonatomic) NSArray *homeContacts; // @synthesize homeContacts=_homeContacts;
@property(retain, nonatomic) NSString *colleageInviteJumpUrl; // @synthesize colleageInviteJumpUrl=_colleageInviteJumpUrl;
@property(retain, nonatomic) NSString *colleageInviteTitle; // @synthesize colleageInviteTitle=_colleageInviteTitle;
@property(retain, nonatomic) NSData *protoAttrData; // @synthesize protoAttrData=_protoAttrData;
@property(nonatomic) _Bool hideColleageInvite; // @synthesize hideColleageInvite=_hideColleageInvite;
@property(nonatomic) _Bool hideModChatMember; // @synthesize hideModChatMember=_hideModChatMember;
@property(nonatomic) _Bool hideCreateChat; // @synthesize hideCreateChat=_hideCreateChat;
@property(nonatomic) _Bool bannerUsePreset; // @synthesize bannerUsePreset=_bannerUsePreset;
@property(nonatomic) _Bool showConfirm; // @synthesize showConfirm=_showConfirm;
@property(nonatomic) unsigned int unreadCnt; // @synthesize unreadCnt=_unreadCnt;
@property(nonatomic) _Bool chatOpen; // @synthesize chatOpen=_chatOpen;
@property(nonatomic) unsigned int wwUserType; // @synthesize wwUserType=_wwUserType;
@property(nonatomic) unsigned long long wwUserVid; // @synthesize wwUserVid=_wwUserVid;
@property(nonatomic) unsigned long long wwCorpId; // @synthesize wwCorpId=_wwCorpId;
@property(nonatomic) unsigned int wwMaxExposeTimes; // @synthesize wwMaxExposeTimes=_wwMaxExposeTimes;
@property(nonatomic) unsigned int wwExposeTimes; // @synthesize wwExposeTimes=_wwExposeTimes;
@property(nonatomic) unsigned int userFlag; // @synthesize userFlag=_userFlag;
@property(nonatomic) unsigned int userUin; // @synthesize userUin=_userUin;
@property(nonatomic) unsigned int qyUin; // @synthesize qyUin=_qyUin;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

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

@property(readonly) Class superclass;

@end

