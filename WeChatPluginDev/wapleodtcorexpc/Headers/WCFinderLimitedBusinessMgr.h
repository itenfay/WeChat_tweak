//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLimitedBusinessMgr : NSObject
{
}

+ (id)getFaceVerifyCreateTitle:(long long)arg1;
+ (id)getFaceVerifyAlertTitleWithScene:(long long)arg1;
+ (void)showFaceVerifyTips:(long long)arg1 nav:(id)arg2 faceVerifyURL:(id)arg3;
+ (_Bool)checkShouldFaceVerifyScene:(long long)arg1 isFinderIdentity:(_Bool)arg2 navigationController:(id)arg3 verifyContinueBlock:(CDUnknownBlockType)arg4;
+ (CDUnknownBlockType)getFinderExitAddictBlockBy:(id)arg1;
- (void)antiCheckViewDidAppear:(_Bool)arg1 scene:(unsigned long long)arg2;
- (void)antiCheckViewWillAppear:(_Bool)arg1 scene:(unsigned long long)arg2;
- (_Bool)triggerAntiAddictCheckFromVC:(id)arg1 scene:(unsigned long long)arg2;
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

