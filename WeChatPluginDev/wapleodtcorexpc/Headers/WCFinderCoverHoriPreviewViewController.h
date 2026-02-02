//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIScrollView, WCFinderCoverEditViewController, WCFinderHoriPreviewCardView, WCFinderPostSessionModel;
@protocol WCFinderCoverHoriPreviewViewControllerDelegate;

@interface WCFinderCoverHoriPreviewViewController
{
    _Bool _xlabShowPreviewBtn;
    _Bool _hasChooseCoverUrl;
    _Bool _alreadyShowReuseAlert;
    id <WCFinderCoverHoriPreviewViewControllerDelegate> _delegate;
    WCFinderPostSessionModel *_postSession;
    UIScrollView *_scrollView;
    WCFinderHoriPreviewCardView *_personalCardView;
    WCFinderHoriPreviewCardView *_shareCardView;
    WCFinderCoverEditViewController *_personalCoverVC;
    WCFinderCoverEditViewController *_shareCoverVC;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool alreadyShowReuseAlert; // @synthesize alreadyShowReuseAlert=_alreadyShowReuseAlert;
@property(nonatomic) _Bool hasChooseCoverUrl; // @synthesize hasChooseCoverUrl=_hasChooseCoverUrl;
@property(nonatomic) _Bool xlabShowPreviewBtn; // @synthesize xlabShowPreviewBtn=_xlabShowPreviewBtn;
@property(retain, nonatomic) WCFinderCoverEditViewController *shareCoverVC; // @synthesize shareCoverVC=_shareCoverVC;
@property(retain, nonatomic) WCFinderCoverEditViewController *personalCoverVC; // @synthesize personalCoverVC=_personalCoverVC;
@property(retain, nonatomic) WCFinderHoriPreviewCardView *shareCardView; // @synthesize shareCardView=_shareCardView;
@property(retain, nonatomic) WCFinderHoriPreviewCardView *personalCardView; // @synthesize personalCardView=_personalCardView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) WCFinderPostSessionModel *postSession; // @synthesize postSession=_postSession;
@property(nonatomic) __weak id <WCFinderCoverHoriPreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCoverEditDidAppear:(id)arg1;
- (void)onHoriPreviewCardClickEditButton:(unsigned long long)arg1;
- (id)getCurrentCoverVCByStyle:(unsigned long long)arg1;
- (void)setupCoverVCByStyle:(unsigned long long)arg1;
- (void)onClickPreviewBtn;
- (void)setupCardViews;
- (void)setupNaviContent;
- (void)viewDidLoad;
- (id)initWithPostSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

