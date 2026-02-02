//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCPayTransferMessageViewModel
{
    NSString *_bgImageName;
    double _groupTransferBubbleHeight;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double groupTransferBubbleHeight; // @synthesize groupTransferBubbleHeight=_groupTransferBubbleHeight;
@property(readonly, nonatomic) NSString *bgImageName; // @synthesize bgImageName=_bgImageName;
- (id)additionalAccessibilityDescription;
- (unsigned int)msgStatus;
- (_Bool)isUnHandleTransferMsgSendFromMe;
- (_Bool)shouldShowAddressIcon;
- (_Bool)hasTransferAddress;
- (_Bool)isTransferBubbleFromReceiver;
- (_Bool)isGroupTransferMsgOutSider;
- (double)getGroupTransferBubbleHeight;
- (_Bool)isGroupTransferMsgForMe;
- (_Bool)isGroupTransferMsgOrOpenim;
- (id)iconName;
- (unsigned long long)bubbleType;
- (double)iconSize;
- (id)getGroupTransferNicknameWithContact:(id)arg1;
- (long long)getFeeDescLength;
- (id)getGroupTransferTitleText;
- (id)innerTitleText;
- (id)titleText;
- (id)descText;
- (id)sourceTag;
- (id)sourceTitle;
- (id)getRevokeMsgCustomizeActionSheet;
- (int)revokeTimeLimitInSecond;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

