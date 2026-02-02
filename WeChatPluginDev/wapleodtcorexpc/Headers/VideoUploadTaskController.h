//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, CompressVideoUploadTask, MMAsset, NSString, RawVideoUploadTask, ThumbImageUploader;
@protocol VideoUploadTaskControllerDelegate;

@interface VideoUploadTaskController : NSObject
{
    _Bool _bDisableHitCheck;
    _Bool _isSendingMsg;
    _Bool _bJustUploadDataWithoutMD5Hit;
    _Bool _isUseCgiUpload;
    _Bool _isRawDataUploadSucc;
    _Bool _isCompressDataUploadSucc;
    CMessageWrap *_msgWrap;
    id <VideoUploadTaskControllerDelegate> _delegate;
    MMAsset *_mmAsset;
    RawVideoUploadTask *_rawUploadTask;
    CompressVideoUploadTask *_uploadTask;
    ThumbImageUploader *_thumbImageUploader;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCompressDataUploadSucc; // @synthesize isCompressDataUploadSucc=_isCompressDataUploadSucc;
@property(nonatomic) _Bool isRawDataUploadSucc; // @synthesize isRawDataUploadSucc=_isRawDataUploadSucc;
@property(nonatomic) _Bool isUseCgiUpload; // @synthesize isUseCgiUpload=_isUseCgiUpload;
@property(retain, nonatomic) ThumbImageUploader *thumbImageUploader; // @synthesize thumbImageUploader=_thumbImageUploader;
@property(retain, nonatomic) CompressVideoUploadTask *uploadTask; // @synthesize uploadTask=_uploadTask;
@property(retain, nonatomic) RawVideoUploadTask *rawUploadTask; // @synthesize rawUploadTask=_rawUploadTask;
@property(retain, nonatomic) MMAsset *mmAsset; // @synthesize mmAsset=_mmAsset;
@property(nonatomic) __weak id <VideoUploadTaskControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bJustUploadDataWithoutMD5Hit; // @synthesize bJustUploadDataWithoutMD5Hit=_bJustUploadDataWithoutMD5Hit;
@property(nonatomic) _Bool isSendingMsg; // @synthesize isSendingMsg=_isSendingMsg;
@property(nonatomic) _Bool bDisableHitCheck; // @synthesize bDisableHitCheck=_bDisableHitCheck;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
- (void)onUploadProgressUpdate;
- (void)onUploadTaskFail:(id)arg1 errorType:(int)arg2;
- (void)onUploadTaskSuccess:(id)arg1;
- (_Bool)isAllDataUploadFinish;
- (void)onExportAssetSuccess:(id)arg1;
- (void)makeUploadFail:(int)arg1;
- (void)sendFinishMessageRequest;
- (id)genUploadVideoRequest;
- (void)caculateOriginSourceMD5WithUrl:(id)arg1;
- (void)asyncUploadAsset;
- (void)startDataUploadTask;
- (void)tryStartDataUploadTask;
- (void)onSendOccupyMessageSuccuss:(id)arg1;
- (void)onSendOccupyMsgFail:(int)arg1;
- (void)uploadThumbImage;
- (void)sendOccupyMessage:(id)arg1;
- (_Bool)isHitMD5;
- (void)stopTask;
- (int)tryStartOccupySendTask;
- (id)initWithMsgWrap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

