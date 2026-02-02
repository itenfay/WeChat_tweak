//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicFinderVideoCellModel, MMMusicPostVideoTabFinderController, NSString, UIImage;

@protocol MMMusicPostVideoTabFinderControllerDelegate <NSObject>
- (void)mmMusicPostVideoTabFinderController:(MMMusicPostVideoTabFinderController *)arg1 onFinderCellSelectedBtnChecked:(MMMusicFinderVideoCellModel *)arg2;
- (void)onSelectFinderSearchResultVideo:(MMMusicFinderVideoCellModel *)arg1 thumbImage:(UIImage *)arg2 cellFrameInVCAcquireBlock:(struct CGRect (^)(void))arg3 contentOffsetResetBlock:(void (^)(void))arg4;
- (void)onSelectFinderResultVideo:(MMMusicFinderVideoCellModel *)arg1 thumbImage:(UIImage *)arg2 cellFrameInVCAcquireBlock:(struct CGRect (^)(void))arg3 contentOffsetResetBlock:(void (^)(void))arg4;
- (void)onExitTabFinderSearchMode;
- (void)onEnterTabFinderSearchMode;
- (void)onTabFinderSearch:(NSString *)arg1;
@end

