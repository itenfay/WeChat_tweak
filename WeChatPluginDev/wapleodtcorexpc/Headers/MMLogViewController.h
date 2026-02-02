//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPickerView, MMProgressView, MMTableViewInfo, NSMutableArray, NSString, UILabel;
@protocol MMLogViewControllerDelegate;

@interface MMLogViewController
{
    MMProgressView *m_progressView;
    UILabel *m_labelProgress;
    UILabel *m_sizeProgressLabel;
    MMTableViewInfo *m_tableViewInfo;
    long long m_curDateIndex;
    int m_curBeginHourIndex;
    int m_curEndHourIndex;
    unsigned long long m_uploadStatus;
    unsigned long long m_lastTotalUploadSize;
    _Bool _bUseAirDrop;
    _Bool _bDirectFinishWhenUploadSuc;
    _Bool _bForceUseNonLogin;
    _Bool _showSpeedInfo;
    _Bool _isFromCustomer;
    int _uploadThreadCount;
    int _uploadBlockSize;
    id <MMLogViewControllerDelegate> _delegate;
    NSString *_countryCode;
    NSString *_phoneNumber;
    NSString *_dateStr;
    MMPickerView *_pickView;
    NSMutableArray *_dateList;
    MMPickerView *_beginHourPickView;
    NSMutableArray *_beginHourList;
    MMPickerView *_endHourPickView;
    NSMutableArray *_endHourList;
    unsigned long long _lastUpdateProgressTime;
    unsigned long long _lastUpdateProgressUploadSize;
    NSString *_lastSpeedInfoText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastSpeedInfoText; // @synthesize lastSpeedInfoText=_lastSpeedInfoText;
@property(nonatomic) unsigned long long lastUpdateProgressUploadSize; // @synthesize lastUpdateProgressUploadSize=_lastUpdateProgressUploadSize;
@property(nonatomic) unsigned long long lastUpdateProgressTime; // @synthesize lastUpdateProgressTime=_lastUpdateProgressTime;
@property(nonatomic) _Bool isFromCustomer; // @synthesize isFromCustomer=_isFromCustomer;
@property(retain, nonatomic) NSMutableArray *endHourList; // @synthesize endHourList=_endHourList;
@property(retain, nonatomic) MMPickerView *endHourPickView; // @synthesize endHourPickView=_endHourPickView;
@property(retain, nonatomic) NSMutableArray *beginHourList; // @synthesize beginHourList=_beginHourList;
@property(retain, nonatomic) MMPickerView *beginHourPickView; // @synthesize beginHourPickView=_beginHourPickView;
@property(retain, nonatomic) NSMutableArray *dateList; // @synthesize dateList=_dateList;
@property(retain, nonatomic) MMPickerView *pickView; // @synthesize pickView=_pickView;
@property(copy, nonatomic) NSString *dateStr; // @synthesize dateStr=_dateStr;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) _Bool showSpeedInfo; // @synthesize showSpeedInfo=_showSpeedInfo;
@property(nonatomic) int uploadBlockSize; // @synthesize uploadBlockSize=_uploadBlockSize;
@property(nonatomic) int uploadThreadCount; // @synthesize uploadThreadCount=_uploadThreadCount;
@property(nonatomic) _Bool bForceUseNonLogin; // @synthesize bForceUseNonLogin=_bForceUseNonLogin;
@property(nonatomic) _Bool bDirectFinishWhenUploadSuc; // @synthesize bDirectFinishWhenUploadSuc=_bDirectFinishWhenUploadSuc;
@property(nonatomic) _Bool bUseAirDrop; // @synthesize bUseAirDrop=_bUseAirDrop;
@property(nonatomic) __weak id <MMLogViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)uploadWatchLog;
- (void)uploadExtensionLog;
- (void)uploadDump;
- (void)onShowSpeedySetting;
- (void)UploadSuccess;
- (void)UploadFail;
- (void)updateProgressLabelWithUploadSize:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
- (void)OnResponse:(id)arg1;
- (void)onQuitWithTotalSize:(unsigned long long)arg1;
- (void)onBack;
- (void)onFinish;
- (void)onReportLog;
- (void)onAirDropLog;
- (void)setUploadSuc;
- (void)setUploadFail;
- (void)setProgress:(id)arg1;
- (void)onEndHourPicker:(id)arg1;
- (void)onBeginHourPicker:(id)arg1;
- (void)onDatePicker:(id)arg1;
- (void)MMPickerViewDidCancel;
- (void)MMPickerView:(id)arg1 didChooseRow:(long long)arg2 atSession:(long long)arg3;
- (void)onSwitchValueChange:(id)arg1;
- (id)getFooterView;
- (void)reloadTableViewData;
- (id)getHeaderView;
- (void)initView;
- (void)onShowLog;
- (void)initHours;
- (void)initDates;
- (void)initLists;
- (_Bool)setUploadDateOfDay:(id)arg1;
- (void)configUploadSpeedSetting;
- (id)initWithDateString:(id)arg1;
- (id)init;
- (void)dealloc;
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

