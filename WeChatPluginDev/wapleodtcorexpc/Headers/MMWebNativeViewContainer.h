//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMWebContainerHookView, UIView;

@interface MMWebNativeViewContainer : NSObject
{
    UIView *_scrollView;
    UIView *_nativeView;
    MMWebContainerHookView *_nativeViewContainer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MMWebContainerHookView *nativeViewContainer; // @synthesize nativeViewContainer=_nativeViewContainer;
@property(retain, nonatomic) UIView *nativeView; // @synthesize nativeView=_nativeView;
@property(nonatomic) __weak UIView *scrollView; // @synthesize scrollView=_scrollView;
- (_Bool)checkNativeViewStatusAndReportIfLossed;
- (void)destroy;
- (void)updateContainer;
- (void)dealloc;
- (id)init;

@end

