//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicFinderVideoCellModel, MMMusicPostVideoCollectionCell;

@protocol MMMusicPostVideoCollectionCellDelegate <NSObject>

@optional
- (void)mmMusicPostVideoCollectionCell:(MMMusicPostVideoCollectionCell *)arg1 onSelectedBtnClicked:(MMMusicFinderVideoCellModel *)arg2;
@end

