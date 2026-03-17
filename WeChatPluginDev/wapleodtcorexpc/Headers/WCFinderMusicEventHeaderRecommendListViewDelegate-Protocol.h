//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MusicRelatedRecommendInfo_RecommendMusic;

@protocol WCFinderMusicEventHeaderRecommendListViewDelegate <NSObject>
- (void)finderMusicEventHeaderRecommendListViewDidClickRecommendMusicActionButtonWithMusicInfo:(MusicRelatedRecommendInfo_RecommendMusic *)arg1;
- (void)finderMusicEventHeaderRecommendListViewDidClickTemplateActionButton;
- (void)finderMusicEventHeaderRecommendListViewDidReloadData;
@end

