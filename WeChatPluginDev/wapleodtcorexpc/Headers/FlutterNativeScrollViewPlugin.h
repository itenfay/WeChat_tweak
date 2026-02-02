//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterMethodChannel, FlutterNativeScrollView, NSString, UIView;

@interface FlutterNativeScrollViewPlugin : NSObject
{
    FlutterMethodChannel *_channel;
    FlutterNativeScrollView *_nativeScrollView;
    UIView *_flutterView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *flutterView; // @synthesize flutterView=_flutterView;
@property(retain, nonatomic) FlutterNativeScrollView *nativeScrollView; // @synthesize nativeScrollView=_nativeScrollView;
@property(retain, nonatomic) FlutterMethodChannel *channel; // @synthesize channel=_channel;
- (void)didScroll:(id)arg1;
- (void)attachNativeScrollView:(id)arg1;
- (void)onDetachedToViewController;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (id)getScrollView;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

