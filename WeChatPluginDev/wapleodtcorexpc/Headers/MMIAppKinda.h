//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMIAppKinda : NSObject
{
    struct Handle<std::shared_ptr<kinda::IAppKinda>> _cppRefHandle;
}

+ (id)getInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)notifyScreenCapture;
- (void)applicationRestart;
- (void)takeScreenshot;
- (void)networkChange:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationReceiveMemoryWarning:(id)arg1;
- (void)applicationResignActive;
- (void)applicationBecomeActive;
- (void)applicationEnterForeground;
- (void)applicationEnterBackground;
- (void)notifyHKOfflineNewXml:(id)arg1;
- (void)checkIfNeedRequestUserBindqueryWhenUnBindCard:(id)arg1;
- (void)updateOfflinePayDefaultCard:(id)arg1 bankType:(id)arg2;
- (void)checkIfNeedUpdateOfflinePayToken;
- (void)updateOfflinePayTokenWithScene:(int)arg1;
- (_Bool)checkOfflineReady;
- (void)notifyAllUseCases:(id)arg1;
- (_Bool)getIsPaying;
- (void)popToUseCase:(id)arg1;
- (_Bool)isUseCaseAlive:(id)arg1;
- (id)getUseCaseInStack:(id)arg1;
- (id)getUseCaseInStackWithData:(id)arg1 data:(id)arg2;
- (_Bool)isInAnyUseCase;
- (void)stopUseCase:(id)arg1;
- (id)startUseCase:(id)arg1 data:(id)arg2 callback:(id)arg3;
- (id)initWithCpp:(const void *)arg1;

@end

