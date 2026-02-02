//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMScrollView, NSArray, NSMutableArray, NSString, UIPageControl;
@protocol IntelligentMsgImgFigurePageViewDelegate;

@interface IntelligentMsgImgFigurePageView
{
    unsigned long long m_tempCurrentPages;
    _Bool m_isChangePage;
    _Bool m_isVisable;
    MMScrollView *m_scrollView;
    UIPageControl *m_pageController;
    unsigned long long m_iCount;
    unsigned long long m_iRow;
    unsigned long long m_iCol;
    unsigned long long m_iPage;
    NSMutableArray *m_arrAttachmentButton;
    NSArray *m_arrFaceClusterMessageItem;
    id <IntelligentMsgImgFigurePageViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IntelligentMsgImgFigurePageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onClickMsgImgButton:(id)arg1;
- (void)onPageControllerChangePage:(id)arg1;
- (_Bool)isOnePage;
- (unsigned long long)numberOfCols;
- (unsigned long long)numberOfRows;
- (id)createButton;
- (void)scrollViewToPage:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)updateMsgImgFigurePageView:(id)arg1;
- (struct CGRect)calculateEmoticonViewFrameAtIndex:(unsigned int)arg1 forViewWidth:(double)arg2;
- (_Bool)pointInScrollView:(struct CGPoint)arg1;
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

