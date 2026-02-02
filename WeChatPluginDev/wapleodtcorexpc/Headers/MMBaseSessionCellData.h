//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMBaseSessionInfo, NSString, UIImage;

@interface MMBaseSessionCellData : NSObject
{
    MMBaseSessionInfo *m_baseSessionInfo;
    NSString *m_textForTimeLabel;
    NSString *m_textForNameLabel;
    NSString *m_textForMsgLabel;
    NSString *m_userName;
    NSString *m_headImgUrl;
    unsigned int m_unreadCount;
    unsigned int m_msgStatus;
    unsigned int m_updateTime;
    _Bool m_isMoreThanAWeek;
    _Bool m_isSentFromSelf;
    _Bool m_isHasDraft;
    _Bool _isSubscribeBrandContact;
    _Bool _isBrandServiceContact;
    _Bool _isContentOriginal;
    _Bool _forceHiddenChatNotPushIcon;
    _Bool _forceCloseChatStatusNotify;
    _Bool _hideMsgLabelWhenMsgIsEmpty;
    int _badgeUnreadMaxCount;
    NSString *m_textForNameDescLabel;
    NSString *m_fromBusinessNameLabel;
    UIImage *_headImage;
    NSString *_senderDisplayName;
    UIImage *_namePostIconImage;
    NSString *_accessibilityForTimeLabel;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accessibilityForTimeLabel; // @synthesize accessibilityForTimeLabel=_accessibilityForTimeLabel;
@property(retain, nonatomic) UIImage *namePostIconImage; // @synthesize namePostIconImage=_namePostIconImage;
@property(nonatomic) _Bool hideMsgLabelWhenMsgIsEmpty; // @synthesize hideMsgLabelWhenMsgIsEmpty=_hideMsgLabelWhenMsgIsEmpty;
@property(nonatomic) _Bool forceCloseChatStatusNotify; // @synthesize forceCloseChatStatusNotify=_forceCloseChatStatusNotify;
@property(nonatomic) _Bool forceHiddenChatNotPushIcon; // @synthesize forceHiddenChatNotPushIcon=_forceHiddenChatNotPushIcon;
@property(retain, nonatomic) NSString *senderDisplayName; // @synthesize senderDisplayName=_senderDisplayName;
@property(retain, nonatomic) UIImage *headImage; // @synthesize headImage=_headImage;
@property(nonatomic) int badgeUnreadMaxCount; // @synthesize badgeUnreadMaxCount=_badgeUnreadMaxCount;
@property(readonly, nonatomic) _Bool isContentOriginal; // @synthesize isContentOriginal=_isContentOriginal;
@property(readonly, retain, nonatomic) NSString *fromBusinessNameLabel; // @synthesize fromBusinessNameLabel=m_fromBusinessNameLabel;
@property(readonly, retain, nonatomic) MMBaseSessionInfo *sessionInfo; // @synthesize sessionInfo=m_baseSessionInfo;
@property(readonly, nonatomic) _Bool isHasDraft; // @synthesize isHasDraft=m_isHasDraft;
@property(readonly, nonatomic) unsigned int msgStatus; // @synthesize msgStatus=m_msgStatus;
@property(readonly, nonatomic) _Bool isSentFromSelf; // @synthesize isSentFromSelf=m_isSentFromSelf;
@property(readonly, nonatomic) unsigned int unreadCount; // @synthesize unreadCount=m_unreadCount;
@property(readonly, retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=m_headImgUrl;
@property(readonly, retain, nonatomic) NSString *textForNameDescLabel; // @synthesize textForNameDescLabel=m_textForNameDescLabel;
@property(readonly, retain, nonatomic) NSString *textForMsgLabel; // @synthesize textForMsgLabel=m_textForMsgLabel;
@property(readonly, retain, nonatomic) NSString *textForNameLabel; // @synthesize textForNameLabel=m_textForNameLabel;
@property(readonly, retain, nonatomic) NSString *textForTimeLabel; // @synthesize textForTimeLabel=m_textForTimeLabel;
- (id)textForMsgLabelWithSender:(id)arg1 messageWrap:(id)arg2;
- (void)updateFromBusinessNameLabelWithContact:(id)arg1;
- (void)forceUpdateUnreadCount:(unsigned int)arg1;
- (void)updateMsgLabelTextForWeixinUsr:(id)arg1;
- (void)updateMsgStatus:(id)arg1;
- (void)updateUnreadCount;
- (void)updateTimeLabel;
- (void)updateNameLabelText:(id)arg1;
@property(readonly, nonatomic) unsigned int sessionUpdateTime;
@property(readonly, nonatomic) _Bool isChatStatusNotifyOpen;
@property(readonly, retain, nonatomic) NSString *userName; // @synthesize userName=m_userName;
- (void)updateWithBaseSessionInfo:(id)arg1;
- (void)dealloc;
- (id)initWithBaseSessionInfo:(id)arg1;

@end

