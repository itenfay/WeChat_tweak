//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPIOSAppStateObserverImpl : NSObject
{
    int _appState;
}

+ (id)sharedInstance;
@property int appState; // @synthesize appState=_appState;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)unregisterApplicationObservers;
- (void)registerApplicationObservers;
- (void)checkSetupState;
- (void)dealloc;
- (id)init;

@end

