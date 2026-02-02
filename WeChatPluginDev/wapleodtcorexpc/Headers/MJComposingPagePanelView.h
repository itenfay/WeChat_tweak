//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJComposingPagePanelViewModel, MJPageView, NSString, UIView;
@protocol MJComposingPagePanelViewDelegate;

@interface MJComposingPagePanelView
{
    id <MJComposingPagePanelViewDelegate> _delegate;
    MJPageView *_pageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJPageView *pageView; // @synthesize pageView=_pageView;
@property(nonatomic) __weak id <MJComposingPagePanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageView:(id)arg1 didSelectTitleItemAtIndex:(long long)arg2;
- (void)pageView:(id)arg1 didDisappearPageAtIndex:(long long)arg2;
- (void)pageView:(id)arg1 didAppearPageAtIndex:(long long)arg2;
- (id)pageView:(id)arg1 contentItemAtIndex:(long long)arg2;
- (id)pageView:(id)arg1 titleItemAtIndex:(long long)arg2;
- (long long)numberOfPagesInPageView:(id)arg1;
- (_Bool)scrollToPageWithTabAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)scrollToPageWithSupportedSegmentType:(unsigned long long)arg1 animated:(_Bool)arg2;
- (_Bool)scrollToPageWithEditContentType:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollToPreviousShowingPage;
- (void)setupViews;
- (id)initWithViewModel:(id)arg1 contentView:(id)arg2 pageView:(id)arg3;
- (void)willMoveToSuperview:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) UIView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) MJComposingPagePanelViewModel *viewModel; // @dynamic viewModel;

@end

