//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ForwardMessageLogicController, MMPageSheetBaseView, MsgDataSaveLogic, NSMutableArray, NSString;
@protocol MultiSelectContollerDelegate;

@interface MultiSelectController
{
    NSString *m_nsChatUserName;
    NSMutableArray *m_arrSelectMsg;
    NSMutableArray *m_arrMsgCanBeOprate;
    NSMutableArray *supportContacts;
    CContact *m_toContact;
    _Bool hasAnyMsgCannotAddToFav;
    _Bool hasAnyMsgDidnotDownload;
    _Bool hasAnyMsgCannotSendtoBrand;
    _Bool hasAnyMsgCannotSendtoEnterpriseChat;
    _Bool hasAnyMsgCannotSendByMail;
    _Bool attachTotalSizeTooLarge;
    _Bool hasAnyMsgCannotSendToWeWork;
    int invalidMsgCount;
    _Bool hasNoUploadFileMsg;
    _Bool hasNoUploadVideoMsg;
    ForwardMessageLogicController *m_forwardMsgLogic;
    id <MultiSelectContollerDelegate> m_delegate;
    _Bool packToSend;
    MsgDataSaveLogic *m_msgDataSaveLogic;
    _Bool _loadRecordImgFail;
    MMPageSheetBaseView *_recordTipView;
    CDUnknownBlockType _recordTipCompleteBlock;
}

+ (_Bool)didDownloadOK:(id)arg1;
+ (unsigned int)getDownloadThumbStatus:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool loadRecordImgFail; // @synthesize loadRecordImgFail=_loadRecordImgFail;
@property(copy, nonatomic) CDUnknownBlockType recordTipCompleteBlock; // @synthesize recordTipCompleteBlock=_recordTipCompleteBlock;
@property(retain, nonatomic) MMPageSheetBaseView *recordTipView; // @synthesize recordTipView=_recordTipView;
@property(nonatomic) __weak id <MultiSelectContollerDelegate> m_delegate; // @synthesize m_delegate;
- (_Bool)checkDidDownLoadOKRecordDataFieldAr:(id)arg1;
- (id)changeString2HtmlContent:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)onSendComplete;
- (_Bool)IsMsgExceedRecordSizeWithAlert:(id)arg1;
- (void)_checkAndSendMsgToFriend;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handAlertWithEAlertViewType:(int)arg1;
- (void)onMsgDataSaveLogicEnd:(_Bool)arg1 expiredMsgs:(id)arg2;
- (id)getViewController;
- (void)downloadMultiMsg:(id)arg1 WithUserName:(id)arg2 saveToAlbum:(_Bool)arg3;
- (void)sendMultiMsgByMail:(id)arg1 WithUserName:(id)arg2;
- (void)sendMultiMsgByMailInternal;
- (void)sendMailBySystemMail:(id)arg1 Content:(id)arg2 Subject:(id)arg3;
- (id)mimeOfFile:(id)arg1;
- (void)sendMailByQQMail:(id)arg1 Content:(id)arg2 Subject:(id)arg3;
- (void)getSubject:(id)arg1 AndHeader:(id)arg2 IsNative:(_Bool)arg3;
- (id)getMailNodeList;
- (id)convertMsg2MailContent:(id)arg1 videoCnt:(int)arg2;
- (id)getContactNickName:(id)arg1;
- (void)CheckMsgForMail;
- (_Bool)canBeSendByMailCorrect:(id)arg1;
- (void)sendMultiMsgToEnterpriseChat:(id)arg1;
- (void)OnEnterpriseCancelSelectSession:(id)arg1;
- (void)OnEnterpriseSelectSession:(id)arg1 viewController:(id)arg2;
- (void)selectEnterpriseChatSession;
- (void)CheckMsgForSendToEnterpriseChatWithAlert;
- (void)sendMultiMsgToEnterpriseChatBrand:(id)arg1 WithUserName:(id)arg2 To:(id)arg3;
- (void)CheckMsgForSendToEnterpriseChat;
- (void)onEnterpriseSelectBrandContact:(id)arg1 viewController:(id)arg2;
- (void)selectEnterpriseBrandContact;
- (void)CheckMsgForSendToBrandWithAlert;
- (void)sendMultiMsgToBrandContact:(id)arg1 WithUserName:(id)arg2 To:(id)arg3;
- (void)sendMsgListToBrandInternal;
- (void)CheckMsgForSendToBrand;
- (void)showChooseMultiOrSingleView;
- (void)sendSingleBySingleMsgToFriend:(id)arg1 WithUserName:(id)arg2;
- (void)sendMultiMsgToFriend:(id)arg1 WithUserName:(id)arg2 packedToSend:(_Bool)arg3;
- (void)sendMultiMsgToFriend:(id)arg1 WithUserName:(id)arg2;
- (void)sendMultiMsgToFriend:(_Bool)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)CheckMsgForSendToFriend;
- (_Bool)canBeSendToFriend:(id)arg1;
- (_Bool)didDownloadOK:(id)arg1;
- (unsigned int)getDownloadThumbStatus:(id)arg1;
- (void)addMultiMsgToMyFav:(id)arg1 WithUserName:(id)arg2;
- (void)addMsgListToFavInternal;
- (void)CheckMsgForFavAdd;
- (_Bool)canBeAddToFav:(id)arg1 singleMsg:(_Bool)arg2;
- (void)EndMultiEdit;
- (id)getMultiMsgWithMsgIDList:(id)arg1 AndUserName:(id)arg2;
- (void)Reset;
- (void)ResetDataWithMsgIDList:(id)arg1 AndUserName:(id)arg2;
- (void)sortMsgList:(id)arg1;
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

