//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMDynamicColor;

@protocol MMKDashLineView <MMKView>
- (_Bool)getVertical;
- (void)setVertical:(_Bool)arg1;
- (MMDynamicColor *)getDashColor;
- (void)setDashColor:(MMDynamicColor *)arg1;
- (float)getDashWidth;
- (void)setDashWidth:(float)arg1;
@end

