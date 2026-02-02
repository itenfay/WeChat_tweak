//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUINavigationBar, NSString, UIImageView, UILabel, UINavigationItem, UIScrollView, UISwitch, UIView, WXGRoamBackupPackageDetailCell;

@interface WXGRoamNewChooseRangeViewController
{
    _Bool _isUpadte;
    UINavigationItem *_customNavigationItem;
    MMUINavigationBar *_customNavigationBar;
    UIScrollView *_sheetView;
    UIView *_topView;
    UIView *_secondView;
    UIView *_allChatCell;
    UIView *_exactChatCell;
    UIView *_exactChatExtraView;
    UIView *_userExtraView;
    UIView *_labelExtraView;
    UILabel *_userExtraTips;
    UILabel *_labelExtraTips;
    UILabel *_autoBackupTimeTips;
    UIView *_timeExtraView;
    WXGRoamBackupPackageDetailCell *_startTimeCell;
    WXGRoamBackupPackageDetailCell *_endTimeCell;
    UIView *_allChatExcludeFoldedCell;
    UIImageView *_autoArrowImg;
    UIImageView *_chosenImg;
    UIView *_typeCell;
    UIView *_timeCell;
    UISwitch *_typeSwitch;
    UISwitch *_timeSwitch;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UISwitch *timeSwitch; // @synthesize timeSwitch=_timeSwitch;
@property(retain, nonatomic) UISwitch *typeSwitch; // @synthesize typeSwitch=_typeSwitch;
@property(retain, nonatomic) UIView *timeCell; // @synthesize timeCell=_timeCell;
@property(retain, nonatomic) UIView *typeCell; // @synthesize typeCell=_typeCell;
@property(retain, nonatomic) UIImageView *chosenImg; // @synthesize chosenImg=_chosenImg;
@property(retain, nonatomic) UIImageView *autoArrowImg; // @synthesize autoArrowImg=_autoArrowImg;
@property(retain, nonatomic) UIView *allChatExcludeFoldedCell; // @synthesize allChatExcludeFoldedCell=_allChatExcludeFoldedCell;
@property(retain, nonatomic) WXGRoamBackupPackageDetailCell *endTimeCell; // @synthesize endTimeCell=_endTimeCell;
@property(retain, nonatomic) WXGRoamBackupPackageDetailCell *startTimeCell; // @synthesize startTimeCell=_startTimeCell;
@property(retain, nonatomic) UIView *timeExtraView; // @synthesize timeExtraView=_timeExtraView;
@property(retain, nonatomic) UILabel *autoBackupTimeTips; // @synthesize autoBackupTimeTips=_autoBackupTimeTips;
@property(retain, nonatomic) UILabel *labelExtraTips; // @synthesize labelExtraTips=_labelExtraTips;
@property(retain, nonatomic) UILabel *userExtraTips; // @synthesize userExtraTips=_userExtraTips;
@property(retain, nonatomic) UIView *labelExtraView; // @synthesize labelExtraView=_labelExtraView;
@property(retain, nonatomic) UIView *userExtraView; // @synthesize userExtraView=_userExtraView;
@property(retain, nonatomic) UIView *exactChatExtraView; // @synthesize exactChatExtraView=_exactChatExtraView;
@property(retain, nonatomic) UIView *exactChatCell; // @synthesize exactChatCell=_exactChatCell;
@property(retain, nonatomic) UIView *allChatCell; // @synthesize allChatCell=_allChatCell;
@property(retain, nonatomic) UIView *secondView; // @synthesize secondView=_secondView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIScrollView *sheetView; // @synthesize sheetView=_sheetView;
@property(retain, nonatomic) MMUINavigationBar *customNavigationBar; // @synthesize customNavigationBar=_customNavigationBar;
@property(retain, nonatomic) UINavigationItem *customNavigationItem; // @synthesize customNavigationItem=_customNavigationItem;
@property(nonatomic) _Bool isUpadte; // @synthesize isUpadte=_isUpadte;
- (void)contactTagListViewController:(id)arg1 didSelectContactTag:(id)arg2;
- (void)onRoamBackupPackageServiceChooseRangeDetailComplete;
- (void)onCreate;
- (void)onCancel;
- (void)onSwitchType;
- (void)onSwitchTime;
- (void)onSelectContactTag;
- (void)updateView;
- (void)addTopViewAction;
- (void)setupTimeExtraView;
- (void)setupExtraView;
- (void)setupSecondeView;
- (void)setupTopView;
- (void)setupChosenImg;
- (void)setupViews;
- (void)setupNavBar;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

