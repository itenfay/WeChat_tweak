//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMAppSceneUtil : NSObject
{
}

+ (_Bool)isiPadLayoutScene:(id)arg1;
+ (_Bool)isMainSceneInExternalDisplay;
+ (_Bool)isExternalDisplayConnected;
+ (_Bool)isMainScene:(id)arg1;
+ (id)lastActiveSceneRootWindow;
+ (id)lastActiveWindowScene;
+ (id)subWindowScene;
+ (id)mainWindowScene;
+ (_Bool)isShowInSubScene:(id)arg1;
+ (_Bool)isMainSceneActive;
+ (_Bool)isSubSceneActive;
+ (_Bool)isMultiSceneSupported;

@end

