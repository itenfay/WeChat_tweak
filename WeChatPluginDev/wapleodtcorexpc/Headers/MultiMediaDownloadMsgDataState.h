//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, MsgDataDownloadLogic, NSString;

@interface MultiMediaDownloadMsgDataState
{
    _Bool _haveCheckedCdn;
    NSString *_downloadKey;
    NSString *_downloadMiddleKey;
    CMessageWrap *_sourceMsgWrap;
    MsgDataDownloadLogic *_downloadLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MsgDataDownloadLogic *downloadLogic; // @synthesize downloadLogic=_downloadLogic;
@property(retain, nonatomic) CMessageWrap *sourceMsgWrap; // @synthesize sourceMsgWrap=_sourceMsgWrap;
@property(retain, nonatomic) NSString *downloadMiddleKey; // @synthesize downloadMiddleKey=_downloadMiddleKey;
@property(retain, nonatomic) NSString *downloadKey; // @synthesize downloadKey=_downloadKey;
@property(nonatomic) _Bool haveCheckedCdn; // @synthesize haveCheckedCdn=_haveCheckedCdn;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)confirmSourcePath;
- (void)startDownloadThumbData;
- (void)startDownloadMiddleData;
- (struct C2CDownloadRequest)getMiddleDataDownloadRequest;
- (struct C2CDownloadRequest)getThumbDataDownloadRequest;
- (void)startDownloadMediaData;
- (struct C2CDownloadRequest)getDownloadRequest:(_Bool)arg1;
- (void)startDownloadMsgData;
- (void)downloadMiddleData;
- (void)downloadThumbData;
- (void)downloadData;
- (void)transformToDownloadFailState:(int)arg1;
- (void)transformToNextState;
- (_Bool)checkIfCanTryHitUploadThumbData;
- (_Bool)checkIfCanTryHitUploadMiddleData;
- (_Bool)checkIfCanTryHitUpload;
- (void)checkDownloadState;
- (id)getStateName;
- (void)stop;
- (void)start;
- (_Bool)isAllDataDownload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

