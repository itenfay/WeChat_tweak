//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CBaseContact, MMTimer, NSString;
@protocol TypingControllerDelgate;

@interface TypingController : NSObject
{
    unsigned int m_uLastSendTypingTime;
    CBaseContact *m_contact;
    NSString *m_nsLastTextViewText;
    id <TypingControllerDelgate> m_delegate;
    MMTimer *m_receiveTypingTimer;
    unsigned int m_uLastReveicedMsgTime;
    unsigned int m_uChatStatus;
    _Bool m_bFirstTyping;
    struct _NSRange _m_LastMarkedRange;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange m_LastMarkedRange; // @synthesize m_LastMarkedRange=_m_LastMarkedRange;
@property(nonatomic) unsigned int m_uLastReveicedMsgTime; // @synthesize m_uLastReveicedMsgTime;
@property(retain, nonatomic) MMTimer *m_receiveTypingTimer; // @synthesize m_receiveTypingTimer;
@property(nonatomic) __weak id <TypingControllerDelgate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_nsLastTextViewText; // @synthesize m_nsLastTextViewText;
@property(retain, nonatomic) CBaseContact *m_contact; // @synthesize m_contact;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUploadVoiceOK:(id)arg1;
- (void)dealloc;
- (void)Reset;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)onReceiveTypingTimer:(id)arg1;
- (void)stopReceiveTypingTimer;
- (void)startReceiveTypingTimer;
- (void)updateTitle:(int)arg1;
- (void)onTextChange:(id)arg1 markedRange:(struct _NSRange)arg2;
- (void)trySendTyping:(int)arg1;
- (void)trySendClearTyping;
- (_Bool)sendChatStatusInternal:(unsigned int)arg1;
- (_Bool)IsNeedTyping;
- (void)UnRegister;
- (void)Register;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

