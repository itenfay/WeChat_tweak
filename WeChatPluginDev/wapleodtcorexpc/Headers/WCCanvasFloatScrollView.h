//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class NSString, WCAdvertiseInfo, WCCanvasComponent, WCCanvasComponentItem;
@protocol WCCanvasComponentDelegate;

@interface WCCanvasFloatScrollView : UIScrollView
{
    WCCanvasComponentItem *_componentItem;
    WCCanvasComponent *_component;
    WCAdvertiseInfo *_advertiseInfo;
    long long _orientation;
    id <WCCanvasComponentDelegate> _componentDelegate;
    struct CGPoint _beginDraggingOffset;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint beginDraggingOffset; // @synthesize beginDraggingOffset=_beginDraggingOffset;
@property(nonatomic) __weak id <WCCanvasComponentDelegate> componentDelegate; // @synthesize componentDelegate=_componentDelegate;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) WCAdvertiseInfo *advertiseInfo; // @synthesize advertiseInfo=_advertiseInfo;
@property(retain, nonatomic) WCCanvasComponent *component; // @synthesize component=_component;
@property(retain, nonatomic) WCCanvasComponentItem *componentItem; // @synthesize componentItem=_componentItem;
- (void)didScrollViewEndDecelerating;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)contentViewScrollToTop;
- (_Bool)didContainWebStoreComponent;
- (void)setContentComponentFullScreen;
- (_Bool)didScrollViewScrollToTop;
- (void)notifyComponentReportAddExposureCount;
- (void)notifyComponentStatusChanged:(_Bool)arg1;
- (void)initComponent;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 componentItem:(id)arg2 advertiseInfo:(id)arg3 orientation:(long long)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

