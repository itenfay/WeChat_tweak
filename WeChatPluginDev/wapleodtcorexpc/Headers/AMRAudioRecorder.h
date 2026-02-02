//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSRecursiveLock;

@interface AMRAudioRecorder
{
    NSRecursiveLock *mPrepareSentLock;
    _Bool mIsPrepareSent;
}

- (void).cxx_destruct;
- (long long)getVoiceFormat;
- (void)stop;
- (void)cleanResource;
- (void)stopButNotNotify;
- (_Bool)prepareQueue;
- (_Bool)prepareRecordButNotNotify;
- (_Bool)prepareSend;
- (void)createFile:(id)arg1;
- (void)createAMRFile:(id)arg1;
- (_Bool)prepareRecord;
- (id)init;
- (void)prepareBuffers;
- (void)setDataFormat;

@end

