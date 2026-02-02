//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSMutableArray, NSString, UploadStateProcessor;
@protocol MultiMediaUploadProcessControllerDelegate;

@interface MultiMediaUploadProcessController
{
    _Bool _bJustUploadDataWithoutMD5Hit;
    _Bool _isStopped;
    NSString *_identifier;
    CMessageWrap *_msgWrap;
    id <MultiMediaUploadProcessControllerDelegate> _delegate;
    UploadStateProcessor *_state;
    NSMutableArray *_uploadTaskList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *uploadTaskList; // @synthesize uploadTaskList=_uploadTaskList;
@property(retain, nonatomic) UploadStateProcessor *state; // @synthesize state=_state;
@property(nonatomic) _Bool isStopped; // @synthesize isStopped=_isStopped;
@property(nonatomic) __weak id <MultiMediaUploadProcessControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bJustUploadDataWithoutMD5Hit; // @synthesize bJustUploadDataWithoutMD5Hit=_bJustUploadDataWithoutMD5Hit;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)onMediaDataUploadSuccess:(id)arg1;
- (void)updateUploadProgressWithTotal:(unsigned long long)arg1 remain:(unsigned long long)arg2;
- (void)updateMediaWrapWithBitset:(int)arg1;
- (void)onHistoryRecordDataUploadFinishWithCdnInfo:(id)arg1 errorMsg:(id)arg2;
- (void)onStateProcessFinished:(_Bool)arg1;
- (void)changeToState:(id)arg1;
- (void)updateUploadTaskList:(id)arg1;
- (id)getUploadTaskList;
- (id)getDataList;
- (id)getMediaWrap;
- (void)stopTask;
- (void)startTask;
- (id)initWithMsgWrap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

