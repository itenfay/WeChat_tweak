//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ElderModeViewController, MMUILabel, MultiSelectContactsViewController, NSString, QuickCallLogic, RichTextView, UIButton, UICollectionView, UICollectionViewFlowLayout, UIView;

@interface QuickCallViewController
{
    _Bool _enableJumpToElderMode;
    _Bool _hasShowEducation;
    long long _scene;
    QuickCallLogic *_logic;
    double _footerViewHeight;
    UIView *_headerView;
    MMUILabel *_titleLabel;
    MMUILabel *_emptyTipsLabel;
    MMUILabel *_descLabel;
    UIButton *_addContactButton;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionLayout;
    UIView *_footerView;
    RichTextView *_elderModeTipsView;
    MultiSelectContactsViewController *_selectContactVC;
    ElderModeViewController *_elderModeVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ElderModeViewController *elderModeVC; // @synthesize elderModeVC=_elderModeVC;
@property(retain, nonatomic) MultiSelectContactsViewController *selectContactVC; // @synthesize selectContactVC=_selectContactVC;
@property(retain, nonatomic) RichTextView *elderModeTipsView; // @synthesize elderModeTipsView=_elderModeTipsView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIButton *addContactButton; // @synthesize addContactButton=_addContactButton;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *emptyTipsLabel; // @synthesize emptyTipsLabel=_emptyTipsLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool hasShowEducation; // @synthesize hasShowEducation=_hasShowEducation;
@property(nonatomic) double footerViewHeight; // @synthesize footerViewHeight=_footerViewHeight;
@property(nonatomic) _Bool enableJumpToElderMode; // @synthesize enableJumpToElderMode=_enableJumpToElderMode;
@property(retain, nonatomic) QuickCallLogic *logic; // @synthesize logic=_logic;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (void)onEditButtonClick:(id)arg1;
- (void)onAddContactButtonClick:(id)arg1;
- (void)showMultiSelectContacts;
- (void)onQuickCallContactsUpdate;
- (void)onRemoveContactsDone:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)handleRedirectToQuickCallViewController;
- (void)onSetSpecialRenderModeOn:(_Bool)arg1 success:(_Bool)arg2;
- (void)onSetElderModeOn:(_Bool)arg1 success:(_Bool)arg2;
- (double)collectionContentHeight;
- (void)checkShowEducation;
- (void)updateContent;
- (void)viewDidLayoutSubviews;
- (void)initLayout;
- (void)initUI;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (_Bool)shouldInteractiveDismiss;
- (void)initQuickCallContent;
- (void)initElderModeContent;
- (void)viewDidAppear:(_Bool)arg1;
- (void)registerYReportSdk;
- (void)viewDidLoad;
- (id)initWithEnableJumpToElderMode:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

