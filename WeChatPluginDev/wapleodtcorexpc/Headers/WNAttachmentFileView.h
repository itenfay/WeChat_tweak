//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, SightIconView, UIImageView;

@interface WNAttachmentFileView
{
    unsigned char _status;
    UIImageView *_uploadMaskView;
    SightIconView *_uploadingView;
    MMUILabel *_hintLabel;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned char status; // @synthesize status=_status;
@property(retain, nonatomic) MMUILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) SightIconView *uploadingView; // @synthesize uploadingView=_uploadingView;
@property(retain, nonatomic) UIImageView *uploadMaskView; // @synthesize uploadMaskView=_uploadMaskView;
- (void)OpenVideoFileByMsgRecordDataWrap:(id)arg1;
- (void)onProgressEnd;
- (void)onUploadGroupNoticeData:(id)arg1 success:(_Bool)arg2;
- (void)onUploadGroupNoticeData:(id)arg1 finishedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
- (void)onPreparingUploadGroupNoticeData:(id)arg1;
- (void)updateUploadUI:(unsigned char)arg1 forceUpdate:(_Bool)arg2;
- (void)updateUploadUI:(unsigned char)arg1;
- (void)initUploadMaskView;
- (void)initHintLabel;
- (void)initUploadingView;
- (void)initUploadUI;
- (void)onClickObject;
- (id)getImage;
- (id)getDescription;
- (id)getTitle;
- (void)layoutView;
- (id)initWithAttachment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

