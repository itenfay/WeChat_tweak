//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderMentionTitleView;

@protocol WCFinderMentionTitleViewDelegate <NSObject>

@optional
- (void)onMentionTitleViewClickFollowButton:(WCFinderMentionTitleView *)arg1;
- (void)onMentionTitleViewClickUserRelationshipTag:(WCFinderMentionTitleView *)arg1;
@end

