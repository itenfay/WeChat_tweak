//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSDictionary, NSObject, NSString;
@protocol GameHaowanUploadTaskDelegate;

@interface GameHaowanUploadTask
{
    NSArray *_fileList;
    _Bool _isStarted;
    unsigned long long _currentRetryCount;
    NSObject *_continueData;
    id <GameHaowanUploadTaskDelegate> _delegate;
    NSDictionary *_trackEventProps;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *trackEventProps; // @synthesize trackEventProps=_trackEventProps;
@property(nonatomic) __weak id <GameHaowanUploadTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject *continueData; // @synthesize continueData=_continueData;
- (id)reportObjWithAction:(long long)arg1;
- (void)trackEventUploadAction:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)generateFileKey:(id)arg1;
- (double)nextRetryDelay;
- (void)onStop;
- (void)onStart;
- (void)handleUploadProgress:(float)arg1;
- (void)handleUploadSucceed:(id)arg1;
- (void)handleUploadFailed:(int)arg1 message:(id)arg2 canRetry:(_Bool)arg3;
- (void)scheduleRetry;
- (void)retryUpload;
- (void)startUpload;
- (void)stop;
- (void)start;
- (id)initWithFileList:(id)arg1;
@property(readonly, nonatomic) NSArray *fileList;
@property(retain, nonatomic) NSString *postId;

@end

