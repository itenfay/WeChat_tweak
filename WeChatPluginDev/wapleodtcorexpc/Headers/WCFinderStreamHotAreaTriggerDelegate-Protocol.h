//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSObject, UIView;

@protocol WCFinderStreamHotAreaTriggerDelegate <NSObject>
- (void (^)(void))hotAreaCell:(UIView *)arg1 releaseFocus:(NSObject *)arg2;
- (void)hotAreaCell:(UIView *)arg1 acquireFocus:(NSObject *)arg2;
- (NSObject *)identifierForSupportFocusCell:(NSIndexPath *)arg1 cell:(UIView *)arg2 distance:(double *)arg3;
@end

