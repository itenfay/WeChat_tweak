//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMScrollView, NSMutableArray, NSString, UIView;

@interface WCCanvasDownloadScrollListComponent
{
    _Bool _m_isAnimating;
    _Bool _m_hasScroll;
    UIView *_m_bgMask;
    MMScrollView *_m_scrollView;
    NSMutableArray *_m_arrCanvasComponent;
    struct CGPoint _m_curOffset;
}

+ (double)calcMaxHeightWithGroup:(id)arg1 maxWidth:(double)arg2 advertiseInfo:(id)arg3 orientation:(long long)arg4;
+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_arrCanvasComponent; // @synthesize m_arrCanvasComponent=_m_arrCanvasComponent;
@property(nonatomic) _Bool m_hasScroll; // @synthesize m_hasScroll=_m_hasScroll;
@property(nonatomic) struct CGPoint m_curOffset; // @synthesize m_curOffset=_m_curOffset;
@property(nonatomic) _Bool m_isAnimating; // @synthesize m_isAnimating=_m_isAnimating;
@property(retain, nonatomic) MMScrollView *m_scrollView; // @synthesize m_scrollView=_m_scrollView;
@property(retain, nonatomic) UIView *m_bgMask; // @synthesize m_bgMask=_m_bgMask;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)notifyAppearOrDisappearWhenScrollWithLastOffset:(struct CGPoint)arg1 curOffset:(struct CGPoint)arg2;
- (void)notifyDisappearScrollView:(struct CGPoint)arg1;
- (void)notifyWillAppearScrollView:(struct CGPoint)arg1;
- (void)notifyWhenScrollViewDidScrollOrDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)shareComponentDidBeClickedWithType:(long long)arg1;
- (id)randomPickFetchRandomPickCardComponent;
- (_Bool)encoreShakeShouldForbidShakeSpecialView;
- (void)componentReportAddExposureCount;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentWillAppearInMainScreen:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)animationShowWithIndex:(unsigned long long)arg1;
- (void)resetScrollView;
- (void)clearStatus;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

