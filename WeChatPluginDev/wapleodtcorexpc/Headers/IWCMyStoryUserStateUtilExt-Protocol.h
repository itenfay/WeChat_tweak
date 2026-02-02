//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IWCMyStoryUserStateUtilExt <NSObject>

@optional
- (void)onUserRecoverHideStoryWithUserName:(NSString *)arg1;
- (void)userDeleteStoryWithUserName:(NSString *)arg1;
- (void)onClearUnreadStoryMarkWithUserName:(NSString *)arg1;
- (void)onSetUnreadStoryMarkWithUserName:(NSString *)arg1;
@end

