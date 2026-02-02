//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveAddNewSongPanel, NSArray;

@protocol MMFinderLiveAddNewSongPanelDelegate <NSObject>
- (void)addSongPanel:(MMFinderLiveAddNewSongPanel *)arg1 didCloseWithLatestSongs:(NSArray *)arg2;
@end

