//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, MailAttachment, UIButton, UILabel;
@protocol MailAttachmentsViewDelegate;

@interface MailAttachmentsView
{
    MMUIActivityIndicatorView *m_loadingView;
    UILabel *m_labelName;
    UILabel *m_labelPercent;
    UILabel *m_labelUploadFail;
    UIButton *m_btnResend;
    unsigned int m_uiPercent;
    id <MailAttachmentsViewDelegate> m_delegate;
    MailAttachment *m_mailAttachment;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MailAttachmentsViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnUploadData:(id)arg1 filename:(id)arg2 errorCode:(int)arg3 errMsg:(id)arg4;
- (void)cancelUpload;
- (void)startUploadData;
- (id)initWithMailAttachment:(id)arg1 frame:(struct CGRect)arg2;
- (id)getDataName;
- (id)getDataID;
- (id)getData;
- (void)setData:(id)arg1;
- (void)setDataID:(id)arg1;
- (unsigned long long)attachmentSize;
- (void)adjustNameLabel;
- (void)initView;
- (void)OnResend:(id)arg1;
- (void)setUploadSuccessStatusForNewQQMail:(unsigned int)arg1;
- (void)updateUploadPercentForNewQQMail:(unsigned int)arg1;
- (void)setUploadingStatus;
- (void)updateUploadPercent:(unsigned int)arg1;
- (void)setUploadSuccessStatus;
- (void)setUploadFailStatus;
- (_Bool)isUploadSuccess;
- (void)initData;

@end

