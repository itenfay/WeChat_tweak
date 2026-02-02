//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, CdnFavMediaInfo, CdnRecordMediaInfo, CdnUploadTaskInfo, FavoritesItemDataField, MsgDataDownloadLogic, NSString;
@protocol RecordUploadTaskDelegate;

@interface RecordUploadTask : NSObject
{
    _Bool m_hasDownload;
    _Bool m_enableHitCheck;
    _Bool m_isThumb;
    _Bool m_fromFav;
    _Bool m_isOpenVideoThumbUpload;
    FavoritesItemDataField *m_recordData;
    CMessageWrap *m_recordMsg;
    CdnFavMediaInfo *m_downloadFavMediaInfo;
    CMessageWrap *m_sourceMsg;
    CdnRecordMediaInfo *m_downloadMediaInfo;
    MsgDataDownloadLogic *m_downloadLogic;
    int m_retryCount;
    _Bool _isMiddleData;
    _Bool _isLocalResource;
    _Bool _hasTryFormatConvert;
    CdnRecordMediaInfo *_cdnInfo;
    CdnUploadTaskInfo *_uploadResult;
    id <RecordUploadTaskDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasTryFormatConvert; // @synthesize hasTryFormatConvert=_hasTryFormatConvert;
@property(nonatomic) __weak id <RecordUploadTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isLocalResource; // @synthesize isLocalResource=_isLocalResource;
@property(nonatomic) _Bool isMiddleData; // @synthesize isMiddleData=_isMiddleData;
@property(retain, nonatomic) CdnUploadTaskInfo *uploadResult; // @synthesize uploadResult=_uploadResult;
@property(retain, nonatomic) CdnRecordMediaInfo *cdnInfo; // @synthesize cdnInfo=_cdnInfo;
@property(nonatomic) _Bool isThumb; // @synthesize isThumb=m_isThumb;
@property(retain, nonatomic) FavoritesItemDataField *recordData; // @synthesize recordData=m_recordData;
- (void)convertVideoToH264;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)checkMd5:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)handleRecordDownLoadSuess;
- (void)handleRecordThumbDownLoadSuess;
- (id)getFilePath:(id)arg1 data:(id)arg2;
- (id)getTempFilePath:(id)arg1 data:(id)arg2;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)realDownload;
- (void)startDownload;
- (void)reportHitCacheInfo:(_Bool)arg1;
- (int)getHitCacheMediaType;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (_Bool)retryUpload;
- (void)internalStartUpload;
- (void)stopUpload;
- (void)startUpload;
- (id)initMsgFileWithRecordMsg:(id)arg1 recordData:(id)arg2;
- (id)initWithMsg:(id)arg1 recordData:(id)arg2 isThumb:(_Bool)arg3 isMiddleImage:(_Bool)arg4 fromFav:(_Bool)arg5;
- (id)initWithMsg:(id)arg1 recordData:(id)arg2 isThumb:(_Bool)arg3 fromFav:(_Bool)arg4;
- (id)initWithMsg:(id)arg1 recordData:(id)arg2 isThumb:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

