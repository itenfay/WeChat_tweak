//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class HistoryMsgUploadMgr, NSString;
@protocol WWKMsgForwarderDelegate;

@interface WWKMsgForwarder : NSObject
{
    long long _appType;
    id <WWKMsgForwarderDelegate> _delegate;
    HistoryMsgUploadMgr *_uploadMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HistoryMsgUploadMgr *uploadMgr; // @synthesize uploadMgr=_uploadMgr;
@property(nonatomic) __weak id <WWKMsgForwarderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long appType; // @synthesize appType=_appType;
- (id)MsgWeAppAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgLocationAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgVideoAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgLinkAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgImageAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgFileAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgTextAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgTextAttachmentFromNotSupportRecordDataField:(id)arg1;
- (id)buildMsgAttchmentFromRecordDataField:(id)arg1;
- (id)buildMsgAttchmentFromRecordDataFieldAr:(id)arg1 andRecordTitle:(id)arg2;
- (id)getAppImgData:(id)arg1;
- (id)buildMsgLocationAttachmentFromMsgWrap:(id)arg1;
- (id)builddMsgOpenSDKWeAppAttachmentFromMsgWrap:(id)arg1;
- (id)builddMsgWeAppAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgVideoAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgLinkAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgImageAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgFileAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgAppTextAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgTextAttachmentFromMsgWrap:(id)arg1;
- (id)buildMusicAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgAttchmentFromMsgWrap:(id)arg1;
- (void)sendMultiMsg:(id)arg1 split:(_Bool)arg2;
- (void)sendSingleWeAppMsg:(id)arg1 withImg:(id)arg2;
- (void)sendSingleMsg:(id)arg1;
- (void)sendMsgListByBuffer:(id)arg1;
- (void)onUploadMsgMediaFinished:(id)arg1;
- (void)onUploadDataFail:(id)arg1;
- (void)uploadMsgListToCdn:(id)arg1;
- (_Bool)shouldSendByBuffer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

