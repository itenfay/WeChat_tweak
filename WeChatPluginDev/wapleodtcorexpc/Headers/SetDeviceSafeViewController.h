//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, NSString, RichTextView, SafeDeviceData, UIView;

@interface SetDeviceSafeViewController
{
    MMTableViewInfo *m_tableViewInfo;
    SafeDeviceData *_currentDevice;
    UIView *_footerContainerView;
    RichTextView *_linkView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *linkView; // @synthesize linkView=_linkView;
@property(retain, nonatomic) UIView *footerContainerView; // @synthesize footerContainerView=_footerContainerView;
@property(retain, nonatomic) SafeDeviceData *currentDevice; // @synthesize currentDevice=_currentDevice;
- (unsigned long long)logid;
- (void)registerYReportSdk;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnDelDevice:(id)arg1 Event:(unsigned int)arg2;
- (void)OnClickRightTopBtn;
- (void)delCurrentDevice;
- (void)commitEditingForRowAtIndexPath:(id)arg1 Cell:(id)arg2;
- (void)actionCell:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)willAppear;
- (void)updatView;
- (void)updateSetView;
- (void)updateTopRightButtion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

