//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIScrollView, WAJSCoreService, WAScrollViewAnimView, WAWebViewController;
@protocol UIScrollViewDelegate;

@interface WAContainerScrollViewLogic : NSObject
{
    _Bool _enable;
    _Bool _customDecelerate;
    unsigned int _scrollViewId;
    WAJSCoreService *_service;
    WAWebViewController *_webview;
    UIScrollView *_scrollView;
    id <UIScrollViewDelegate> _realDelegate;
    WAScrollViewAnimView *_animView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAScrollViewAnimView *animView; // @synthesize animView=_animView;
@property(nonatomic) __weak id <UIScrollViewDelegate> realDelegate; // @synthesize realDelegate=_realDelegate;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned int scrollViewId; // @synthesize scrollViewId=_scrollViewId;
@property(nonatomic) __weak WAWebViewController *webview; // @synthesize webview=_webview;
@property(nonatomic) __weak WAJSCoreService *service; // @synthesize service=_service;
@property(nonatomic) _Bool customDecelerate; // @synthesize customDecelerate=_customDecelerate;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
- (void)deleAnimView;
- (void)updateAnimView;
- (void)makeAnimView;
- (id)paramsWith:(id)arg1 extraParams:(id)arg2;
- (id)commonParams:(id)arg1;
- (void)notifyEvent:(id)arg1 params:(id)arg2;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)startAnimateWithDuration:(double)arg1 delay:(double)arg2 usingSpringWithDamping:(double)arg3 initialSpringVelocity:(double)arg4 options:(unsigned long long)arg5 startPoint:(struct CGPoint)arg6 endPoint:(struct CGPoint)arg7;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

