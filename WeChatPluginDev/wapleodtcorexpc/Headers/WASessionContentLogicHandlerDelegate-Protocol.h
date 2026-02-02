//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSString, UINavigationController, WASessionContentViewController;

@protocol WASessionContentLogicHandlerDelegate <NSObject>
- (NSString *)getFromPagePath;
- (NSString *)getFatherAppid;
- (unsigned long long)getDebugMode;
- (unsigned int)getAppVersion;
- (NSString *)getSessionSceneID;
- (NSString *)getSessionContentPageID;
- (unsigned long long)getSessionContentEnterScene;
- (WASessionContentViewController *)getSessionContentViewController;
- (UINavigationController *)getSessionContentNavigationController;
- (CContact *)getSessionContentContact;
@end

