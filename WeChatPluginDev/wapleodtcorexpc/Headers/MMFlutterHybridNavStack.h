//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MMFlutterHybridNavStack : NSObject
{
    NSMutableArray *_viewStack;
    NSMutableDictionary *_viewMap;
    NSString *_engineGroupId;
    _Bool _isPushToNonFlutterViewController;
    NSString *_pendingPauseViewEngineId;
    NSMutableDictionary *_pausedEngine;
}

- (void).cxx_destruct;
- (_Bool)hasActiveFlutterPage;
- (_Bool)hasFlutterPage;
- (void)dealloc;
- (_Bool)isStackTop:(id)arg1;
- (void)onPushToNewViewController:(id)arg1 isFlutter:(_Bool)arg2;
- (void)viewDealloc:(id)arg1;
- (void)viewDidBePopedOrDismissed:(id)arg1;
- (void)viewDidDisappear:(id)arg1;
- (void)viewDidAppear:(id)arg1;
- (void)viewWillAppear:(id)arg1;
@property(readonly, nonatomic) NSString *engineGroupId;
- (id)initWithEngineGroupId:(id)arg1;

@end

