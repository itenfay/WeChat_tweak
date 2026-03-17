//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;

@protocol WCAdOpenAdCanvasJsLogicDelegate <NSObject>
- (UIViewController *)getViewController;
- (void)showLoading:(_Bool)arg1;
- (void)onOpenAdCanvasFinish:(_Bool)arg1 msg:(NSString *)arg2;
@end

