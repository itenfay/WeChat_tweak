//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIScrollView, WXGRoamBackupPackageDetailCell;

@interface WXGRoamBackupPackageManagerViewController
{
    _Bool _isDeleted;
    WXGRoamBackupPackageDetailCell *_sizeCell;
    WXGRoamBackupPackageDetailCell *_rangeCell;
    WXGRoamBackupPackageDetailCell *_nameCell;
    WXGRoamBackupPackageDetailCell *_recordCell;
    WXGRoamBackupPackageDetailCell *_deviceCell;
    UIScrollView *_sheetView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScrollView *sheetView; // @synthesize sheetView=_sheetView;
@property(retain, nonatomic) WXGRoamBackupPackageDetailCell *deviceCell; // @synthesize deviceCell=_deviceCell;
@property(retain, nonatomic) WXGRoamBackupPackageDetailCell *recordCell; // @synthesize recordCell=_recordCell;
@property(retain, nonatomic) WXGRoamBackupPackageDetailCell *nameCell; // @synthesize nameCell=_nameCell;
@property(retain, nonatomic) WXGRoamBackupPackageDetailCell *rangeCell; // @synthesize rangeCell=_rangeCell;
@property(retain, nonatomic) WXGRoamBackupPackageDetailCell *sizeCell; // @synthesize sizeCell=_sizeCell;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
- (void)onILinkDeviceUpdate:(id)arg1;
- (void)onRoamBackupPackageServiceTaskProgressEvent:(unsigned long long)arg1 current:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onRoamBackupPackageServiceFinishUpdatePackages:(int)arg1;
- (void)onRoamBackupPackageServiceDeleteBackupRet:(int)arg1;
- (void)onRoamBackupPackageServiceStartUpdatePackages;
- (void)onRoamBackupPackageServiceFinishDeletePackages:(int)arg1;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)arg1 notifyCode:(unsigned long long)arg2;
- (void)updateDeviceView;
- (void)updateSize;
- (void)updateView;
- (_Bool)isNeedToShowToast:(_Bool)arg1;
- (void)setupViews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

