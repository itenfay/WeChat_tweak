//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLoadingView, MMPickerView, NSArray, NSDateFormatter, NSString, UIButton, WCMemoryStatRecord;

@interface MMMSUploadViewController
{
    UIButton *m_selectButton;
    UIButton *m_uploadButton;
    MMLoadingView *m_loadingViewX;
    MMPickerView *m_pickView;
    WCMemoryStatRecord *m_selectedRecord;
    NSArray *m_recordList;
    NSDateFormatter *m_dateFormatter;
}

- (void).cxx_destruct;
- (void)onMemoryRecordUploadCompleted:(_Bool)arg1;
- (void)MMPickerViewDidChooseRow:(long long)arg1 atSession:(long long)arg2;
- (void)onUploadButtonClicked:(id)arg1;
- (void)onSelectButtonClicked:(id)arg1;
- (void)stopLoading;
- (void)startLoadingBlockedWithText:(id)arg1;
- (void)startLoadingBlocked;
- (void)layoutUploadButton:(int *)arg1;
- (void)updateSelectButtonTitle;
- (void)layoutSelectButtonAndTips:(int *)arg1;
- (void)layoutViews;
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

