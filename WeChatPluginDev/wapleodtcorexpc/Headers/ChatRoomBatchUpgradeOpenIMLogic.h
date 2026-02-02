//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableDictionary, NSString;
@protocol ChatRoomBatchUpgradeOpenIMLogicDelegate;

@interface ChatRoomBatchUpgradeOpenIMLogic
{
    NSMutableDictionary *m_upgradeChatRoomDicResult;
    id <ChatRoomBatchUpgradeOpenIMLogicDelegate> m_delegate;
    NSString *_chatRoomBatchUpgradeOpenIMTicket;
    NSArray *_m_upgradeOpenIMChatRoomUsrNameAr;
    NSArray *_m_normalChatRoomUsrNameAr;
}

+ (void)reportBatchUpgradeAssociateChatRoomResultWithRecomdSuccessCount:(unsigned long long)arg1 andRecomdFailCount:(unsigned long long)arg2 andOtherSuccessCount:(unsigned long long)arg3 andOtherFailCount:(unsigned long long)arg4 andSuccessRoomUsrNameList:(id)arg5 andTicketId:(id)arg6;
+ (void)reportBatchUpgradeAssociateChatRoomWithRecomdCount:(unsigned long long)arg1 andIsClickMore:(_Bool)arg2 andRecomdSelectCount:(unsigned long long)arg3 andOtherSelectCount:(unsigned long long)arg4 andIsClickChange:(_Bool)arg5 andTicketId:(id)arg6 andOtherCount:(unsigned long long)arg7;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *m_normalChatRoomUsrNameAr; // @synthesize m_normalChatRoomUsrNameAr=_m_normalChatRoomUsrNameAr;
@property(retain, nonatomic) NSArray *m_upgradeOpenIMChatRoomUsrNameAr; // @synthesize m_upgradeOpenIMChatRoomUsrNameAr=_m_upgradeOpenIMChatRoomUsrNameAr;
@property(retain, nonatomic) NSString *chatRoomBatchUpgradeOpenIMTicket; // @synthesize chatRoomBatchUpgradeOpenIMTicket=_chatRoomBatchUpgradeOpenIMTicket;
@property(nonatomic) __weak id <ChatRoomBatchUpgradeOpenIMLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)reportBatchUpgradeAssociateChatRoom;
- (void)OnUpgradeAssociateChatRoom:(id)arg1 withTicket:(id)arg2 withResult:(unsigned int)arg3 errorMsg:(id)arg4;
- (void)OnGetUpgradeAssociateChatRoom:(id)arg1 withTicket:(id)arg2 withResult:(unsigned int)arg3 errorMsg:(id)arg4 withResp:(id)arg5;
- (void)openChatRoomUpgradeOpenIMViewControllerWithResp:(id)arg1;
- (void)startBatchUpgradeAssociateChatRoom:(id)arg1;
- (void)start;
- (id)init;

@end

