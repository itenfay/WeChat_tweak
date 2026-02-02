//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderMention;

@protocol MMLiveSystemMentionsViewDelegate <NSObject>

@optional
- (void)onLiveSystemMentionsDismiss:(id)arg1;
- (_Bool)onNeedJumpWithMention:(WCFinderMention *)arg1;
- (void)onLiveSystemMentionsClick:(id)arg1;
@end

