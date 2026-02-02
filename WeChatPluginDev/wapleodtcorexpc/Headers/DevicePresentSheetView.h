//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, DevicePresentCollectionView, NSArray, NSMutableArray, NSString;

@interface DevicePresentSheetView
{
    _Bool _didAppendDeviceView;
    CMessageWrap *_messageWrap;
    NSArray *_lanDevices;
    NSMutableArray *_privateDevices;
    NSMutableArray *_publicDevices;
    DevicePresentCollectionView *_oldDeviceView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didAppendDeviceView; // @synthesize didAppendDeviceView=_didAppendDeviceView;
@property(retain, nonatomic) DevicePresentCollectionView *oldDeviceView; // @synthesize oldDeviceView=_oldDeviceView;
@property(retain, nonatomic) NSMutableArray *publicDevices; // @synthesize publicDevices=_publicDevices;
@property(retain, nonatomic) NSMutableArray *privateDevices; // @synthesize privateDevices=_privateDevices;
@property(retain, nonatomic) NSArray *lanDevices; // @synthesize lanDevices=_lanDevices;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
- (void)onWCLanDeviceFoundDeviceListUpdated:(id)arg1;
- (void)onSelectItem:(id)arg1;
- (id)foldedItemsFrom:(id)arg1 maxCount:(long long)arg2;
- (id)unfoldedItemsFrom:(id)arg1 maxCount:(long long)arg2;
- (id)filteredDevicesOf:(long long)arg1;
- (void)onNearbyCellClicked;
- (id)titleLabel:(id)arg1;
- (_Bool)hasAvailableDevice;
- (void)showNavitgateSection:(_Bool)arg1;
- (void)showSectionWithTitle:(id)arg1 type:(long long)arg2;
- (void)initView;
- (void)initData;
- (void)initConfigs;
- (void)dealloc;
- (id)initWithMessageWrap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

