//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSString, UITableView, WAMediaCastingRoutePickerDeviceItem, WAMediaCastingRoutePickerTableHeaderView, WAMediaCastingRoutePickerViewModel;
@protocol WAMediaCastingRoutePickerViewDelegate;

@interface WAMediaCastingRoutePickerView
{
    id <WAMediaCastingRoutePickerViewDelegate> _pickerViewDelegate;
    WAMediaCastingRoutePickerViewModel *_viewModel;
    WAMediaCastingRoutePickerDeviceItem *_selectedDevice;
    UITableView *_tableView;
    MMUILabel *_titleLabel;
    MMUIButton *_closeButton;
    MMUIButton *_guideButton;
    WAMediaCastingRoutePickerTableHeaderView *_recentlyHeader;
    WAMediaCastingRoutePickerTableHeaderView *_availableHeader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAMediaCastingRoutePickerTableHeaderView *availableHeader; // @synthesize availableHeader=_availableHeader;
@property(retain, nonatomic) WAMediaCastingRoutePickerTableHeaderView *recentlyHeader; // @synthesize recentlyHeader=_recentlyHeader;
@property(retain, nonatomic) MMUIButton *guideButton; // @synthesize guideButton=_guideButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WAMediaCastingRoutePickerDeviceItem *selectedDevice; // @synthesize selectedDevice=_selectedDevice;
@property(retain, nonatomic) WAMediaCastingRoutePickerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <WAMediaCastingRoutePickerViewDelegate> pickerViewDelegate; // @synthesize pickerViewDelegate=_pickerViewDelegate;
- (void)onClickGuideButton:(id)arg1;
- (void)onClickCloseButton:(id)arg1;
- (void)handleCurrentDeviceStatusChanged:(unsigned long long)arg1;
- (void)handleSearchingStatusChanged:(_Bool)arg1;
- (_Bool)curOrientationIsLandscape;
- (void)onMediaCastingRoutePickerViewModelCurrentDeviceStatusChanged:(id)arg1;
- (void)onMediaCastingRoutePickerViewModelSearchingStatusChanged:(id)arg1;
- (void)onMediaCastingRoutePickerViewModelDeviceListChanged:(id)arg1;
- (void)notifySelected:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGPoint)containerDismissAnimationEndPoint;
- (struct CGPoint)containerShowAnimationStartPoint;
- (struct CGPoint)containerPoint;
- (_Bool)cornerRaduis;
- (struct CGSize)contentViewSize;
- (void)layoutSubviews;
- (void)addSubviews:(id)arg1;
- (void)setupViewModel:(id)arg1;
- (void)loadAllSubviews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

