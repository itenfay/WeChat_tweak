//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OpenIMContactExtendCodePB, OpenImResourceMgr, OpenImSyncMgr;

@interface OpenImContactMgr : NSObject
{
    OpenImSyncMgr *m_OpenImSyncMgr;
    OpenImResourceMgr *m_OpenImResourceMgr;
    OpenIMContactExtendCodePB *m_openImExtendInfo;
}

+ (id)getWordingIDFromOpenIMInfo:(id)arg1;
+ (id)getWordingIDFromCContact:(id)arg1;
+ (void)fillToCContact:(id)arg1 fromChatRoomMember:(id)arg2 isSimplify:(_Bool)arg3;
+ (id)convertChatRoomMemberToCContact:(id)arg1 isSimplify:(_Bool)arg2;
+ (void)fillToOpenImContact:(id)arg1 withOpenImContact:(id)arg2;
+ (void)fillToCContact:(id)arg1 fromChatRoomContact:(id)arg2;
+ (id)convertChatRoomContactToCContact:(id)arg1;
+ (void)fillToCContact:(id)arg1 from:(id)arg2;
+ (id)convertToCContact:(id)arg1;
- (void).cxx_destruct;
- (void)loadOpenImExtendInfoInternal;
- (void)saveOpenImExtendInfoToDataFileInternal;
- (id)getOpenImExtendInfoDataFilePath;
- (_Bool)openIMContactHadSucceedContact:(id)arg1;
- (_Bool)openIMContactHadShowSucceedContactWindow:(id)arg1;
- (void)saveOpenIMContactHadSucceedContact:(id)arg1;
- (void)saveOpenIMContactHadShowSucceedContactWindow:(id)arg1;
- (void)safeCallOpenIMStorageArchivePopUp:(id)arg1 privacyAgreementUrl:(id)arg2;
- (void)onUpdateOpenIMArchiveStatus:(id)arg1;
- (void)updateOpenIMArchiveStatus:(id)arg1 privacyAgreementUrl:(id)arg2 isAgreementArchiveStatus:(_Bool)arg3;
- (void)onGetOpenIMArchivePopUpInfo:(id)arg1;
- (void)getOpenIMArchivePopUpInfo:(id)arg1 privacyAgreementUrl:(id)arg2;
- (unsigned int)deleteOpenImContact:(id)arg1;
- (unsigned int)setOpenImContact:(id)arg1 favour:(_Bool)arg2;
- (unsigned int)setOpenImContact:(id)arg1 mute:(_Bool)arg2;
- (unsigned int)setOpenImContact:(id)arg1 top:(_Bool)arg2;
- (unsigned int)setOpenImContact:(id)arg1 black:(_Bool)arg2;
- (unsigned int)setOpenImContact:(id)arg1 remark:(id)arg2;
- (unsigned int)addOplogType:(unsigned int)arg1 Buffer:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetContact:(id)arg1;
- (_Bool)getContactsFromServer:(id)arg1 chatContact:(id)arg2 withTicket:(id)arg3;
- (void)onGetOpenIMContactOpenUrl:(id)arg1;
- (_Bool)getOpenIMContactOpenUrlFromServer:(id)arg1 andLastReceiveContent:(id)arg2;
- (void)batchCheckAndUpdataOpenImResource:(id)arg1;
- (id)resourceMgr;
- (void)removeListen;
- (void)initListen;
- (void)dealloc;
- (id)init;
- (void)doOpenIMStorageArchivePopUpWithSystemMsgWrap:(id)arg1 andNsUsrName:(id)arg2;
- (void)disableOpenIMFriReqAcceptedInWxWorkWithSystemMsgWrap:(id)arg1 andNsUsrName:(id)arg2;
- (void)reportOpenIMNewSucceedAcceptSucceedMessagewrapWithUsrName:(id)arg1 andMessageWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;

@end

