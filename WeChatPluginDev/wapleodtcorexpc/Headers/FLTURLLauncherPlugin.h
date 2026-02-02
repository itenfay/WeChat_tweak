//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FLTURLLaunchSession, NSString;

@interface FLTURLLauncherPlugin : NSObject
{
    FLTURLLaunchSession *_currentSession;
}

+ (void)registerWithRegistrar:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FLTURLLaunchSession *currentSession; // @synthesize currentSession=_currentSession;
- (id)topViewControllerFromViewController:(id)arg1;
- (id)topViewController;
- (void)closeWebViewWithResult:(CDUnknownBlockType)arg1;
- (void)launchURLInVC:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)launchURL:(id)arg1 call:(id)arg2 result:(CDUnknownBlockType)arg3;
- (_Bool)canLaunchURL:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

