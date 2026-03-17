//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveLimitedBusinessMgr : NSObject
{
}

- (void)antiCheckVerifySuc:(_Bool)arg1 scene:(unsigned long long)arg2;
- (void)antiCheckViewDidAppear:(_Bool)arg1 scene:(unsigned long long)arg2;
- (void)triggerAntiAddictCheckFromVC:(id)arg1;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)removeObserverForForegroundNotification;
- (void)dealloc;
- (void)addObserverForForegroundNotification;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

