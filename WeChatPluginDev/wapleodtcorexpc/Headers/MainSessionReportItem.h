//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface MainSessionReportItem : NSObject
{
    _Bool _isFirstReportExit;
    _Bool _isMute;
    long long _chatType;
    unsigned long long _exitTime;
    unsigned long long _enterTime;
    long long _unreadMsgCountAtEnter;
    long long _unreadSessionCountAtEnter;
    long long _unreadMsgCountAtExit;
    long long _unreadSessionCountAtExit;
    long long _recvMsgCount;
    long long _clearMsgCount;
    long long _maxEntrySessionIndex;
    NSMutableSet *_recvMsgSessions;
    NSMutableSet *_enterSessions;
    NSMutableSet *_clearUnreadSessions;
    long long _topSessionCount;
    NSMutableArray *_sessionDetails;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *sessionDetails; // @synthesize sessionDetails=_sessionDetails;
@property(nonatomic) long long topSessionCount; // @synthesize topSessionCount=_topSessionCount;
@property(retain, nonatomic) NSMutableSet *clearUnreadSessions; // @synthesize clearUnreadSessions=_clearUnreadSessions;
@property(retain, nonatomic) NSMutableSet *enterSessions; // @synthesize enterSessions=_enterSessions;
@property(retain, nonatomic) NSMutableSet *recvMsgSessions; // @synthesize recvMsgSessions=_recvMsgSessions;
@property(nonatomic) long long maxEntrySessionIndex; // @synthesize maxEntrySessionIndex=_maxEntrySessionIndex;
@property(nonatomic) long long clearMsgCount; // @synthesize clearMsgCount=_clearMsgCount;
@property(nonatomic) long long recvMsgCount; // @synthesize recvMsgCount=_recvMsgCount;
@property(nonatomic) long long unreadSessionCountAtExit; // @synthesize unreadSessionCountAtExit=_unreadSessionCountAtExit;
@property(nonatomic) long long unreadMsgCountAtExit; // @synthesize unreadMsgCountAtExit=_unreadMsgCountAtExit;
@property(nonatomic) long long unreadSessionCountAtEnter; // @synthesize unreadSessionCountAtEnter=_unreadSessionCountAtEnter;
@property(nonatomic) long long unreadMsgCountAtEnter; // @synthesize unreadMsgCountAtEnter=_unreadMsgCountAtEnter;
@property(nonatomic) _Bool isMute; // @synthesize isMute=_isMute;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) unsigned long long exitTime; // @synthesize exitTime=_exitTime;
@property(nonatomic) long long chatType; // @synthesize chatType=_chatType;
@property(nonatomic) _Bool isFirstReportExit; // @synthesize isFirstReportExit=_isFirstReportExit;
- (id)genSessionDetails;
- (void)reportAt:(long long)arg1;
- (void)reset;
- (id)init;

@end

