//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSMutableDictionary, NSString;
@protocol MsgImgFullScreenContainerDelegate;

@interface MsgImgFullScreenContainer
{
    NSMutableDictionary *dicVisiblePageIndex;
    int m_iNumberOfPages;
    int m_iCurrentPage;
    _Bool m_bFromPicker;
    struct CGRect _originImageRectInScreen;
    _Bool m_bIsTilingPage;
    _Bool _forceDisableScroll;
    id <MsgImgFullScreenContainerDelegate> m_delegate;
    MMUIViewController *m_viewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceDisableScroll; // @synthesize forceDisableScroll=_forceDisableScroll;
@property(nonatomic) _Bool m_bFromPicker; // @synthesize m_bFromPicker;
@property(nonatomic) int m_iCurrentPage; // @synthesize m_iCurrentPage;
@property(nonatomic) int m_iNumberOfPages; // @synthesize m_iNumberOfPages;
@property(nonatomic) __weak MMUIViewController *m_viewController; // @synthesize m_viewController;
@property(nonatomic) __weak id <MsgImgFullScreenContainerDelegate> m_delegate; // @synthesize m_delegate;
- (void)transitionToNewSize;
- (id)getPhotoatIndex:(unsigned long long)arg1;
- (void)updatePhotoatIndex:(unsigned long long)arg1;
- (void)setPage:(unsigned int)arg1 atIndex:(unsigned long long)arg2;
- (void)clearView;
- (void)updatePageCount:(unsigned int)arg1;
- (unsigned long long)imageCount;
- (id)viewAtPage:(unsigned long long)arg1 frame:(struct CGRect)arg2;
- (id)imageAtPage:(unsigned long long)arg1;
- (struct CGPoint)contentOffsetForPagingScrollView;
- (struct CGSize)contentSizeForPagingScrollView;
- (struct CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForPagingScrollView;
- (void)ImageScrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)ImageScrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)getPageForIndex:(unsigned long long)arg1;
- (_Bool)isDisplayingPageForIndex:(unsigned long long)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)tilePages;
- (void)animateShowWithOriginRectInScreen:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initScrollView;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)OnLongPressBegin:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addToFavorites;
- (void)forwardMessage;
- (void)onOperate;
- (void)onSavedPhotosAlbum:(CDUnknownBlockType)arg1;
- (void)onSavedPhotosAlbum;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

