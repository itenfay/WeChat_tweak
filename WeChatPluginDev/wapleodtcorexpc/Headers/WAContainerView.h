//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIScrollView, UIView;

@interface WAContainerView : NSObject
{
    unsigned int _containerId;
    UIScrollView *_scrollView;
    UIView *_nativeView;
    UIView *_nativeViewContainer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *nativeViewContainer; // @synthesize nativeViewContainer=_nativeViewContainer;
@property(nonatomic) __weak UIView *nativeView; // @synthesize nativeView=_nativeView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned int containerId; // @synthesize containerId=_containerId;
- (id)containerLayerName;
- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateContainer;
- (void)adjustHookView;
- (void)setContainerScrollEnabled:(_Bool)arg1;
- (id)initByContainerId:(unsigned int)arg1;

@end

