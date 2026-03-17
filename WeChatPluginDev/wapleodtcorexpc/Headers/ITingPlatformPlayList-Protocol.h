//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol TingPlayListListener;

@protocol ITingPlatformPlayList <NSObject>
- (NSArray *)getItems;
- (_Bool)hasMore;
- (void)loadMore;
- (void)applyListListener:(id <TingPlayListListener>)arg1;
@end

