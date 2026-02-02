//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderContact;

@protocol WCFinderFriendsAlsoFollowViewModelDelegate <NSObject>

@optional
- (void)onContactFollowStateUpdate:(WCFinderContact *)arg1 atIndex:(unsigned long long)arg2;
@end

