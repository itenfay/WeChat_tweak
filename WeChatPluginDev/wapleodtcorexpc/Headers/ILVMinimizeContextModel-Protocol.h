//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MegaVideoPlayerDetailOpenParam, WCFinderFeedContentVM;

@protocol ILVMinimizeContextModel <NSObject>
- (int)listType;
- (MegaVideoPlayerDetailOpenParam *)openParam;
- (void)fetchContinuePlayFeed;
- (void)updatePlayingContentVM:(WCFinderFeedContentVM *)arg1 isFromContinuePlay:(_Bool)arg2;
- (WCFinderFeedContentVM *)nextContentVM;
- (WCFinderFeedContentVM *)playingContentVM;
@end

