//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPickerView, MMProgressView, MMUILabel, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIScrollView, UISwitch, UITextField, UIView;

@interface MMCheckDumpViewController
{
    UITextField *m_textFiled;
    unsigned long long m_nTimeInterval;
    NSMutableArray *m_arrDates;
    long long m_selectedRow;
    UIView *roundView;
    UILabel *m_tipLabel;
    UILabel *m_checklabel;
    UISwitch *m_checkSitchView;
    UIButton *m_btnDate;
    MMUILabel *m_rightLab;
    UIButton *m_btndump;
    UILabel *m_warningLabel;
    UIImageView *m_imgvRecover;
    MMPickerView *m_pickerView;
    UIButton *m_btnTestDBCorrupt;
    UIButton *m_btnTestFrameDrop;
    UIScrollView *m_mainScrollView;
    MMProgressView *m_progressView;
    UIButton *m_btnFinish;
    _Bool m_isUploading;
    _Bool m_isFinish;
    unsigned long long m_status;
}

- (void).cxx_destruct;
- (void)onDumpReporterUploadProgress:(double)arg1;
- (void)onDumpReporterUploadResult:(_Bool)arg1;
- (void)MMPickerViewDidChooseRow:(long long)arg1 atSession:(long long)arg2;
- (void)OnClickBackBarButton:(id)arg1;
- (void)onFinish;
- (void)onChoseDate:(id)arg1;
- (void)onUploadDump;
- (void)onSwitchValueChange:(id)arg1;
- (void)initData;
- (void)makeFinishBtn;
- (void)makeProgressView;
- (void)makeTipLabelWithText:(id)arg1;
- (void)makeIconView:(id)arg1;
- (void)makeScrollView;
- (void)makeUploadSuccessView;
- (void)makeFinishState;
- (void)makeUploadingView;
- (void)makeInitView;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

