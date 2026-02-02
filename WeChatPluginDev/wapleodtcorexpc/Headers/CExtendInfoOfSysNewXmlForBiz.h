//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, CMessageWrap, HistoryMsgsInfo, MMFinderLiveRedPacketMessage, NSMutableArray, NSMutableDictionary, NSMutableString, NSString, WCFinderClubSystemMessage;

@interface CExtendInfoOfSysNewXmlForBiz : NSObject
{
    NSMutableString *m_showContent;
    NSMutableString *m_sessionShowContent;
    NSString *m_newXmlType;
    long long m_msgInnerType;
    NSMutableArray *m_arrMembers;
    NSString *m_qrCode;
    NSString *m_url;
    _Bool m_hasParsedForDisplay;
    _Bool m_bNewInv;
    _Bool m_bNewApprove;
    _Bool m_bHasApprove;
    _Bool m_bNeedReloadSubView;
    _Bool m_bCanFold;
    _Bool m_bFolded;
    _Bool m_bIsUpdatableMsgSubscribeMsg;
    _Bool m_bHadAddNewHistoryMsg;
    unsigned int _m_revokedMsgInnerType;
    CMessageWrap *m_refMessageWrap;
    NSString *m_inviterName;
    NSMutableArray *m_arrInviteeMembers;
    NSString *m_nsInviteTickets;
    NSString *m_fromChatUserName;
    NSString *m_nsInviteReason;
    NSString *m_nsRevokeContent;
    CContact *m_inviterContact;
    CMessageWrap *m_historyRecordMsg;
    HistoryMsgsInfo *m_historyMsgsInfo;
    unsigned long long m_ui64MassMsgSvrID;
    MMFinderLiveRedPacketMessage *m_liveRedPacketMessage;
    WCFinderClubSystemMessage *m_finderClubMessage;
    NSMutableDictionary *_m_dicQuitRoomInfo;
    unsigned long long _m_revokedReferSvrid;
    NSString *_m_revokedAtUserList;
}

+ (void)CreateExtendInfoWithTypeForBiz:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_revokedMsgInnerType; // @synthesize m_revokedMsgInnerType=_m_revokedMsgInnerType;
@property(retain, nonatomic) NSString *m_revokedAtUserList; // @synthesize m_revokedAtUserList=_m_revokedAtUserList;
@property(nonatomic) unsigned long long m_revokedReferSvrid; // @synthesize m_revokedReferSvrid=_m_revokedReferSvrid;
@property(retain, nonatomic) NSMutableDictionary *m_dicQuitRoomInfo; // @synthesize m_dicQuitRoomInfo=_m_dicQuitRoomInfo;
@property(retain, nonatomic) WCFinderClubSystemMessage *m_finderClubMessage; // @synthesize m_finderClubMessage;
@property(retain, nonatomic) MMFinderLiveRedPacketMessage *m_liveRedPacketMessage; // @synthesize m_liveRedPacketMessage;
@property(nonatomic) _Bool m_bHadAddNewHistoryMsg; // @synthesize m_bHadAddNewHistoryMsg;
@property(nonatomic) unsigned long long m_ui64MassMsgSvrID; // @synthesize m_ui64MassMsgSvrID;
@property(retain, nonatomic) HistoryMsgsInfo *m_historyMsgsInfo; // @synthesize m_historyMsgsInfo;
@property(retain, nonatomic) CMessageWrap *m_historyRecordMsg; // @synthesize m_historyRecordMsg;
@property(retain, nonatomic) CContact *m_inviterContact; // @synthesize m_inviterContact;
@property(nonatomic) _Bool m_bIsUpdatableMsgSubscribeMsg; // @synthesize m_bIsUpdatableMsgSubscribeMsg;
@property(nonatomic) _Bool m_bFolded; // @synthesize m_bFolded;
@property(nonatomic) _Bool m_bCanFold; // @synthesize m_bCanFold;
@property(retain, nonatomic) NSString *m_nsRevokeContent; // @synthesize m_nsRevokeContent;
@property(retain, nonatomic) NSString *m_nsInviteReason; // @synthesize m_nsInviteReason;
@property(retain, nonatomic) NSString *m_fromChatUserName; // @synthesize m_fromChatUserName;
@property(nonatomic) _Bool m_bNeedReloadSubView; // @synthesize m_bNeedReloadSubView;
@property(nonatomic) _Bool m_bHasApprove; // @synthesize m_bHasApprove;
@property(nonatomic) _Bool m_bNewApprove; // @synthesize m_bNewApprove;
@property(nonatomic) _Bool m_bNewInv; // @synthesize m_bNewInv;
@property(retain, nonatomic) NSString *m_nsInviteTickets; // @synthesize m_nsInviteTickets;
@property(retain, nonatomic) NSMutableArray *m_arrInviteeMembers; // @synthesize m_arrInviteeMembers;
@property(retain, nonatomic) NSString *m_inviterName; // @synthesize m_inviterName;
@property(nonatomic) long long m_msgInnerType; // @synthesize m_msgInnerType;
@property(retain, nonatomic) NSString *m_newXmlType; // @synthesize m_newXmlType;
@property(retain, nonatomic) NSString *m_sessionShowContent; // @synthesize m_sessionShowContent;
@property(retain, nonatomic) NSString *m_url; // @synthesize m_url;
@property(retain, nonatomic) NSString *m_qrCode; // @synthesize m_qrCode;
@property(retain, nonatomic) NSMutableArray *m_arrMembers; // @synthesize m_arrMembers;
@property(retain, nonatomic) NSString *m_showContent; // @synthesize m_showContent;
@property(nonatomic) __weak CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
- (void)parseHistoryRecord;
- (void)parseAAUnpayNotifyNewXmlMsg;
- (id)getResultWithRegularInString:(id)arg1 WithPatterns:(id)arg2;
- (id)parseTextNodeSucceedContact:(struct XmlReaderNode_t *)arg1 isNewSucceed:(_Bool)arg2;
- (void)requestFinderClubInfoIfNeeded:(_Bool)arg1;
- (struct XmlReaderNode_t *)getXMLNodeWithName:(const char *)arg1 fromNode:(struct XmlReaderNode_t *)arg2 useOwnMsgType:(unsigned long long)arg3;
- (void)parseTemplateContentNode:(struct XmlReaderNode_t *)arg1;
- (void)parseTemplateNewXmlMsg:(struct XmlReaderNode_t *)arg1;
- (void)parseCommonNewXmlMsg:(struct XmlReaderNode_t *)arg1;
- (id)GetDisplaySessionContent;
- (id)GetDisplayContent;
- (void)ChangeForDisplay;
- (void)ChangeForDisplayAnyhow;
- (struct XmlReaderNode_t *)parseNextSibling:(struct XmlReaderNode_t *)arg1;
- (struct XmlReaderNode_t *)parseFirstChild:(struct XmlReaderNode_t *)arg1;
- (void)parseLinkNode:(struct XmlReaderNode_t *)arg1;
- (void)parseTextNode:(struct XmlReaderNode_t *)arg1;
- (_Bool)isFinderClubProfileScene:(id)arg1;
- (_Bool)isFinderClubFeedScene:(id)arg1;
- (_Bool)isTransferFinderClubAcccountScene:(id)arg1;
- (_Bool)isCreateFinderClubAcccountScene:(id)arg1;
- (_Bool)isChatroomHistoryRecordScene:(id)arg1;
- (_Bool)isChatroomMuteExptScene:(id)arg1;
- (_Bool)isEditRevokeContentScene:(id)arg1;
- (_Bool)isJumpChatScene:(id)arg1;
- (_Bool)isProfileScene:(id)arg1;
- (_Bool)isApproveToInviterScene:(id)arg1;
- (_Bool)isOpenIMApproveScene:(id)arg1;
- (_Bool)isApproveScene:(id)arg1;
- (_Bool)isInviterScene:(id)arg1;
- (_Bool)isWebviewScene:(id)arg1;
- (_Bool)isNewSucceedContactScene:(id)arg1;
- (_Bool)isSucceedContactScene:(id)arg1;
- (_Bool)isAdminExplainScene:(id)arg1;
- (_Bool)isInvitationScene:(id)arg1;
- (_Bool)isQRCodeScene:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
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

