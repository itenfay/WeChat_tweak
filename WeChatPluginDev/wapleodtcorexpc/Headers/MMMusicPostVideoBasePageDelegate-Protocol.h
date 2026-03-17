//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicFinderVideoCellModel, MMMusicPostVideoBasePageController, UIImage;

@protocol MMMusicPostVideoBasePageDelegate <NSObject>
- (void)mmMusicPostVideoTabFinderBasePageController:(MMMusicPostVideoBasePageController *)arg1 onTabFinderCellSelectedBtnChecked:(MMMusicFinderVideoCellModel *)arg2;
- (void)onPageSelectVideo:(MMMusicFinderVideoCellModel *)arg1 thumbImage:(UIImage *)arg2 cellFrameInVCAcquireBlock:(struct CGRect (^)(void))arg3 contentOffsetResetBlock:(void (^)(void))arg4;
@end

