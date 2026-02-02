//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, EmotionBannerSet, ForwardMessageLogicController, NSString, WCDataItem;
@protocol StoreEmotionPageShareLogicDelegate;

@interface StoreEmotionPageShareLogic
{
    ForwardMessageLogicController *m_forwardMsgLogic;
    NSString *m_titleForShareToTimeline;
    NSString *m_titleForShareToFriend;
    NSString *m_desc;
    NSString *m_iconUrl;
    NSString *m_linkUrl;
    unsigned long long m_thirdPartyLinkID;
    unsigned long long m_thirdPartyLinkStatus;
    NSString *m_thirdPartyLinkReportInfo;
    long long m_shareToTimelineType;
    long long m_shareToFriendType;
    NSString *m_pid;
    unsigned int m_packType;
    unsigned int m_designerUin;
    NSString *m_designerName;
    EmotionBannerSet *m_bannerSet;
    CContact *m_shareContact;
    id <StoreEmotionPageShareLogicDelegate> _delegate;
    WCDataItem *_timeLineDataItem;
}

+ (id)genProductIdFromTimelineUserData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCDataItem *timeLineDataItem; // @synthesize timeLineDataItem=_timeLineDataItem;
@property(nonatomic) __weak id <StoreEmotionPageShareLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)ReportShareAction:(unsigned long long)arg1 Type:(unsigned long long)arg2 Pid:(id)arg3 SetCellID:(unsigned long long)arg4 SetName:(id)arg5 thirdPartyLinkID:(unsigned long long)arg6 thirdPartyLinkStatus:(unsigned long long)arg7 thirdPartyLinkReportInfo:(id)arg8;
- (void)ReportShareAction:(unsigned long long)arg1 BannerSet:(id)arg2 Type:(unsigned long long)arg3;
- (void)ReportShareAction:(unsigned long long)arg1 DesignerUin:(unsigned int)arg2;
- (void)ReportShareAction:(unsigned long long)arg1 Pid:(id)arg2 thirdPartyLinkID:(unsigned long long)arg3 thirdPartyLinkStatus:(unsigned long long)arg4 thirdPartyLinkReportInfo:(id)arg5;
- (void)showLoadingWithMsg:(id)arg1;
- (id)genShareFriendMessage;
- (void)shareToFriend;
- (id)genTimelineUserData;
- (id)genUploadTask;
- (void)shareToTimeline;
- (void)showActionSheetWithSender:(id)arg1;
- (id)initWithBannerSet:(id)arg1;
- (id)initWithPersonalDesigner:(id)arg1 Desc:(id)arg2 OldRedirectUrl:(id)arg3;
- (id)initWithStoreItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

