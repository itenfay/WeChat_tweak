//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMScrollView, NSArray, NSString, UIPageControl;
@protocol EnterpriseBrandSelectSheetViewDelegate;

@interface EnterpriseBrandSelectSheetView
{
    unsigned int _scene;
    CContact *_mainBrandContact;
    NSArray *_arySubContact;
    MMScrollView *_scrollView;
    UIPageControl *_pageControl;
    unsigned int _rowCount;
    unsigned int _colCount;
    unsigned int _pageCount;
    double _topMargin;
    double _rowMargin;
    double _colMargin;
    double _pageControlMargin;
    double _cellWidth;
    double _cellHeight;
    id <EnterpriseBrandSelectSheetViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EnterpriseBrandSelectSheetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onIconClicked:(id)arg1;
- (void)onPageControllerChangePage:(id)arg1;
- (void)layoutSubviews;
- (void)initData;
- (id)initWithMainContact:(id)arg1 scene:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

