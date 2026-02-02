//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderMusicInfo, FinderMusicTopicInfo, MMMusicInfo, MusicRelatedRecommendInfo_RecommendMusic, NSMutableArray, NSString, WCFinderContact;

@protocol WCFinderMusicHeaderViewDelegate <NSObject>
- (void)onMusicEventHeaderClickRecommendMusicActionButtonWithMusicInfo:(MusicRelatedRecommendInfo_RecommendMusic *)arg1;
- (void)onMusicEventHeaderClickLikeEduBubble;
- (void)onMusicEventHeaderClickLikeBtn:(FinderMusicTopicInfo *)arg1;
- (void)onMusicEventHeaderClickRingBtn:(FinderMusicInfo *)arg1;
- (void)onMusicEventHeaderClickJoinBtn:(FinderMusicInfo *)arg1 musicIdPrefix:(NSString *)arg2;
- (void)onMusicEventPlayBtnStateChanged:(long long)arg1 musicInfo:(MMMusicInfo *)arg2;
- (void)onMusicEventHeaderViewClickProfile:(NSMutableArray *)arg1 contactInfo:(WCFinderContact *)arg2;
- (void)onMusicEventHeaderViewClickFavBtn:(MMMusicInfo *)arg1;

@optional
- (void)onMusicEventHeaderClickTemplate;
@end

