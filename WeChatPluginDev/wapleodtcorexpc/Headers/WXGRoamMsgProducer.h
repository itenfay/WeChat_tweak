//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRecursiveLock, NSString, WXGBackupMMDB;

@interface WXGRoamMsgProducer : NSObject
{
    unsigned int _fromTimeSec;
    unsigned int _toTimeSec;
    NSString *_userName;
    unsigned long long _trueOffset;
    unsigned long long _lastRowID;
    unsigned long long _filterMsgCnt;
    WXGBackupMMDB *_backupMMDB;
    NSRecursiveLock *_handlerLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *handlerLock; // @synthesize handlerLock=_handlerLock;
@property(retain, nonatomic) WXGBackupMMDB *backupMMDB; // @synthesize backupMMDB=_backupMMDB;
@property(nonatomic) unsigned long long filterMsgCnt; // @synthesize filterMsgCnt=_filterMsgCnt;
@property(nonatomic) unsigned long long lastRowID; // @synthesize lastRowID=_lastRowID;
@property(nonatomic) unsigned long long trueOffset; // @synthesize trueOffset=_trueOffset;
@property(nonatomic) unsigned int toTimeSec; // @synthesize toTimeSec=_toTimeSec;
@property(nonatomic) unsigned int fromTimeSec; // @synthesize fromTimeSec=_fromTimeSec;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)getMsgOffset:(unsigned long long)arg1;
- (id)init;

@end

