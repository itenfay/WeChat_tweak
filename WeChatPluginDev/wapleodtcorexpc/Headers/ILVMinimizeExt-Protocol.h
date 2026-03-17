//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class LVMinimizeContext;

@protocol ILVMinimizeExt <NSObject>
- (void)onLVMinimizePaused:(LVMinimizeContext *)arg1;
- (void)onLVMinimizePlay:(LVMinimizeContext *)arg1;
- (void)onLVMinimizeDeactive:(LVMinimizeContext *)arg1;
- (void)onLVMinimizeActive:(LVMinimizeContext *)arg1;
@end

