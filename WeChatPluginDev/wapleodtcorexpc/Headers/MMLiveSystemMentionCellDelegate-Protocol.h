//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveSystemMentionCell, WCFinderMention;

@protocol MMLiveSystemMentionCellDelegate <NSObject>

@optional
- (void)onLiveSystemMentionsCellCloseBtnClick:(MMLiveSystemMentionCell *)arg1;
- (void)onLiveSystemMentionsCellClick:(MMLiveSystemMentionCell *)arg1 mention:(WCFinderMention *)arg2;
@end

