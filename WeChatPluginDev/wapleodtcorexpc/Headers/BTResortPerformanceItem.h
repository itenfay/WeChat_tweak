//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BTResortPerformanceItem : NSObject
{
    unsigned int _msgListCount;
    unsigned int _msgCheckCount;
    unsigned int _digestUpdateCount;
    unsigned int _msgUpdateCount;
    unsigned long long _start;
    unsigned long long _end;
    unsigned long long _getMsgListStart;
    unsigned long long _getMsgListEnd;
    unsigned long long _sendCgiEnd;
    unsigned long long _receiveCgiResp;
    unsigned long long _updateConfigEnd;
    unsigned long long _recycleRecCardStart;
    unsigned long long _recycleRecCardEnd;
    unsigned long long _resortMsgStart;
    unsigned long long _resortMsgEnd;
    unsigned long long _msgCheckStart;
    unsigned long long _msgCheckEnd;
    unsigned long long _digestUpdateStart;
    unsigned long long _digestUpdateEnd;
    unsigned long long _dataBaseUpdateStart;
    unsigned long long _dataBaseUpdateEnd;
    unsigned long long _recCardInsertStart;
    unsigned long long _recCardInsertEnd;
    unsigned long long _adPosAdjustStart;
    unsigned long long _adPosAdjustEnd;
}

@property(nonatomic) unsigned long long adPosAdjustEnd; // @synthesize adPosAdjustEnd=_adPosAdjustEnd;
@property(nonatomic) unsigned long long adPosAdjustStart; // @synthesize adPosAdjustStart=_adPosAdjustStart;
@property(nonatomic) unsigned long long recCardInsertEnd; // @synthesize recCardInsertEnd=_recCardInsertEnd;
@property(nonatomic) unsigned long long recCardInsertStart; // @synthesize recCardInsertStart=_recCardInsertStart;
@property(nonatomic) unsigned int msgUpdateCount; // @synthesize msgUpdateCount=_msgUpdateCount;
@property(nonatomic) unsigned long long dataBaseUpdateEnd; // @synthesize dataBaseUpdateEnd=_dataBaseUpdateEnd;
@property(nonatomic) unsigned long long dataBaseUpdateStart; // @synthesize dataBaseUpdateStart=_dataBaseUpdateStart;
@property(nonatomic) unsigned int digestUpdateCount; // @synthesize digestUpdateCount=_digestUpdateCount;
@property(nonatomic) unsigned long long digestUpdateEnd; // @synthesize digestUpdateEnd=_digestUpdateEnd;
@property(nonatomic) unsigned long long digestUpdateStart; // @synthesize digestUpdateStart=_digestUpdateStart;
@property(nonatomic) unsigned int msgCheckCount; // @synthesize msgCheckCount=_msgCheckCount;
@property(nonatomic) unsigned long long msgCheckEnd; // @synthesize msgCheckEnd=_msgCheckEnd;
@property(nonatomic) unsigned long long msgCheckStart; // @synthesize msgCheckStart=_msgCheckStart;
@property(nonatomic) unsigned long long resortMsgEnd; // @synthesize resortMsgEnd=_resortMsgEnd;
@property(nonatomic) unsigned long long resortMsgStart; // @synthesize resortMsgStart=_resortMsgStart;
@property(nonatomic) unsigned long long recycleRecCardEnd; // @synthesize recycleRecCardEnd=_recycleRecCardEnd;
@property(nonatomic) unsigned long long recycleRecCardStart; // @synthesize recycleRecCardStart=_recycleRecCardStart;
@property(nonatomic) unsigned long long updateConfigEnd; // @synthesize updateConfigEnd=_updateConfigEnd;
@property(nonatomic) unsigned long long receiveCgiResp; // @synthesize receiveCgiResp=_receiveCgiResp;
@property(nonatomic) unsigned long long sendCgiEnd; // @synthesize sendCgiEnd=_sendCgiEnd;
@property(nonatomic) unsigned int msgListCount; // @synthesize msgListCount=_msgListCount;
@property(nonatomic) unsigned long long getMsgListEnd; // @synthesize getMsgListEnd=_getMsgListEnd;
@property(nonatomic) unsigned long long getMsgListStart; // @synthesize getMsgListStart=_getMsgListStart;
@property(nonatomic) unsigned long long end; // @synthesize end=_end;
@property(nonatomic) unsigned long long start; // @synthesize start=_start;
- (void)printLog;

@end

