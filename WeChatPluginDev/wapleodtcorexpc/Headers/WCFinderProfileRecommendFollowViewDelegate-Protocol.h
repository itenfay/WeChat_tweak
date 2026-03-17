//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderContact, WCFinderProfileRecommendFollowView;

@protocol WCFinderProfileRecommendFollowViewDelegate <NSObject>
- (void)onProfileRecommendFollowViewClickMore:(WCFinderProfileRecommendFollowView *)arg1;
- (void)onProfileRecommendFollowView:(WCFinderProfileRecommendFollowView *)arg1 clickContact:(WCFinderContact *)arg2 recommandReason:(NSString *)arg3 index:(long long)arg4;

@optional
- (void)onProfileRecommendFollowViewExposeMore:(WCFinderProfileRecommendFollowView *)arg1;
- (void)onProfileRecommendFollowView:(WCFinderProfileRecommendFollowView *)arg1 exposeContact:(WCFinderContact *)arg2 recommandReason:(NSString *)arg3 index:(long long)arg4;
@end

