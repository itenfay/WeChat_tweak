//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCDataUploaderResult, WCUploadTask;
@protocol WCDataUploaderDelegate;

@interface WCDataUploader
{
    long long currentPos;
    WCDataUploaderResult *uploadResult;
    WCUploadTask *m_task;
    id <WCDataUploaderDelegate> m_delegate;
    CDUnknownBlockType _cancelResultBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cancelResultBlock; // @synthesize cancelResultBlock=_cancelResultBlock;
@property(nonatomic) __weak id <WCDataUploaderDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) WCUploadTask *m_task; // @synthesize m_task;
- (void)onCalculateVideoMd5:(id)arg1 finishedWithResult:(id)arg2;
- (void)_run;
- (void)run;
- (_Bool)isSightUploadTask;
- (void)_onResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)onResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)onRequest:(id)arg1 Event:(unsigned int)arg2;
- (void)cancelWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)canInterrupt;
- (void)setFinished;
- (_Bool)onSetRequest:(id)arg1;
- (id)xmlForUploadTask:(id)arg1;
- (void)dealloc;

@end

