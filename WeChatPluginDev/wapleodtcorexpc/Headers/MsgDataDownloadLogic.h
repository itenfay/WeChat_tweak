//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSString;
@protocol MsgDataDownloadDelegate;

@interface MsgDataDownloadLogic : NSObject
{
    CMessageWrap *m_msgWrap;
    _Bool m_downloadRawVideo;
    id <MsgDataDownloadDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MsgDataDownloadDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnDownloadRecordMessagePart:(id)arg1 DataId:(id)arg2 PartLen:(unsigned int)arg3 TotalLen:(unsigned int)arg4;
- (void)OnRecordMessageDownloadOK:(id)arg1;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2 failRetCode:(int)arg3;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadImageStop:(id)arg1;
- (void)OnDownloadImageStopByChatName:(id)arg1 FromDelMsg:(_Bool)arg2;
- (void)OnDownloadImagePartNew:(id)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3 TryShow:(_Bool)arg4;
- (void)OnDownloadImagePart:(id)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnDownloadImageFail:(id)arg1;
- (void)OnDownloadImageExpired:(id)arg1;
- (void)OnMsgDownloadVideoCancel:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUpdateVideoStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachCancel:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadPart:(id)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3;
- (void)onDownloadSuccess:(id)arg1;
- (void)stopDownload;
- (_Bool)startDownloadMsgVideo:(id)arg1 HD:(_Bool)arg2;
- (_Bool)startDownloadMsgImg:(id)arg1 HD:(_Bool)arg2;
- (_Bool)startDownloadMsg:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

