//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ChatTimeNodeRightButtonInfo, ChatTimeViewModel, NSMutableArray, TemplateReaderMessageFolderViewModel;

@interface TemplateReaderMessageFolder
{
    NSMutableArray *_messageWrapList;
    TemplateReaderMessageFolderViewModel *_folderViewModel;
    ChatTimeViewModel *_timeViewModel;
    ChatTimeNodeRightButtonInfo *_rightButtonInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ChatTimeNodeRightButtonInfo *rightButtonInfo; // @synthesize rightButtonInfo=_rightButtonInfo;
@property(nonatomic) __weak ChatTimeViewModel *timeViewModel; // @synthesize timeViewModel=_timeViewModel;
@property(nonatomic) __weak TemplateReaderMessageFolderViewModel *folderViewModel; // @synthesize folderViewModel=_folderViewModel;
@property(retain, nonatomic) NSMutableArray *messageWrapList; // @synthesize messageWrapList=_messageWrapList;
- (_Bool)IsSameMsg:(id)arg1;
@property(readonly, nonatomic) unsigned int templateOpType;
- (unsigned int)m_subscrMsgScopeType;
- (unsigned int)m_uiTemplateType;
- (id)m_nsTemplateId;
- (unsigned int)m_uiCreateTime;
- (id)m_nsRealChatUsr;
- (id)m_nsFromUsr;
- (unsigned int)m_uiMesLocalID;
- (id)initWithMsgType:(long long)arg1;

@end

