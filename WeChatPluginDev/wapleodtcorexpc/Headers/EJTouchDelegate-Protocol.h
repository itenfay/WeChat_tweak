//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSSet, NSString;

@protocol EJTouchDelegate <NSObject>
- (unsigned long long)pointInside:(struct CGPoint)arg1;
- (void)triggerEvent:(NSString *)arg1 timestamp:(double)arg2 all:(NSSet *)arg3 changed:(NSSet *)arg4 remaining:(NSSet *)arg5;
@end

