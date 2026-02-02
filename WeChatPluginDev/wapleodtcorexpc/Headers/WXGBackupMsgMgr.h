//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BakChatMsgList, NSCondition, NSLock, NSMutableArray, WXGBackupMMDB, WXGBackupMessageWrapHandler, WXGBackupMsgMgrConfig;
@protocol OS_dispatch_queue;

@interface WXGBackupMsgMgr : NSObject
{
    _Bool _bSupportFilterFile;
    _Bool _bProducing;
    WXGBackupMsgMgrConfig *_msgMgrConfig;
    NSObject<OS_dispatch_queue> *_getMsgQueue;
    NSMutableArray *_inputData;
    NSLock *_inputDataLock;
    WXGBackupMMDB *_backupDB;
    NSCondition *_bufferCondition;
    NSMutableArray *_bufferArray;
    NSMutableArray *_producerArray;
    NSMutableArray *_consumerArray;
    unsigned long long _consumerWait;
    unsigned long long _producerWait;
    WXGBackupMessageWrapHandler *_msgWrapHandler;
    BakChatMsgList *_currentMsgList;
    NSMutableArray *_currentMsgWrapList;
    unsigned long long _currentMediaDataSize;
    NSMutableArray *_currentMediaArray;
    NSMutableArray *_currentBigMediaArray;
    long long _producerSize;
    long long _bufferSize;
    long long _consumerSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long consumerSize; // @synthesize consumerSize=_consumerSize;
@property(nonatomic) long long bufferSize; // @synthesize bufferSize=_bufferSize;
@property(nonatomic) long long producerSize; // @synthesize producerSize=_producerSize;
@property(retain, nonatomic) NSMutableArray *currentBigMediaArray; // @synthesize currentBigMediaArray=_currentBigMediaArray;
@property(retain, nonatomic) NSMutableArray *currentMediaArray; // @synthesize currentMediaArray=_currentMediaArray;
@property(nonatomic) unsigned long long currentMediaDataSize; // @synthesize currentMediaDataSize=_currentMediaDataSize;
@property(retain, nonatomic) NSMutableArray *currentMsgWrapList; // @synthesize currentMsgWrapList=_currentMsgWrapList;
@property(retain, nonatomic) BakChatMsgList *currentMsgList; // @synthesize currentMsgList=_currentMsgList;
@property(retain, nonatomic) WXGBackupMessageWrapHandler *msgWrapHandler; // @synthesize msgWrapHandler=_msgWrapHandler;
@property(nonatomic) unsigned long long producerWait; // @synthesize producerWait=_producerWait;
@property(nonatomic) unsigned long long consumerWait; // @synthesize consumerWait=_consumerWait;
@property(retain, nonatomic) NSMutableArray *consumerArray; // @synthesize consumerArray=_consumerArray;
@property(retain, nonatomic) NSMutableArray *producerArray; // @synthesize producerArray=_producerArray;
@property(retain, nonatomic) NSMutableArray *bufferArray; // @synthesize bufferArray=_bufferArray;
@property(retain, nonatomic) NSCondition *bufferCondition; // @synthesize bufferCondition=_bufferCondition;
@property(retain, nonatomic) WXGBackupMMDB *backupDB; // @synthesize backupDB=_backupDB;
@property(retain, nonatomic) NSLock *inputDataLock; // @synthesize inputDataLock=_inputDataLock;
@property(retain, nonatomic) NSMutableArray *inputData; // @synthesize inputData=_inputData;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *getMsgQueue; // @synthesize getMsgQueue=_getMsgQueue;
@property(nonatomic) _Bool bProducing; // @synthesize bProducing=_bProducing;
@property(retain, nonatomic) WXGBackupMsgMgrConfig *msgMgrConfig; // @synthesize msgMgrConfig=_msgMgrConfig;
@property(nonatomic) _Bool bSupportFilterFile; // @synthesize bSupportFilterFile=_bSupportFilterFile;
- (_Bool)p_isBakChatMessage:(id)arg1;
- (_Bool)p_isBakChatMessage:(id)arg1 limitMsgType:(id)arg2;
- (_Bool)isBakChatMessage:(id)arg1 limitMsgType:(id)arg2 filterForChatSync:(_Bool)arg3;
- (id)p_getDataFromCosumer;
- (void)p_bufferAddDataToConsume;
- (void)p_producerAddDataToBuffer;
- (void)p_purgeMsgListDataInfoWithChatName:(id)arg1 withStartTime:(long long)arg2 withEndTime:(long long)arg3;
- (void)getMsgForBackupDataInfo:(id)arg1;
- (id)p_getOneBackupDataInfoAndDelete;
- (void)p_addInputDataWithBackupInfoArray:(id)arg1;
- (void)stopProduce;
- (void)startProduce;
- (id)getNextOutput;
- (void)inputWithBackupDataInfo:(id)arg1;
- (id)init;

@end

