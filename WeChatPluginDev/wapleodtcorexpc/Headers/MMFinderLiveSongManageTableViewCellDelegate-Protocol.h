//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveSongManageTableViewCell;

@protocol MMFinderLiveSongManageTableViewCellDelegate <NSObject>

@optional
- (void)onSongTableViewCellNeedResetWhenReceiveNewTouches:(MMFinderLiveSongManageTableViewCell *)arg1;
- (void)onSongTableViewCellDidFinishOrder:(MMFinderLiveSongManageTableViewCell *)arg1;
- (void)onSongTableViewCellDidSelect:(MMFinderLiveSongManageTableViewCell *)arg1;
@end

