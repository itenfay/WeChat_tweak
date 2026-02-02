//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, MMUILabel, NSString, ScanLicenceBankCardEditView, UIImage, UIImageView;
@protocol ScanLicenceBankCardNumberConfirmViewControllerDelegate;

@interface ScanLicenceBankCardNumberConfirmViewController
{
    MMTableViewInfo *m_tableViewInfo;
    _Bool _didRenderViews;
    id <ScanLicenceBankCardNumberConfirmViewControllerDelegate> _m_delegate;
    NSString *_cardNumStr;
    UIImage *_cardImage;
    ScanLicenceBankCardEditView *_editBankNumView;
    UIImageView *_cardImageView;
    MMUILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *cardImageView; // @synthesize cardImageView=_cardImageView;
@property(retain, nonatomic) ScanLicenceBankCardEditView *editBankNumView; // @synthesize editBankNumView=_editBankNumView;
@property(retain, nonatomic) UIImage *cardImage; // @synthesize cardImage=_cardImage;
@property(copy, nonatomic) NSString *cardNumStr; // @synthesize cardNumStr=_cardNumStr;
@property(nonatomic) __weak id <ScanLicenceBankCardNumberConfirmViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)confirmAction:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (id)getContainerView;
- (void)setupViewsIfNeed;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onCancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

