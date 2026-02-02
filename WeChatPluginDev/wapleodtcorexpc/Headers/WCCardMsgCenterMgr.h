//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCCardEntryTips, WCCardMsgTips, WCCardPkgDB;
@protocol WCCardMsgCenterMgrDelegate;

@interface WCCardMsgCenterMgr
{
    WCCardPkgDB *_wccardPkgDB;
    WCCardMsgTips *_wccardMsgTips;
    WCCardEntryTips *_wccardEntryTips;
    unsigned long long _lastMsgSvrId;
    unsigned long long _lastLastMsgSvrId;
    NSString *_nsLastConsumedBoxID;
    id <WCCardMsgCenterMgrDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCardMsgCenterMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)loadCardTips;
- (void)cleanBubbleMessage;
- (unsigned int)bubbleMessageCount;
- (id)bubbleMessageIconUrl;
- (id)bubbleMessageWording;
- (_Bool)hasNewEntryMeRedDotBySvr;
- (_Bool)hasNewEntryRedDotBySvr;
- (_Bool)hasNewEntryNewBySvr;
- (_Bool)isLastMsgNeedCheckForClear;
- (id)lastMsgCardIdForEntryTip;
- (void)cleanRedDotBuffBySvr;
- (id)getRedDotBuffBySvr;
- (void)cleanEntryTipBySvr;
- (id)entryTipIconUrlBySvr;
- (id)entryTipWordingBySvr;
- (_Bool)hasEntryShowRedDotBySvr;
- (_Bool)hasEntryShowNewBySvr;
- (_Bool)setConsumedMsgRead:(id)arg1;
- (_Bool)setAllMsgRead;
- (_Bool)addMsg:(id)arg1 XML:(id)arg2;
- (id)getFirstPageMsgList;
- (unsigned int)getUnreadMsgCount;
- (void)initDB:(id)arg1;
- (id)init;

@end

