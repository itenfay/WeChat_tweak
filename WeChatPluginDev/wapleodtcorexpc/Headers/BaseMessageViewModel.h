//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CBaseContact, CMessageWrap, NSString;
@protocol RecordNodeDataSource;

@interface BaseMessageViewModel
{
    CBaseContact *m_contact;
    CMessageWrap *m_messageWrap;
    struct CGSize m_contentViewSize;
    NSString *m_cpKeyForChatRoomMessage;
    NSString *m_cpKeyForChatRoomDisplayName;
    _Bool m_isChatRoomMessageUnsafe;
    _Bool m_isChatRoomDisplayNameUnsafe;
    _Bool m_isSender;
    _Bool _isShowStatusView;
    _Bool _highlighted;
    NSString *_customHeadImageUrl;
}

+ (_Bool)canCreateViewModelInBackground;
+ (_Bool)canCreateMessageViewModelInBackgroundWithMessageWrap:(id)arg1;
+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (id)createMessageViewModelWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
+ (void)initMessageViewModelClassList;
+ (void)initMessageViewModelClassListForVisionOS;
+ (void)initMessageViewModelClassListForIOS;
+ (void)registerMessageViewModelClass:(Class)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) _Bool isShowStatusView; // @synthesize isShowStatusView=_isShowStatusView;
@property(retain, nonatomic) NSString *customHeadImageUrl; // @synthesize customHeadImageUrl=_customHeadImageUrl;
@property(readonly, nonatomic) struct CGSize contentViewSize; // @synthesize contentViewSize=m_contentViewSize;
@property(nonatomic) _Bool isChatRoomDisplayNameUnsafe; // @synthesize isChatRoomDisplayNameUnsafe=m_isChatRoomDisplayNameUnsafe;
@property(nonatomic) _Bool isChatRoomMessageUnsafe; // @synthesize isChatRoomMessageUnsafe=m_isChatRoomMessageUnsafe;
@property(retain, nonatomic) NSString *cpKeyForChatRoomDisplayName; // @synthesize cpKeyForChatRoomDisplayName=m_cpKeyForChatRoomDisplayName;
@property(retain, nonatomic) NSString *cpKeyForChatRoomMessage; // @synthesize cpKeyForChatRoomMessage=m_cpKeyForChatRoomMessage;
@property(readonly, nonatomic) _Bool isSender; // @synthesize isSender=m_isSender;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=m_messageWrap;
@property(retain, nonatomic) CBaseContact *contact; // @synthesize contact=m_contact;
- (void)onMessageUpdateStatus;
- (id)chatRoomTextStateIconDescription;
- (id)chatRoomDisplayName;
- (id)chatRoomDescName;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (struct CGSize)measure:(struct CGSize)arg1;
- (struct CGSize)rowContentSize;
- (void)resetLayoutCache;
- (id)getRevokeMsgCustomizeActionSheet;
- (int)revokeTimeLimitInSecond;
- (void)updateContentViewHeight:(double)arg1;
- (_Bool)isShowSendOKView;
- (void)updateCrashProtectedState;
- (id)accessibilityMessageType;
- (id)additionalAccessibilityDescription;
- (id)accessibilityValue;
- (id)accessibilityDescription;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (_Bool)canMeasureContentViewSizeInBackground;
@property(readonly, nonatomic) unsigned int msgStatus;
- (_Bool)isShareConfirm;
- (_Bool)isFavRecordDetail;
- (_Bool)isMsgRecordDetail;
- (_Bool)isRecordDetail;
@property(nonatomic) __weak id <RecordNodeDataSource> recordNodeDataSource;
@property(nonatomic) int viewModelScene;
- (_Bool)isComponentHidden;
- (void)animateShowComponentWithDuration:(double)arg1;
- (void)showComponent;
- (void)hideComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

