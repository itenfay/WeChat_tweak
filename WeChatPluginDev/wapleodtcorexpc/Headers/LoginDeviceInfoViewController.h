//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, SafeDeviceData, WCTableViewNormalCellManager;

@interface LoginDeviceInfoViewController
{
    SafeDeviceData *m_info;
    MMTableViewInfo *m_tableViewInfo;
    WCTableViewNormalCellManager *_editNameCellInfo;
    WCTableViewNormalCellManager *_delCellInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTableViewNormalCellManager *delCellInfo; // @synthesize delCellInfo=_delCellInfo;
@property(retain, nonatomic) WCTableViewNormalCellManager *editNameCellInfo; // @synthesize editNameCellInfo=_editNameCellInfo;
- (unsigned long long)logid;
- (void)registerYReportSdk;
- (id)reportInfoDict;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnDelDevice:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnUpdateDevice:(id)arg1 Event:(unsigned int)arg2;
- (void)setDeviceName:(id)arg1;
- (void)editName;
- (void)delCurrentDevice;
- (void)showQuitTip;
- (void)reloadTableData;
- (void)viewDidLoad;
- (id)initWithDeviceIno:(id)arg1;

@end

