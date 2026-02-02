//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString, UIButton, WCAdConventionalKefuDetailView;

@interface WCAdConventionalKefuViewController
{
    CContact *_contact;
    WCAdConventionalKefuDetailView *_detailView;
    UIButton *_confirmButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) WCAdConventionalKefuDetailView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void)onGetOpenImResourceDone:(id)arg1;
- (void)doConfirmButtonClickReport;
- (void)handleOpenCustomerServiceWithResult:(unsigned long long)arg1;
- (void)onConfirmButtonClick;
- (id)confirmInfo;
- (void)layoutUIContents;
- (void)setupUIContents;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDataItem:(id)arg1 clickActionInfo:(id)arg2 scene:(unsigned long long)arg3 contact:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

