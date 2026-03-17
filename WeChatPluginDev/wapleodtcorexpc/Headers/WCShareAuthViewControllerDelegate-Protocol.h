//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableDictionary, NSString, WCShareAuthViewController;

@protocol WCShareAuthViewControllerDelegate <NSObject>

@optional
- (void)shareAuthViewControllerDidSuccess:(WCShareAuthViewController *)arg1 redirectUrl:(NSString *)arg2 extraInfo:(NSMutableDictionary *)arg3;
- (NSString *)makeBizCustomLinkIfNeed;
- (void)shareAuthViewControllerDidRedirect:(WCShareAuthViewController *)arg1;
- (void)shareAuthViewControllerDidFail:(WCShareAuthViewController *)arg1;
- (void)shareAuthViewControllerDidCancel:(WCShareAuthViewController *)arg1;
@end

