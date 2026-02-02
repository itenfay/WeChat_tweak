//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderJumpInfo, MMFinderLiveTaskId, NSString, UIButton, UIImage, UIView;
@protocol WCFinderLiveCompleteAgreementResultViewControllerDelegate;

@interface WCFinderLiveCompleteAgreementResultViewController
{
    UIButton *m_actionBtn;
    NSString *m_headTitle;
    NSString *m_headContent;
    NSString *m_headContentWithLink;
    _Bool m_isWeakActionBtn;
    UIImage *m_logoSVGImage;
    NSString *m_actionBtnStr;
    FinderJumpInfo *_extJumpAction;
    id <WCFinderLiveCompleteAgreementResultViewControllerDelegate> _m_delegate;
    MMFinderLiveTaskId *_liveTaskId;
    UIView *_backgroundView;
    UIButton *_extJumpActionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *extJumpActionButton; // @synthesize extJumpActionButton=_extJumpActionButton;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(nonatomic) __weak id <WCFinderLiveCompleteAgreementResultViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) FinderJumpInfo *extJumpAction; // @synthesize extJumpAction=_extJumpAction;
@property(nonatomic) _Bool m_isWeakActionBtn; // @synthesize m_isWeakActionBtn;
@property(retain, nonatomic) NSString *m_actionBtnStr; // @synthesize m_actionBtnStr;
@property(retain, nonatomic) UIImage *m_logoSVGImage; // @synthesize m_logoSVGImage;
- (id)liveTask;
- (_Bool)useTransparentNavibar;
- (void)setupBlurBackground;
- (void)onHeadContentLinkClicked:(id)arg1;
- (void)doAction;
- (void)layoutCommonHeadView;
- (void)doExtJumpAction;
- (_Bool)shouldShowExtJumpActinoButton;
- (void)layoutActionButtons;
- (void)createActionBtnsIfNeed;
- (void)createAndLayoutActionButtons;
- (void)layoutView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithHeadTitle:(id)arg1 headContentWithLink:(id)arg2 liveTaskId:(id)arg3;
- (id)initWithHeadTitle:(id)arg1 headContent:(id)arg2 liveTaskId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

