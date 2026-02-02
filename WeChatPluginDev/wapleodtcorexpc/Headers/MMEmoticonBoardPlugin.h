//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMEmoticonBoardNativeViewFactory, NSString, UIViewController;
@protocol FlutterPluginRegistrar;

@interface MMEmoticonBoardPlugin : NSObject
{
    UIViewController *_attachedViewController;
    NSObject<FlutterPluginRegistrar> *_registrar;
    MMEmoticonBoardNativeViewFactory *_viewFactory;
}

+ (id)plugin;
- (void).cxx_destruct;
@property(retain, nonatomic) MMEmoticonBoardNativeViewFactory *viewFactory; // @synthesize viewFactory=_viewFactory;
@property(nonatomic) __weak NSObject<FlutterPluginRegistrar> *registrar; // @synthesize registrar=_registrar;
@property(nonatomic) __weak UIViewController *attachedViewController; // @synthesize attachedViewController=_attachedViewController;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedToViewController;
- (void)onAttachedToViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

