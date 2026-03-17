//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetUserRankLikeCountResponse, NSArray, NSString;

@protocol IDeviceRankSnsMgrExt

@optional
- (void)onReceivedRankingResp:(GetUserRankLikeCountResponse *)arg1 rankId:(NSString *)arg2 success:(_Bool)arg3;
- (void)onLikeFriendRank:(NSArray *)arg1 optype:(unsigned int)arg2 err:(int)arg3;
@end

