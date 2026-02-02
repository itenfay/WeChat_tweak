//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class Channel, ChatroomUserData, GCChatBaseCellLayoutInfo, GCChatRoomMessage, GCContentModel, JumpInfo, NSString, SendChatroomMsgRequest, UIColor;
@protocol GCChatBaseCellModelDelegate;

@interface GCChatBaseCellModel
{
    _Bool _isLocalMessage;
    _Bool _isPlaceHoldMessage;
    _Bool _isMessageCell;
    _Bool _isInvisible;
    _Bool _hasRoleIcon;
    _Bool _canBeAt;
    _Bool _canBeKicked;
    _Bool _disableLongPress;
    _Bool _hideTopLine;
    _Bool _hidePubbleView;
    _Bool _isCurChannelAllChannel;
    _Bool _isCurChannelChosenChannel;
    _Bool _hasTimeNode;
    _Bool _highLight;
    unsigned int _roleType;
    NSString *_userName;
    NSString *_userNickName;
    NSString *_headImgUrl;
    NSString *_tagDesc;
    UIColor *_tagColor;
    NSString *_roleStr;
    UIColor *_roleColor;
    UIColor *_roleBgColor;
    NSString *_roleIconUrl;
    JumpInfo *_roleJumpInfo;
    GCContentModel *_contentModel;
    unsigned long long _messageSendStatus;
    NSString *_reportUrl;
    GCChatBaseCellLayoutInfo *_layoutInfo;
    id <GCChatBaseCellModelDelegate> _chatCellDelegate;
    unsigned long long _seq;
    NSString *_cliMsgId;
    SendChatroomMsgRequest *_sendMsgRequest;
    ChatroomUserData *_chatRoomUserData;
    GCChatRoomMessage *_chatRoomMessage;
    NSString *_statusIconUrl;
    UIColor *_statusBgColor;
    long long _channelId;
    Channel *_channel;
    unsigned long long _bindCellModelSeq;
    struct UIEdgeInsets _customEdgeInsets;
}

+ (id)cellModelFromChatroomMessage:(id)arg1;
+ (Class)classForMessageType:(unsigned long long)arg1 subMessageType:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic, getter=isHighLight) _Bool highLight; // @synthesize highLight=_highLight;
@property(nonatomic) unsigned long long bindCellModelSeq; // @synthesize bindCellModelSeq=_bindCellModelSeq;
@property(nonatomic) _Bool hasTimeNode; // @synthesize hasTimeNode=_hasTimeNode;
@property(retain, nonatomic) Channel *channel; // @synthesize channel=_channel;
@property(nonatomic) long long channelId; // @synthesize channelId=_channelId;
@property(nonatomic) _Bool isCurChannelChosenChannel; // @synthesize isCurChannelChosenChannel=_isCurChannelChosenChannel;
@property(nonatomic) _Bool isCurChannelAllChannel; // @synthesize isCurChannelAllChannel=_isCurChannelAllChannel;
@property(retain, nonatomic) UIColor *statusBgColor; // @synthesize statusBgColor=_statusBgColor;
@property(retain, nonatomic) NSString *statusIconUrl; // @synthesize statusIconUrl=_statusIconUrl;
@property(nonatomic) struct UIEdgeInsets customEdgeInsets; // @synthesize customEdgeInsets=_customEdgeInsets;
@property(nonatomic) _Bool hidePubbleView; // @synthesize hidePubbleView=_hidePubbleView;
@property(nonatomic) _Bool hideTopLine; // @synthesize hideTopLine=_hideTopLine;
@property(retain, nonatomic) GCChatRoomMessage *chatRoomMessage; // @synthesize chatRoomMessage=_chatRoomMessage;
@property(retain, nonatomic) ChatroomUserData *chatRoomUserData; // @synthesize chatRoomUserData=_chatRoomUserData;
@property(retain, nonatomic) SendChatroomMsgRequest *sendMsgRequest; // @synthesize sendMsgRequest=_sendMsgRequest;
@property(nonatomic) _Bool disableLongPress; // @synthesize disableLongPress=_disableLongPress;
@property(retain, nonatomic) NSString *cliMsgId; // @synthesize cliMsgId=_cliMsgId;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
@property(nonatomic) __weak id <GCChatBaseCellModelDelegate> chatCellDelegate; // @synthesize chatCellDelegate=_chatCellDelegate;
@property(nonatomic) _Bool canBeKicked; // @synthesize canBeKicked=_canBeKicked;
@property(nonatomic) _Bool canBeAt; // @synthesize canBeAt=_canBeAt;
@property(retain, nonatomic) GCChatBaseCellLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(retain, nonatomic) NSString *reportUrl; // @synthesize reportUrl=_reportUrl;
@property(nonatomic) unsigned long long messageSendStatus; // @synthesize messageSendStatus=_messageSendStatus;
@property(retain, nonatomic) GCContentModel *contentModel; // @synthesize contentModel=_contentModel;
@property(retain, nonatomic) JumpInfo *roleJumpInfo; // @synthesize roleJumpInfo=_roleJumpInfo;
@property(copy, nonatomic) NSString *roleIconUrl; // @synthesize roleIconUrl=_roleIconUrl;
@property(nonatomic) _Bool hasRoleIcon; // @synthesize hasRoleIcon=_hasRoleIcon;
@property(retain, nonatomic) UIColor *roleBgColor; // @synthesize roleBgColor=_roleBgColor;
@property(retain, nonatomic) UIColor *roleColor; // @synthesize roleColor=_roleColor;
@property(retain, nonatomic) NSString *roleStr; // @synthesize roleStr=_roleStr;
@property(nonatomic) unsigned int roleType; // @synthesize roleType=_roleType;
@property(retain, nonatomic) UIColor *tagColor; // @synthesize tagColor=_tagColor;
@property(retain, nonatomic) NSString *tagDesc; // @synthesize tagDesc=_tagDesc;
@property(retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(retain, nonatomic) NSString *userNickName; // @synthesize userNickName=_userNickName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) _Bool isInvisible; // @synthesize isInvisible=_isInvisible;
@property(nonatomic) _Bool isMessageCell; // @synthesize isMessageCell=_isMessageCell;
@property(nonatomic) _Bool isPlaceHoldMessage; // @synthesize isPlaceHoldMessage=_isPlaceHoldMessage;
@property(nonatomic) _Bool isLocalMessage; // @synthesize isLocalMessage=_isLocalMessage;
- (void)onExitRoom;
- (void)exitRoom;
- (id)spaceAndTagDesc;
- (unsigned long long)supportedMenuOptions;
@property(readonly, nonatomic) _Bool isMySelf;
- (void)clearCachedLayoutInfo;
- (void)playHighlightAnimation;
- (id)chatBaseCell;
- (void)endHightLight;
- (void)handleJumpInfo:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (_Bool)subClassHandleLongPress:(id)arg1;
- (id)bindChatBaseCell;
- (void)onRoleInfoTap;
- (void)handleRevokeTickle;
- (void)handleHeadDoubleClick;
- (void)handleHeadTap;
- (void)handleManageMember;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleBlock;
- (void)handleVote:(unsigned long long)arg1;
- (void)handleVoteMenuItem;
- (void)handleReport;
- (void)handleAt;
- (void)didClickAt;
- (void)handleCopy;
- (void)handleLocate;
- (void)handleChoose;
- (_Bool)showChannelName;
- (_Bool)disableRightLoadingView;
- (_Bool)customHandleReSend;
- (_Bool)isAllChannel;
- (_Bool)isChoosenChannel;
- (id)menuItemWithSvgStr:(id)arg1 title:(id)arg2 selector:(SEL)arg3 posId:(unsigned long long)arg4;
- (void)showMemuController:(id)arg1;
- (void)onFavoriteTranslate:(id)arg1;
- (void)onCopyTranslate:(id)arg1;
- (struct CGSize)cellSizeForCollectionView:(id)arg1;
- (Class)bindCellClass;
- (void)onChatroomMessageInitEnd;
@property(readonly, nonatomic) _Bool isServerMsg;
- (void)onGetBindReport:(id)arg1;
- (void)configureReportModel:(id)arg1;
- (void)onUpdateContentModel;
- (void)updateContentModel;
- (void)updateWithUserData:(id)arg1;
- (id)initWithChatroomMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

