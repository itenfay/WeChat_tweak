//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "LOTValueDelegate-Protocol.h"

@protocol LOTColorValueDelegate <LOTValueDelegate>
- (struct CGColor *)colorForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startColor:(struct CGColor *)arg5 endColor:(struct CGColor *)arg6 currentColor:(struct CGColor *)arg7;
@end

