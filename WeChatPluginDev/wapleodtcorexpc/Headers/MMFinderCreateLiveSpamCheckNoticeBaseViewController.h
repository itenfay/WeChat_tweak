//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderCreateLiveSpamCheckReportSession, MMUILabel, MMUIMaskContainerView, NSString, UIScrollView;

@interface MMFinderCreateLiveSpamCheckNoticeBaseViewController
{
    _Bool _hideNav;
    NSString *_detailTitle;
    NSString *_detailContent;
    NSString *_leftBtnTitle;
    NSString *_rightBtnTitle;
    CDUnknownBlockType _leftBtnBlock;
    CDUnknownBlockType _rightBtnBlock;
    MMFinderCreateLiveSpamCheckReportSession *_reportSession;
    MMUIMaskContainerView *_scrollContainerView;
    UIScrollView *_scrollView;
    MMUILabel *_titleLabel;
    MMUILabel *_contentLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) MMUIMaskContainerView *scrollContainerView; // @synthesize scrollContainerView=_scrollContainerView;
@property(retain, nonatomic) MMFinderCreateLiveSpamCheckReportSession *reportSession; // @synthesize reportSession=_reportSession;
@property(copy, nonatomic) CDUnknownBlockType rightBtnBlock; // @synthesize rightBtnBlock=_rightBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType leftBtnBlock; // @synthesize leftBtnBlock=_leftBtnBlock;
@property(nonatomic) _Bool hideNav; // @synthesize hideNav=_hideNav;
@property(retain, nonatomic) NSString *rightBtnTitle; // @synthesize rightBtnTitle=_rightBtnTitle;
@property(retain, nonatomic) NSString *leftBtnTitle; // @synthesize leftBtnTitle=_leftBtnTitle;
@property(retain, nonatomic) NSString *detailContent; // @synthesize detailContent=_detailContent;
@property(retain, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (id)colorForPageSheetCancelButton;
- (long long)styleForPageSheetCancelButton;
- (id)colorForPageSheetCancelButtonTitle;
- (id)titleForPageSheetCancelButton;
- (id)colorForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (id)customContentFont;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithDetailTitle:(id)arg1 detailContent:(id)arg2 leftBtnTitle:(id)arg3 rightBtnTitle:(id)arg4 hideNav:(_Bool)arg5 leftBtnBlock:(CDUnknownBlockType)arg6 rightBtnBlock:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

