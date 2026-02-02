//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterBasicMessageChannel;

@interface MMFlutterHybridNavPageState : NSObject
{
    FlutterBasicMessageChannel *_pageStateChannel;
}

- (void).cxx_destruct;
- (void)onEngineExit:(CDUnknownBlockType)arg1;
- (void)onPageExit:(CDUnknownBlockType)arg1;
- (void)onPageDetached:(CDUnknownBlockType)arg1;
- (void)onPageViewDetached:(CDUnknownBlockType)arg1;
- (void)onPagePaused:(CDUnknownBlockType)arg1;
- (void)onPageInactive:(CDUnknownBlockType)arg1;
- (void)onPageResumed:(CDUnknownBlockType)arg1;
- (void)onPageEnter:(CDUnknownBlockType)arg1;
- (void)onAppEnterBackground:(CDUnknownBlockType)arg1;
- (void)onAppEnterForeground:(CDUnknownBlockType)arg1;
- (void)onPageDidDisappear:(CDUnknownBlockType)arg1;
- (void)onPageWillDisappear:(CDUnknownBlockType)arg1;
- (void)onPageDidAppear:(CDUnknownBlockType)arg1;
- (void)onPageWillAppear:(CDUnknownBlockType)arg1;
- (void)onViewReady:(CDUnknownBlockType)arg1;
- (void)requestPagePreload;
- (id)initWithMessenger:(id)arg1;

@end

