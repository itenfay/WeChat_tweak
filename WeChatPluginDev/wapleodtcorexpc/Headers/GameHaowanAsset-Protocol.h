//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GameHaowanAlbumVideoItem, NSString;

@protocol GameHaowanAsset <NSObject>
- (GameHaowanAlbumVideoItem *)videoItem;
- (_Bool)isOnlineVideo;
- (NSString *)appId;
- (NSString *)gameName;
- (NSString *)subtitle;
- (NSString *)title;
@end

