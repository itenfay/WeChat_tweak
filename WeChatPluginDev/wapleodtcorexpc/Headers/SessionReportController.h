//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, CMessageWrap, NSMutableArray, NSString;

@interface SessionReportController : NSObject
{
    CContact *m_oChatContact;
    unsigned int m_uiUnReadCount;
    unsigned int m_uiReceiveCount;
    unsigned int m_uiSendCount;
    _Bool m_bShowUnreadTip;
    _Bool m_bClickUnreadTip;
    _Bool m_bDidScroll;
    unsigned long long m_enterSessionTimeMs;
    unsigned long long m_leaveSessionTimeMs;
    CMessageWrap *m_lastMsg;
    NSMutableArray *m_msgInfos;
    unsigned long long _fromScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
- (int)getEnterScene;
- (void)realReport:(_Bool)arg1;
- (void)doReport:(_Bool)arg1;
- (void)willTerminate:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)onLeaveSession;
- (void)onClickUnreadTip;
- (void)onShowUnreadTip;
- (void)onSessionDidScroll;
- (void)onSessionAddMsg:(id)arg1;
- (void)onSessionWillDisplayMsg:(id)arg1;
- (void)dealloc;
- (id)initWithChatContact:(id)arg1 unreadMsgCount:(unsigned int)arg2 lastMsg:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

