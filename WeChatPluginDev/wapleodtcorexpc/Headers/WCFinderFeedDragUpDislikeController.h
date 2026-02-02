//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIScrollView, UIView, WCFinderFeedContentVM, WCFinderFeedDragUpDislikeViewModel, WCFinderNotInterestedPanelView;
@protocol WCFinderFeedDragUpDislikeControllerDelegate;

@interface WCFinderFeedDragUpDislikeController : NSObject
{
    _Bool _ignoreShock;
    _Bool _canShowPanel;
    _Bool _isPanelViewAnimating;
    _Bool _isPanInScreenTopArea;
    id <WCFinderFeedDragUpDislikeControllerDelegate> _delegate;
    WCFinderNotInterestedPanelView *_panelView;
    UIView *_navigationControllerView;
    UIScrollView *_scrollView;
    WCFinderFeedDragUpDislikeViewModel *_viewModel;
    WCFinderFeedContentVM *_contentVMAtPanStart;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderFeedContentVM *contentVMAtPanStart; // @synthesize contentVMAtPanStart=_contentVMAtPanStart;
@property(nonatomic) _Bool isPanInScreenTopArea; // @synthesize isPanInScreenTopArea=_isPanInScreenTopArea;
@property(nonatomic) _Bool isPanelViewAnimating; // @synthesize isPanelViewAnimating=_isPanelViewAnimating;
@property(nonatomic) _Bool canShowPanel; // @synthesize canShowPanel=_canShowPanel;
@property(nonatomic) _Bool ignoreShock; // @synthesize ignoreShock=_ignoreShock;
@property(retain, nonatomic) WCFinderFeedDragUpDislikeViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak UIView *navigationControllerView; // @synthesize navigationControllerView=_navigationControllerView;
@property(retain, nonatomic) WCFinderNotInterestedPanelView *panelView; // @synthesize panelView=_panelView;
@property(nonatomic) __weak id <WCFinderFeedDragUpDislikeControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)genReportDict;
- (void)drapUpVMShouldShowPanel:(id)arg1;
- (void)_tryPlayShock;
- (void)_removeObserve;
- (_Bool)panGesture:(id)arg1 isInView:(id)arg2;
- (_Bool)isCurrentPanInNotLikeView;
- (void)_addObserve;
- (void)destory;
- (void)setup;
- (id)initWithNavigationControllerView:(id)arg1 scrollView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

