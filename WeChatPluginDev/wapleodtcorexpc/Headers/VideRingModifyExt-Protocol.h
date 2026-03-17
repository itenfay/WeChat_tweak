//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class RingTone;

@protocol VideRingModifyExt <NSObject>

@optional
- (void)onExclusiveRingModified:(RingTone *)arg1 opType:(unsigned long long)arg2;
- (void)onGlobalRingModified:(RingTone *)arg1 opType:(unsigned long long)arg2;
@end

