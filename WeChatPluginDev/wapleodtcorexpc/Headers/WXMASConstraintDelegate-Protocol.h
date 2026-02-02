//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WXMASConstraint;

@protocol WXMASConstraintDelegate <NSObject>
- (WXMASConstraint *)constraint:(WXMASConstraint *)arg1 addConstraintWithLayoutAttribute:(long long)arg2;
- (void)constraint:(WXMASConstraint *)arg1 shouldBeReplacedWithConstraint:(WXMASConstraint *)arg2;
@end

