//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, UIView;

@interface PersonalInformationDeviceViewController
{
    UIView *_contentHeaderView;
    MMTableViewInfo *_tableViewInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(retain, nonatomic) UIView *contentHeaderView; // @synthesize contentHeaderView=_contentHeaderView;
- (id)genDeviceInfoDateTimeStringByUInt:(unsigned int)arg1 retDayLength:(unsigned long long *)arg2;
- (void)makeNoContentCell:(id)arg1;
- (double)getCellHeightForDevice:(id)arg1;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)reloadData;
- (void)initHeaderView;
- (void)initTableView;
- (void)initView;
- (void)viewDidLoad;
- (id)init;

@end

