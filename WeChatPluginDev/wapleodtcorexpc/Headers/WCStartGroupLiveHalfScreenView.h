//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIView, WCFinderStarterLiveViewModel;

@interface WCStartGroupLiveHalfScreenView
{
    CDUnknownBlockType _confirmCallback;
    CDUnknownBlockType _cancelCallback;
    CDUnknownBlockType _closeCallback;
    UIView *_visibilitySettingLabel;
    MMUILabel *_titleLabel;
    MMUILabel *_detailLabel;
    WCFinderStarterLiveViewModel *_starterViewModel;
    unsigned long long _showType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long showType; // @synthesize showType=_showType;
@property(retain, nonatomic) WCFinderStarterLiveViewModel *starterViewModel; // @synthesize starterViewModel=_starterViewModel;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *visibilitySettingLabel; // @synthesize visibilitySettingLabel=_visibilitySettingLabel;
@property(copy, nonatomic) CDUnknownBlockType closeCallback; // @synthesize closeCallback=_closeCallback;
@property(copy, nonatomic) CDUnknownBlockType cancelCallback; // @synthesize cancelCallback=_cancelCallback;
@property(copy, nonatomic) CDUnknownBlockType confirmCallback; // @synthesize confirmCallback=_confirmCallback;
- (void)reportOnConfirm;
- (void)reportExposeOnDidLoad;
- (void)registerYReportSdk;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)onVisibilityLabelClicked;
- (void)onMMFinderLiveShareSettingViewControllerTapDoneWithShareSettingResult:(id)arg1;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)updateDetailLabel;
- (id)getLiveStarterSelectViewModel;
- (void)configdetailView;
- (void)viewDidLoad;
- (id)initWithStarterViewModel:(id)arg1 showType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIView *detailView; // @dynamic detailView;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

