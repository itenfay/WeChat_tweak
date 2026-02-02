//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, WXGBackupDataMgr;
@protocol WXGChatSyncDataPackerDelegate;

@interface WXGChatSyncDataPacker : NSObject
{
    _Bool _bNeedMedia;
    _Bool _bUseMsgLimitArray;
    _Bool _bUseTimeInterval;
    _Bool _bGetExtenInfo;
    _Bool _bSpecificChat;
    _Bool _bStartPacking;
    id <WXGChatSyncDataPackerDelegate> _delegate;
    unsigned long long _totalPackSessionCount;
    unsigned long long _totalPackMsgCount;
    NSArray *_needMediaArray;
    unsigned long long _sessionInfoCount;
    unsigned long long _sessionListCount;
    unsigned long long _msgCountLimit;
    NSArray *_msgIntervalArray;
    NSArray *_msgLimitArray;
    unsigned long long _timeLimit;
    unsigned long long _startTime;
    unsigned long long _endTime;
    NSString *_specificChatName;
    NSMutableArray *_sessionInfoArray;
    NSMutableArray *_dataSessionInfoArray;
    WXGBackupDataMgr *_dataMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WXGBackupDataMgr *dataMgr; // @synthesize dataMgr=_dataMgr;
@property(nonatomic) _Bool bStartPacking; // @synthesize bStartPacking=_bStartPacking;
@property(retain, nonatomic) NSMutableArray *dataSessionInfoArray; // @synthesize dataSessionInfoArray=_dataSessionInfoArray;
@property(retain, nonatomic) NSMutableArray *sessionInfoArray; // @synthesize sessionInfoArray=_sessionInfoArray;
@property(copy, nonatomic) NSString *specificChatName; // @synthesize specificChatName=_specificChatName;
@property(nonatomic) _Bool bSpecificChat; // @synthesize bSpecificChat=_bSpecificChat;
@property(nonatomic) _Bool bGetExtenInfo; // @synthesize bGetExtenInfo=_bGetExtenInfo;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool bUseTimeInterval; // @synthesize bUseTimeInterval=_bUseTimeInterval;
@property(nonatomic) unsigned long long timeLimit; // @synthesize timeLimit=_timeLimit;
@property(retain, nonatomic) NSArray *msgLimitArray; // @synthesize msgLimitArray=_msgLimitArray;
@property(retain, nonatomic) NSArray *msgIntervalArray; // @synthesize msgIntervalArray=_msgIntervalArray;
@property(nonatomic) _Bool bUseMsgLimitArray; // @synthesize bUseMsgLimitArray=_bUseMsgLimitArray;
@property(nonatomic) unsigned long long msgCountLimit; // @synthesize msgCountLimit=_msgCountLimit;
@property(nonatomic) unsigned long long sessionListCount; // @synthesize sessionListCount=_sessionListCount;
@property(nonatomic) unsigned long long sessionInfoCount; // @synthesize sessionInfoCount=_sessionInfoCount;
@property(retain, nonatomic) NSArray *needMediaArray; // @synthesize needMediaArray=_needMediaArray;
@property(nonatomic) _Bool bNeedMedia; // @synthesize bNeedMedia=_bNeedMedia;
@property(nonatomic) unsigned long long totalPackMsgCount; // @synthesize totalPackMsgCount=_totalPackMsgCount;
@property(nonatomic) unsigned long long totalPackSessionCount; // @synthesize totalPackSessionCount=_totalPackSessionCount;
@property(nonatomic) __weak id <WXGChatSyncDataPackerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)p_writeMediaDataPush:(id)arg1 toPath:(id)arg2;
- (_Bool)p_writeMsgListDataPush:(id)arg1 toPath:(id)arg2;
- (void)p_writePackDataWithBackupOut:(id)arg1;
- (_Bool)isLocalizedContactThatCannotSync:(id)arg1;
- (_Bool)isContactDisableToSyncSessionAndData:(id)arg1;
- (void)loadSessionInfo;
- (unsigned int)getNewFriendUnreadCount;
- (void)stopPackData;
- (void)startPackData;
- (void)dealloc;
- (id)init;

@end

