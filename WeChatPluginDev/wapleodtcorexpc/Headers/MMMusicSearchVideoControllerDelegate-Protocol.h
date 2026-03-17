//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicFinderVideoCellModel, MMMusicSearchVideoController, NSString, UIImage;

@protocol MMMusicSearchVideoControllerDelegate <NSObject>
- (void)mmMusicSearchVideoController:(MMMusicSearchVideoController *)arg1 onSearchFinderCellSelectedBtnChecked:(MMMusicFinderVideoCellModel *)arg2;
- (void)onSelectSearchResultVideo:(MMMusicFinderVideoCellModel *)arg1 thumbImage:(UIImage *)arg2 cellFrameInVCAcquireBlock:(struct CGRect (^)(void))arg3 contentOffsetResetBlock:(void (^)(void))arg4;
- (void)onExitSearchMode;
- (void)onEnterSearchMode;
- (void)onSearch:(NSString *)arg1;
@end

