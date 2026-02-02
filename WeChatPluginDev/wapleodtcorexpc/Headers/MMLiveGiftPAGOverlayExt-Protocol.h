//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveTaskId, NSString;

@protocol MMLiveGiftPAGOverlayExt <NSObject>
- (void)onGiftPAGViewDisappear:(NSString *)arg1 taskId:(MMLiveTaskId *)arg2;
- (void)onGiftPAGViewDisplay:(NSString *)arg1 content:(NSString *)arg2 taskId:(MMLiveTaskId *)arg3;
@end

