//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLoadingView, NSString, UIButton;

@interface MMMSReportViewController
{
    UIButton *m_uploadButton;
    UIButton *m_nextButton;
    MMLoadingView *m_loadingViewX;
}

- (void).cxx_destruct;
- (void)onMemoryRecordUploadCompleted:(_Bool)arg1;
- (void)onNextButtonClicked:(id)arg1;
- (void)onUploadButtonClicked:(id)arg1;
- (void)stopLoading;
- (void)startLoadingBlockedWithText:(id)arg1;
- (void)startLoadingBlocked;
- (void)layoutNextButton:(int *)arg1;
- (void)layoutUploadButtonAndTips:(int *)arg1;
- (void)layoutViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

