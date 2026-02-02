//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIProgressView;

@interface MMSMUploadFileViewController
{
    int m_percent;
    UIProgressView *m_progressView;
}

- (void).cxx_destruct;
- (void)onFinishButtonClicked:(id)arg1;
- (void)onUploadFilesFail;
- (void)onUploadFilesFinished;
- (void)onUploadFilesProgress:(double)arg1;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onUploadButtonClicked:(id)arg1;
- (void)onNextButtonClicked:(id)arg1;
- (void)updateProgress:(unsigned int)arg1;
- (void)setProgress:(unsigned int)arg1;
- (void)onPrepareButtonClicked:(id)arg1;
- (void)layoutViewsAfterUploading;
- (void)layoutViewsForUploading;
- (void)layoutViewsAfterPrepare:(long long)arg1;
- (void)layoutViewsForPreparing;
- (void)layoutViewsBeforePrepare;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

