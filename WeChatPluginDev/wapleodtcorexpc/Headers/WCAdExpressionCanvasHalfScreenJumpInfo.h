//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIViewController, WCFinderFeedContentVM;
@protocol WCCanvasHalfScreenViewControllerDelegate;

@interface WCAdExpressionCanvasHalfScreenJumpInfo : NSObject
{
    _Bool _isHalfScreen;
    _Bool _shouldCheckHalfScreenDelegate;
    _Bool _shouldForbidPanUpGesture;
    _Bool _bulletCommentSwitch;
    UIViewController *_halfScreenFromVC;
    id <WCCanvasHalfScreenViewControllerDelegate> _halfScreenDelegate;
    WCFinderFeedContentVM *_halfScreenFinderFeedContentVM;
    double _halfScreenHeightRatio;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bulletCommentSwitch; // @synthesize bulletCommentSwitch=_bulletCommentSwitch;
@property(nonatomic) _Bool shouldForbidPanUpGesture; // @synthesize shouldForbidPanUpGesture=_shouldForbidPanUpGesture;
@property(nonatomic) double halfScreenHeightRatio; // @synthesize halfScreenHeightRatio=_halfScreenHeightRatio;
@property(retain, nonatomic) WCFinderFeedContentVM *halfScreenFinderFeedContentVM; // @synthesize halfScreenFinderFeedContentVM=_halfScreenFinderFeedContentVM;
@property(nonatomic) _Bool shouldCheckHalfScreenDelegate; // @synthesize shouldCheckHalfScreenDelegate=_shouldCheckHalfScreenDelegate;
@property(nonatomic) __weak id <WCCanvasHalfScreenViewControllerDelegate> halfScreenDelegate; // @synthesize halfScreenDelegate=_halfScreenDelegate;
@property(nonatomic) __weak UIViewController *halfScreenFromVC; // @synthesize halfScreenFromVC=_halfScreenFromVC;
@property(nonatomic) _Bool isHalfScreen; // @synthesize isHalfScreen=_isHalfScreen;

@end

