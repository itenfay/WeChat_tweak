//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class StorageDeleteInfoCell;

@protocol StorageDeleteInfoCellDelegate <NSObject>
- (void)onDeleteInfoCellShowDetail:(StorageDeleteInfoCell *)arg1;
- (void)onDeleteinfoCellShowSourceImg:(StorageDeleteInfoCell *)arg1;
@end

