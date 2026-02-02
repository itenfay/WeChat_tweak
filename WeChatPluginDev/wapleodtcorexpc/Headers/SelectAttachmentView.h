//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMScrollView, NSMutableArray, NSString, UIImageView, UIPageControl;
@protocol SelectAttachmentViewDataSource, SelectAttachmentViewDelegate;

@interface SelectAttachmentView
{
    id <SelectAttachmentViewDelegate> _delegate;
    id <SelectAttachmentViewDataSource> _dataSource;
    MMScrollView *_scrollView;
    UIPageControl *_pageController;
    UIImageView *m_tipsView;
    _Bool bPageControlUsed;
    unsigned long long iCount;
    unsigned long long iRow;
    unsigned long long iCol;
    unsigned long long iPage;
    _Bool isLayout;
    NSMutableArray *m_arrAttachmentButton;
    unsigned long long m_tempCurrentPages;
    _Bool m_isChangePage;
    _Bool m_isVisable;
    unsigned long long _lastPage;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastPage; // @synthesize lastPage=_lastPage;
@property(nonatomic) __weak id <SelectAttachmentViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SelectAttachmentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)nextAccessibilityElementForNextPage:(unsigned long long)arg1 andLastPage:(unsigned long long)arg2;
- (void)setVoiceOverAccessibilityElements:(_Bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onPageControllerChangePage:(id)arg1;
- (void)onContentVisableChange;
- (void)scrollViewToPage:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)changeToInputToolWeAppNotShowPageWithWeAppIndex:(long long)arg1;
- (void)resetContainerViewOffset;
- (void)resetVisible;
- (void)resetView;
- (void)layoutSubviews;
- (double)itemOffset;
- (struct CGRect)calculateEmoticonViewFrameAtIndex:(unsigned int)arg1 forViewWidth:(double)arg2;
- (double)getContentMarginCurOri;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

