//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol LiteAppParentViewControllerDelegate <NSObject>
- (void)setTitleBackgroundColor:(unsigned long long)arg1 darkMode:(_Bool)arg2 pageId:(unsigned long long)arg3;
- (void)onCheckLiteAppVersionError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onCheckBaseLibSumFail:(NSString *)arg1;
- (void)onCheckSumFail:(NSString *)arg1;
- (void)setIsPopGestureEnable:(_Bool)arg1;
- (_Bool)forbidRightGesture;

@optional
- (void)onLayoutComplete:(NSString *)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (void)setCanOverScroll:(_Bool)arg1;
- (void)setForbidRightGestureEnable:(_Bool)arg1;
- (void)onBodySizeChange:(NSString *)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
@end

