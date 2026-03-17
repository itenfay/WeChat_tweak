//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CaraAppleDiscoverViewFeatureCenter : NSObject
{
}

- (id)titleOfBadgeAtLiveCell;
- (id)anchorOfBadgeAtLiveCell;
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
- (id)findFriendEntryViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

