//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol WxaFlutterViewControllerDelegate;

@interface WxaFlutterViewLifeCycle : NSObject
{
    id <WxaFlutterViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WxaFlutterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPageResume:(int)arg1 arguments:(id)arg2;
- (void)onPagePause:(int)arg1 arguments:(id)arg2;
- (void)onBackPressed:(int)arg1 arguments:(id)arg2;
- (void)onDestroy:(int)arg1 arguments:(id)arg2;
- (void)onBackground:(int)arg1 arguments:(id)arg2;
- (void)onForeground:(int)arg1 arguments:(id)arg2;
- (void)onDestroyView:(int)arg1 arguments:(id)arg2;
- (void)onPauseView:(int)arg1 arguments:(id)arg2;
- (void)onResumeView:(int)arg1 arguments:(id)arg2;
- (void)onCreateView:(int)arg1 arguments:(id)arg2;
- (id)generateParams;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

