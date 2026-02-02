//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMMDB, NSMutableArray;

@interface WXGBackupMMDB : NSObject
{
    _Bool _shouldChangeForDisplay;
    _Bool _bIsLastMsgList;
    _Bool _bStopGet;
    unsigned int _uiCurrentCursor;
    unsigned int _lastCreateTime;
    unsigned int _msgCount;
    unsigned int _oneQueryLimitCnt;
    unsigned int _lastLocalID;
    CMMDB *_oMMDB;
    NSMutableArray *_arrCurMsgWrapList;
}

+ (void)handleMessage:(id)arg1 ChatName:(id)arg2 Des:(unsigned int)arg3 ShouldChange:(_Bool)arg4;
+ (id)getLocalUsrName:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastLocalID; // @synthesize lastLocalID=_lastLocalID;
@property(nonatomic) unsigned int oneQueryLimitCnt; // @synthesize oneQueryLimitCnt=_oneQueryLimitCnt;
@property(nonatomic) _Bool bStopGet; // @synthesize bStopGet=_bStopGet;
@property(nonatomic) unsigned int msgCount; // @synthesize msgCount=_msgCount;
@property(nonatomic) unsigned int lastCreateTime; // @synthesize lastCreateTime=_lastCreateTime;
@property(nonatomic) _Bool bIsLastMsgList; // @synthesize bIsLastMsgList=_bIsLastMsgList;
@property(nonatomic) unsigned int uiCurrentCursor; // @synthesize uiCurrentCursor=_uiCurrentCursor;
@property(retain, nonatomic) NSMutableArray *arrCurMsgWrapList; // @synthesize arrCurMsgWrapList=_arrCurMsgWrapList;
@property(retain, nonatomic) CMMDB *oMMDB; // @synthesize oMMDB=_oMMDB;
@property(nonatomic) _Bool shouldChangeForDisplay; // @synthesize shouldChangeForDisplay=_shouldChangeForDisplay;
- (id)getMsgChatName:(id)arg1 fromCreateTime:(unsigned int)arg2 endAtTime:(unsigned int)arg3 lastLocalID:(unsigned int)arg4 limit:(int)arg5 timeAsend:(_Bool)arg6;
- (unsigned long long)getTotalMsgCountOf:(id)arg1 from:(unsigned int)arg2 toEndTime:(unsigned int)arg3;
- (id)getMsgUseBatchQuery:(id)arg1 fromRowID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 endAtTime:(unsigned int)arg4 timeAsend:(_Bool)arg5;
- (void)dealloc;
- (id)init;

@end

