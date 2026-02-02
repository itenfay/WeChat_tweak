//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicMVFlexClipEditBar;

@protocol MMMusicMVFlexClipEditBarDelegate <NSObject>
- (void)mvFlexClipEditBar:(MMMusicMVFlexClipEditBar *)arg1 onPinchGestureRecognizerStateChanged:(long long)arg2;
- (_Bool)mvFlexClipEditBar:(MMMusicMVFlexClipEditBar *)arg1 shouldHandleLongPressGestureEndAtPoint:(struct CGPoint)arg2 cellIndex:(long long)arg3;
- (void)mvFlexClipEditBar:(MMMusicMVFlexClipEditBar *)arg1 didChangeLongPressLocation:(struct CGPoint)arg2 cellIndex:(long long)arg3;
- (void)mvFlexClipEditBar:(MMMusicMVFlexClipEditBar *)arg1 onDeselectCellWithCancelBtnClick:(unsigned long long)arg2;
- (void)mvFlexClipEditBar:(MMMusicMVFlexClipEditBar *)arg1 onDeselectCellWithDoneBtnClick:(unsigned long long)arg2;
- (void)onDidSortFromCellIndex:(unsigned long long)arg1 toCellIndex:(unsigned long long)arg2;
- (void)onWillSortFromCellIndex:(unsigned long long)arg1 toCellIndex:(unsigned long long)arg2;
- (void)onWillEnterSortMode;
- (void)onDeselectCell:(unsigned long long)arg1;
- (void)onSelectCell:(unsigned long long)arg1;
- (void)onScrollEnd;
- (void)onDragSideEnd;
- (void)onMusicFlexClipEditBarDragSideBegin:(MMMusicMVFlexClipEditBar *)arg1;
- (void)onCurTimeChangedTo:(double)arg1;
- (void)onLongPressFromOldIndex:(unsigned long long)arg1 toNewIndex:(unsigned long long)arg2;
- (void)onCellNeetUpdateWidth:(double)arg1 index:(unsigned long long)arg2;
- (void)onCellNeetUpdateOffset:(double)arg1 index:(unsigned long long)arg2;
@end

