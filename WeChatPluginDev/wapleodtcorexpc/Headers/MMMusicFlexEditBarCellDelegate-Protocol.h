//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicFlexEditBarCell;

@protocol MMMusicFlexEditBarCellDelegate <NSObject>
- (double)mvFlexEditBarCellWidthPerSecond:(MMMusicFlexEditBarCell *)arg1;
- (_Bool)mvFlexEditBarCell:(MMMusicFlexEditBarCell *)arg1 isInSortMode:(unsigned long long)arg2;
- (_Bool)mvFlexEditBarCell:(MMMusicFlexEditBarCell *)arg1 isGhostCell:(unsigned long long)arg2;
- (double)cellWidthForIndex:(unsigned long long)arg1;
- (double)cellOffsetForIndex:(unsigned long long)arg1;
- (void)cellThumbImageForTimeSec:(double)arg1 cellIndex:(unsigned long long)arg2 blockOnGetThumbImage:(void (^)(UIImage *))arg3;
- (void)onTapCell:(unsigned long long)arg1;
@end

