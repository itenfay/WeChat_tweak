//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray;

@protocol WCFinderLiveRosterSelectDelegate <NSObject>

@optional
- (void)onWCFinderLiveRosterSelectFinishWithVisibilityIdList:(NSMutableArray *)arg1 visibilityMode:(long long)arg2 liveMode:(long long)arg3;
- (void)onWCFinderLiveRosterSelectCancel;
@end

