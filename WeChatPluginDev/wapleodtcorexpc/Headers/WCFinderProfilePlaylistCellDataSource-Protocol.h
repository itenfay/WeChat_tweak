//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderProfilePlaylistCell;

@protocol WCFinderProfilePlaylistCellDataSource <NSObject>
- (void)playListCell:(WCFinderProfilePlaylistCell *)arg1 onClickCellAtIndex:(long long)arg2;
- (struct WCFinderProfilePlaylistItem)playListCell:(WCFinderProfilePlaylistCell *)arg1 itemAtIndex:(long long)arg2;
- (long long)numberOfPlayListCell:(WCFinderProfilePlaylistCell *)arg1;
@end

