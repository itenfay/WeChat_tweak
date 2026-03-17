//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderJumpInfoViewBaseDelegate-Protocol.h"

@class WCFinderSubtitleBubble;

@protocol WCFinderSubtitleBubbleDelegate <WCFinderJumpInfoViewBaseDelegate>
- (void)clickedCollectionNextEpisodeButton:(WCFinderSubtitleBubble *)arg1;
- (void)onClickSubtitleBubble:(WCFinderSubtitleBubble *)arg1;
- (void)updateCurLayout:(WCFinderSubtitleBubble *)arg1;
@end

