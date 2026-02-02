//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol CaraNativeDiscoverViewFeatureCenterBase <NSObject>

@optional
- (NSString *)titleOfBadgeAtLiveCell;
- (NSString *)anchorOfBadgeAtLiveCell;
- (int)unreadAtLiveCell;
- (_Bool)badgeAtLiveCell;
- (int)unreadAtChannelsCell;
- (_Bool)badgeAtChannelsCell;
- (_Bool)badgeAtTopStoriesCell;
- (int)unreadAtTopStoriesCell;
- (_Bool)badgeAtMomentsCell;
- (int)unreadAtMomentsCell;
- (_Bool)badgeAtDiscover;
- (int)unreadAtDiscover;
@end

