//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface NSObject (GCThrottle)
- (void)checkNil;
- (void)checkShouldDeallocAfterTime:(double)arg1;
- (void)checkShouldDeallocAfter5;
- (_Bool)performSelector:(SEL)arg1 withObject:(id)arg2 withMinInterval:(double)arg3;
@end

