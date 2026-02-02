//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "LiteAppParentViewControllerDelegate-Protocol.h"

@class NSString;

@protocol LiteAppWidgetParentViewControllerDelegate <LiteAppParentViewControllerDelegate>
- (void)setDarkModeDidChangeBlock:(unsigned int)arg1 block:(void (^)(_Bool))arg2;
- (void)setViewWillDisappearBlock:(unsigned int)arg1 block:(void (^)(void))arg2;
- (void)setStatusBarHidden:(unsigned int)arg1 hidden:(_Bool)arg2;
- (void)setHomeIndicatorAutoHidden:(unsigned int)arg1 hidden:(_Bool)arg2;
- (void)setPageOrientation:(unsigned int)arg1 pageOrientation:(int)arg2 landScapeOrientation:(unsigned long long)arg3;
- (void)setFlagsConfig:(unsigned int)arg1 flags:(int)arg2;
- (void)liteAppDestroy:(NSString *)arg1 appUuid:(unsigned int)arg2;
- (void)liteAppInit:(NSString *)arg1 appUuid:(unsigned int)arg2;
@end

