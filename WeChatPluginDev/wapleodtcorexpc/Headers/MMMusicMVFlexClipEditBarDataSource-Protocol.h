//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicMVFlexClipEditBar, NSMutableArray;

@protocol MMMusicMVFlexClipEditBarDataSource <NSObject>
- (double)mvFlexClipEditBarWidthPerSecond:(MMMusicMVFlexClipEditBar *)arg1;
- (void)thumbImageForTimeSec:(double)arg1 cellIndex:(unsigned long long)arg2 blockOnGetThumbImage:(void (^)(UIImage *))arg3;
- (_Bool)canDragSideWithIndex:(unsigned long long)arg1;
- (double)mvFlexClipEditBar:(MMMusicMVFlexClipEditBar *)arg1 maxDurationInSecondWithItemIndex:(unsigned long long)arg2;
- (double)mvFlexClipEditBar:(MMMusicMVFlexClipEditBar *)arg1 offsetInSecondWithItemIndex:(unsigned long long)arg2;
- (double)mvFlexClipEditBar:(MMMusicMVFlexClipEditBar *)arg1 durationInSecondWithItemIndex:(unsigned long long)arg2;
- (_Bool)mvFlexClipEditBarHasPlaceholderItem:(MMMusicMVFlexClipEditBar *)arg1;
- (long long)numberOfItems;

@optional
- (NSMutableArray *)mvFlexClipEditBarGetGhostIndexArr:(MMMusicMVFlexClipEditBar *)arg1;
- (_Bool)mvFlexClipEditBarSupportGhostMaterial:(MMMusicMVFlexClipEditBar *)arg1;
- (void)mvFlexClipEditBar:(MMMusicMVFlexClipEditBar *)arg1 didTransitionCellClickedWithPreIndex:(unsigned long long)arg2 andNextIndex:(unsigned long long)arg3;
- (_Bool)mvFlexClipEditBar:(MMMusicMVFlexClipEditBar *)arg1 isModifyTransitionWithPreIndex:(unsigned long long)arg2 andNextIndex:(unsigned long long)arg3;
- (_Bool)mvFlexClipEditBarSupportTransitionSelection:(MMMusicMVFlexClipEditBar *)arg1;
- (_Bool)mvFlexClipEditBar:(MMMusicMVFlexClipEditBar *)arg1 shouldShowSelectedCellProgressLineWithIndex:(unsigned long long)arg2;
@end

