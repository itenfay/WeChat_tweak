//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface YTBizPalmRegister : NSObject
{
    _Bool _alreadyNotifySuccess;
    int _errCode;
    CDUnknownBlockType _onBufferHandlingTipUpdate;
    CDUnknownBlockType _doLog;
    void *_ytHandle;
    NSObject<OS_dispatch_queue> *_processingQueue;
    long long _lastSaveLogTime;
}

+ (id)getSdkFullVersion:(id)arg1;
+ (unsigned long long)convertSideToWxHandType:(unsigned int)arg1;
+ (unsigned long long)convertYTToWxHandType:(int)arg1;
+ (id)getDefaultTipLocalizedStringKey:(unsigned long long)arg1;
+ (id)getTipLocalizedStringKey:(int)arg1 tipHandType:(unsigned long long)arg2 palmCaptureMode:(unsigned int)arg3;
+ (int)convertToYTHandType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool alreadyNotifySuccess; // @synthesize alreadyNotifySuccess=_alreadyNotifySuccess;
@property(nonatomic) long long lastSaveLogTime; // @synthesize lastSaveLogTime=_lastSaveLogTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(nonatomic) void *ytHandle; // @synthesize ytHandle=_ytHandle;
@property(copy, nonatomic) CDUnknownBlockType doLog; // @synthesize doLog=_doLog;
@property(copy, nonatomic) CDUnknownBlockType onBufferHandlingTipUpdate; // @synthesize onBufferHandlingTipUpdate=_onBufferHandlingTipUpdate;
@property(readonly, nonatomic) int errCode; // @synthesize errCode=_errCode;
- (id)UIImageFromCVMat:(struct Mat)arg1;
- (id)UIImageFromCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)getResultString;
- (void)handleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (struct Mat)matFromBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)setLimitHandType:(unsigned long long)arg1;
- (int)setSdkConfig:(id)arg1;
- (void)dealloc;
- (id)initWithBundlePath:(id)arg1;

@end

