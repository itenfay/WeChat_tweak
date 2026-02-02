//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel, WCFinderLiveCommentBlurButtonBackView;

@interface WCFinderLiveCommentButton
{
    _Bool _isSynchronizeLayout;
    UILabel *_commentBadgeLabel;
    CDUnknownBlockType _onCommentPrivateMsgAreaTapCallback;
    unsigned long long _unReadAtMeMsgCount;
    unsigned long long _unReadFriendReplyMeMsgCount;
    unsigned long long _unReadFriendMsgCount;
    long long _currentBadgeNum;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSynchronizeLayout; // @synthesize isSynchronizeLayout=_isSynchronizeLayout;
@property(nonatomic) long long currentBadgeNum; // @synthesize currentBadgeNum=_currentBadgeNum;
@property(nonatomic) unsigned long long unReadFriendMsgCount; // @synthesize unReadFriendMsgCount=_unReadFriendMsgCount;
@property(nonatomic) unsigned long long unReadFriendReplyMeMsgCount; // @synthesize unReadFriendReplyMeMsgCount=_unReadFriendReplyMeMsgCount;
@property(nonatomic) unsigned long long unReadAtMeMsgCount; // @synthesize unReadAtMeMsgCount=_unReadAtMeMsgCount;
@property(copy, nonatomic) CDUnknownBlockType onCommentPrivateMsgAreaTapCallback; // @synthesize onCommentPrivateMsgAreaTapCallback=_onCommentPrivateMsgAreaTapCallback;
@property(retain, nonatomic) UILabel *commentBadgeLabel; // @synthesize commentBadgeLabel=_commentBadgeLabel;
- (void)handleCommentPrivateMsgAreaTap:(id)arg1;
- (void)forceLayoutIfNeed;
- (void)addUnReadAtMeMsg:(unsigned long long)arg1 unReadFriendReplyMeMsg:(unsigned long long)arg2 friendMsgCount:(unsigned long long)arg3;
- (void)displayPrivateMsgEnranceSwitch:(double)arg1;
- (void)hidePrivateMsgEntrance;
- (void)displayPrivateMsgEntrance;
- (void)updateCommentBadgeNum:(long long)arg1;
@property(readonly, nonatomic) WCFinderLiveCommentBlurButtonBackView *commentBlurBackView;
- (id)getBlurButtonBackView;
- (void)udpateCommentBadgeLabelHidden;
- (id)getBadgeStr:(long long)arg1;
- (void)handleUnReadCountChanged;
- (void)clearUnReadCount;
- (void)udpateCommentBadgeLabelOrigin;
- (void)layoutCommentBadgeLabel;
- (void)layoutBackView;
- (void)layoutUI;

@end

