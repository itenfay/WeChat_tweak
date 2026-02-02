//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class KindaModalController, MMUIViewController, UIImageView;

@interface WCPayBlurViewHelper : NSObject
{
    _Bool _isFirstResponse;
    MMUIViewController *_controller;
    KindaModalController *_modal;
    UIImageView *_blurView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFirstResponse; // @synthesize isFirstResponse=_isFirstResponse;
@property(retain, nonatomic) UIImageView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) __weak KindaModalController *modal; // @synthesize modal=_modal;
@property(nonatomic) __weak MMUIViewController *controller; // @synthesize controller=_controller;
- (void)onApplicationDidEnterBackground:(id)arg1;
- (void)onApplicationWillResignActive:(id)arg1;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (void)onApplicationWillEnterForeground:(id)arg1;
- (_Bool)isFirstResponderInView:(id)arg1;
- (void)dealloc;
- (void)initCommon;
- (id)initWithKindaModalController:(id)arg1;
- (id)initWithNavigationController:(id)arg1;

@end

