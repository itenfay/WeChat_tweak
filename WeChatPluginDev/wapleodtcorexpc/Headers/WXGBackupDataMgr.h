//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSCondition, NSData, NSLock, NSMutableArray, PacketFilterResponse, WXGBackupDataMgrConfig, WXGBackupMgrAnalyseInfo, WXGBackupMsgMgr;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, WXGBackupDataMgrDelegate;

@interface WXGBackupDataMgr : NSObject
{
    _Bool _bPurgeMediaInPath;
    _Bool _bSupportFilterFile;
    _Bool _bProducing;
    id <WXGBackupDataMgrDelegate> _delegate;
    unsigned long long _produceSessionCount;
    unsigned long long _produceMsgCount;
    WXGBackupMgrAnalyseInfo *_analyseInfo;
    WXGBackupDataMgrConfig *_dataMgrConfig;
    NSMutableArray *_backupInfoDataArray;
    NSLock *_backupInfoLock;
    WXGBackupMsgMgr *_msgMgr;
    NSCondition *_conditionBuffer;
    NSMutableArray *_producerArray;
    NSMutableArray *_consumeArray;
    NSMutableArray *_bufferArray;
    NSObject<OS_dispatch_queue> *_getDataQueue;
    unsigned long long _consumerWait;
    unsigned long long _producerWait;
    long long _producerSize;
    long long _bufferSize;
    long long _consumerSize;
    NSData *_encryptKey;
    NSObject<OS_dispatch_semaphore> *_waitFilterSemaphore;
    PacketFilterResponse *_filterResponse;
    double _waitFilterStartTime;
}

- (void).cxx_destruct;
@property(nonatomic) double waitFilterStartTime; // @synthesize waitFilterStartTime=_waitFilterStartTime;
@property(retain, nonatomic) PacketFilterResponse *filterResponse; // @synthesize filterResponse=_filterResponse;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *waitFilterSemaphore; // @synthesize waitFilterSemaphore=_waitFilterSemaphore;
@property(retain, nonatomic) NSData *encryptKey; // @synthesize encryptKey=_encryptKey;
@property(nonatomic) long long consumerSize; // @synthesize consumerSize=_consumerSize;
@property(nonatomic) long long bufferSize; // @synthesize bufferSize=_bufferSize;
@property(nonatomic) long long producerSize; // @synthesize producerSize=_producerSize;
@property(nonatomic) unsigned long long producerWait; // @synthesize producerWait=_producerWait;
@property(nonatomic) unsigned long long consumerWait; // @synthesize consumerWait=_consumerWait;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *getDataQueue; // @synthesize getDataQueue=_getDataQueue;
@property(retain, nonatomic) NSMutableArray *bufferArray; // @synthesize bufferArray=_bufferArray;
@property(retain, nonatomic) NSMutableArray *consumeArray; // @synthesize consumeArray=_consumeArray;
@property(retain, nonatomic) NSMutableArray *producerArray; // @synthesize producerArray=_producerArray;
@property(retain, nonatomic) NSCondition *conditionBuffer; // @synthesize conditionBuffer=_conditionBuffer;
@property(nonatomic) _Bool bProducing; // @synthesize bProducing=_bProducing;
@property(retain, nonatomic) WXGBackupMsgMgr *msgMgr; // @synthesize msgMgr=_msgMgr;
@property(retain, nonatomic) NSLock *backupInfoLock; // @synthesize backupInfoLock=_backupInfoLock;
@property(retain, nonatomic) NSMutableArray *backupInfoDataArray; // @synthesize backupInfoDataArray=_backupInfoDataArray;
@property(retain, nonatomic) WXGBackupDataMgrConfig *dataMgrConfig; // @synthesize dataMgrConfig=_dataMgrConfig;
@property(retain, nonatomic) WXGBackupMgrAnalyseInfo *analyseInfo; // @synthesize analyseInfo=_analyseInfo;
@property(nonatomic) unsigned long long produceMsgCount; // @synthesize produceMsgCount=_produceMsgCount;
@property(nonatomic) unsigned long long produceSessionCount; // @synthesize produceSessionCount=_produceSessionCount;
@property(nonatomic) _Bool bSupportFilterFile; // @synthesize bSupportFilterFile=_bSupportFilterFile;
@property(nonatomic) _Bool bPurgeMediaInPath; // @synthesize bPurgeMediaInPath=_bPurgeMediaInPath;
@property(nonatomic) __weak id <WXGBackupDataMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)p_addFilterMediaForChatName:(id)arg1 mediaSize:(unsigned long long)arg2 mediaType:(unsigned int)arg3;
- (void)p_addMediaType:(unsigned int)arg1 chatName:(id)arg2 mediaSize:(unsigned long long)arg3;
- (void)p_addMsgCount:(unsigned int)arg1 chatName:(id)arg2;
- (int)p_getSizeOfBakcupOutput:(id)arg1;
- (id)p_getDataFromConsumer;
- (void)p_bufferAddDataToConsumer;
- (void)p_producerAddDataToBuffer;
- (void)p_producerAddOutput:(id)arg1;
- (void)purgeTag:(id)arg1;
- (void)purgeMsgList:(id)arg1;
- (void)purgeMedia:(id)arg1 outputPath:(_Bool)arg2 filterMedia:(id)arg3;
- (void)filterFileWithResponse:(id)arg1;
- (void)stopProduce;
- (void)startProduce;
- (id)getNextOutput;
- (void)inputWithBackupDataInfo:(id)arg1;
- (id)initWithEncrytKey:(id)arg1;
- (id)init;
- (void)dealloc;

@end

