//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMEmoticonView, MMImageScrollViewHelper, NSArray, NSString, UIView;
@protocol MMImgageBrowseViewDelegate;

@interface MMImageBrowseView
{
    id <MMImgageBrowseViewDelegate> m_delegate;
    UIView *m_vImage;
    struct CGSize m_szFit;
    MMEmoticonView *m_emoticonView;
    MMImageScrollViewHelper *m_scrollViewHelper;
    _Bool _isDisplayingNoImage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isDisplayingNoImage; // @synthesize isDisplayingNoImage=_isDisplayingNoImage;
@property(retain, nonatomic) MMEmoticonView *m_emoticonView; // @synthesize m_emoticonView;
@property(nonatomic) __weak id <MMImgageBrowseViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnLongPress:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)getScrollView;
- (id)viewForZooming;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)ZoomForPoint:(struct CGPoint)arg1;
- (void)ResetScroll;
- (void)UpdateEmoticon:(id)arg1;
- (void)UpdateData:(id)arg1 orientation:(long long)arg2;
- (void)UpdateData:(id)arg1;
- (void)UpdateImage:(id)arg1 orientation:(long long)arg2;
- (void)UpdateImage:(id)arg1 orientation:(long long)arg2 supportHorizontalLong:(_Bool)arg3;
- (void)UpdateImage:(id)arg1;
- (id)getImageView;
- (void)InitEmoticonView:(id)arg1;
- (void)InitImageView;
@property(nonatomic) struct CGRect frame;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGRect={CGPoint=dd}{CGSize=dd}},?,N

- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *gestureRecognizers;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,C,N

@property(readonly) unsigned long long hash;
@property(nonatomic) double maximumZoomScale;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(nonatomic) double minimumZoomScale;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(readonly) Class superclass;
@property(nonatomic) double zoomScale;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N


@end

