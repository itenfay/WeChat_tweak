//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, CMessageWrap, MMSessionInfoExt, NSString;

@interface MMSessionInfo : NSObject
{
    NSString *m_nsUserName;
    NSString *m_nsFilePath;
    unsigned int m_uUnReadCount;
    _Bool m_bShowUnReadAsRedDot;
    CContact *m_contact;
    CMessageWrap *m_msgWrap;
    unsigned int m_uLastTime;
    _Bool m_bIsTop;
    unsigned int m_uTopTime;
    unsigned int m_uUnTopTime;
    unsigned int m_uAtMeCount;
    unsigned int m_uGreenLabelType;
    NSString *m_draftMsg;
    unsigned int m_draftMsgTime;
    NSString *m_atUserList;
    unsigned int m_uNewInvCount;
    _Bool m_uNewInvApprove;
    _Bool m_bNeedContactVerify;
    unsigned int m_uNewNotifyMsgCount;
    unsigned int m_uBrandNotifyType;
    NSString *m_nsBrandNotifyPrefixName;
    _Bool m_bBrandNotifyNoPrefixName;
    _Bool m_bGroupUndoneFlag;
    _Bool m_bShouldUpdateTimeField;
    _Bool m_bSpecialAttention;
    _Bool _m_isFolding;
    unsigned int m_uTransferCount;
    unsigned int m_uAACount;
    unsigned int m_uExclusiveHbCount;
    unsigned int _sortTime;
    unsigned int _m_uAtAllCount;
    unsigned int _ConIntRes2;
    MMSessionInfoExt *m_extendFields;
    NSString *m_waUpdatableMsgDigest;
    long long m_referMsgSvrId;
    unsigned long long _m_uBrandAffMsgId;
    NSString *_ConStrRes1;
}

+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (id)swift_m_extendFields;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)m_extendFields;
+ (id)swift_ConStrRes1;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)ConStrRes1;
+ (id)swift_ConIntRes2;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)ConIntRes2;
+ (id)swift_m_bShowUnReadAsRedDot;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)m_bShowUnReadAsRedDot;
+ (id)swift_m_uUnReadCount;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)m_uUnReadCount;
+ (id)swift_m_uLastTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)m_uLastTime;
+ (id)swift_m_nsUserName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)m_nsUserName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ConStrRes1; // @synthesize ConStrRes1=_ConStrRes1;
@property(nonatomic) unsigned int ConIntRes2; // @synthesize ConIntRes2=_ConIntRes2;
@property(nonatomic) unsigned long long m_uBrandAffMsgId; // @synthesize m_uBrandAffMsgId=_m_uBrandAffMsgId;
@property(nonatomic) unsigned int m_uAtAllCount; // @synthesize m_uAtAllCount=_m_uAtAllCount;
@property(nonatomic) _Bool m_isFolding; // @synthesize m_isFolding=_m_isFolding;
@property(nonatomic) unsigned int sortTime; // @synthesize sortTime=_sortTime;
@property(nonatomic) _Bool m_bSpecialAttention; // @synthesize m_bSpecialAttention;
@property(nonatomic) unsigned int m_uExclusiveHbCount; // @synthesize m_uExclusiveHbCount;
@property(nonatomic) _Bool m_bShouldUpdateTimeField; // @synthesize m_bShouldUpdateTimeField;
@property(nonatomic) _Bool m_bGroupUndoneFlag; // @synthesize m_bGroupUndoneFlag;
@property(nonatomic) long long m_referMsgSvrId; // @synthesize m_referMsgSvrId;
@property(nonatomic) _Bool m_bBrandNotifyNoPrefixName; // @synthesize m_bBrandNotifyNoPrefixName;
@property(copy, nonatomic) NSString *m_nsBrandNotifyPrefixName; // @synthesize m_nsBrandNotifyPrefixName;
@property(nonatomic) unsigned int m_uBrandNotifyType; // @synthesize m_uBrandNotifyType;
@property(nonatomic) unsigned int m_uNewNotifyMsgCount; // @synthesize m_uNewNotifyMsgCount;
@property(retain, nonatomic) NSString *m_waUpdatableMsgDigest; // @synthesize m_waUpdatableMsgDigest;
@property(nonatomic) unsigned int m_uAACount; // @synthesize m_uAACount;
@property(nonatomic) unsigned int m_uTransferCount; // @synthesize m_uTransferCount;
@property(nonatomic) _Bool m_bNeedContactVerify; // @synthesize m_bNeedContactVerify;
@property(nonatomic) _Bool m_uNewInvApprove; // @synthesize m_uNewInvApprove;
@property(nonatomic) unsigned int m_uNewInvCount; // @synthesize m_uNewInvCount;
@property(retain, nonatomic) NSString *m_atUserList; // @synthesize m_atUserList;
@property(nonatomic) unsigned int m_draftMsgTime; // @synthesize m_draftMsgTime;
@property(retain, nonatomic) NSString *m_draftMsg; // @synthesize m_draftMsg;
@property(nonatomic) unsigned int m_uGreenLabelType; // @synthesize m_uGreenLabelType;
@property(nonatomic) unsigned int m_uAtMeCount; // @synthesize m_uAtMeCount;
@property(nonatomic) unsigned int m_uUnTopTime; // @synthesize m_uUnTopTime;
@property(nonatomic) unsigned int m_uTopTime; // @synthesize m_uTopTime;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(nonatomic) _Bool m_bIsTop; // @synthesize m_bIsTop;
@property(nonatomic) unsigned int m_uLastTime; // @synthesize m_uLastTime;
@property(nonatomic) _Bool m_bShowUnReadAsRedDot; // @synthesize m_bShowUnReadAsRedDot;
@property(nonatomic) unsigned int m_uUnReadCount; // @synthesize m_uUnReadCount;
@property(retain, nonatomic) MMSessionInfoExt *m_extendFields; // @synthesize m_extendFields;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
- (_Bool)isSingleChatSession;
- (_Bool)isHidden;
- (_Bool)isBrandEcsMsgHolderSession;
- (_Bool)isBrandServiceBoxSession;
- (_Bool)isInBrandServiceBox;
- (_Bool)isInChatBox;
- (id)description;
- (long long)compare:(id)arg1;
- (void)tryLoadExtInfo;
- (void)updateShowUnReadAsRedDotStatus;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyFrom:(id)arg1;
- (id)init;

@end

