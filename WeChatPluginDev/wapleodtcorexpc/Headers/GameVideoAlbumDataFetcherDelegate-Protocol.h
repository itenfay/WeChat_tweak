//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GameVideoAlbumDataFetcher, NSArray, NSError;

@protocol GameVideoAlbumDataFetcherDelegate <NSObject>
- (void)albumDataFetcher:(GameVideoAlbumDataFetcher *)arg1 didReceivedRecommendVideoList:(NSArray *)arg2;
- (void)albumDataFetcher:(GameVideoAlbumDataFetcher *)arg1 didFailedWithError:(NSError *)arg2;
- (void)albumDataFetcher:(GameVideoAlbumDataFetcher *)arg1 didReceivedVideoList:(NSArray *)arg2;
@end

