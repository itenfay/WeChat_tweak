//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WxaFlutterViewLifecycleDelegate <NSObject>

@optional
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
@end

