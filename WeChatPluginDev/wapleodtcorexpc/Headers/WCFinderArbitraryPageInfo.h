//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIScrollView, UIView, UIViewController;

@interface WCFinderArbitraryPageInfo : NSObject
{
    _Bool _isVC;
    long long _idx;
    UIView *_bannerView;
    UIView *_view;
    UIViewController *_pageVC;
    UIScrollView *_innerScrollView;
    NSString *_viewIdentifier;
    CDUnknownFunctionPointerType _viewWillAppear;
    CDUnknownFunctionPointerType _viewDidAppear;
    CDUnknownFunctionPointerType _viewWillDisappear;
    CDUnknownFunctionPointerType _viewDidDisappear;
}

- (void).cxx_destruct;
@property(nonatomic) CDUnknownFunctionPointerType viewDidDisappear; // @synthesize viewDidDisappear=_viewDidDisappear;
@property(nonatomic) CDUnknownFunctionPointerType viewWillDisappear; // @synthesize viewWillDisappear=_viewWillDisappear;
@property(nonatomic) CDUnknownFunctionPointerType viewDidAppear; // @synthesize viewDidAppear=_viewDidAppear;
@property(nonatomic) CDUnknownFunctionPointerType viewWillAppear; // @synthesize viewWillAppear=_viewWillAppear;
@property(retain, nonatomic) NSString *viewIdentifier; // @synthesize viewIdentifier=_viewIdentifier;
@property(nonatomic) __weak UIScrollView *innerScrollView; // @synthesize innerScrollView=_innerScrollView;
@property(retain, nonatomic) UIViewController *pageVC; // @synthesize pageVC=_pageVC;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) long long idx; // @synthesize idx=_idx;
@property(nonatomic) _Bool isVC; // @synthesize isVC=_isVC;

@end

