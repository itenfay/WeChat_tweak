//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderCollectionInfo, NSArray, UIView;

@protocol WCFinderProfileCollectionListViewDelegate <NSObject>
- (void)setupReportWithCollectionItemButtons:(NSArray *)arg1;
- (void)setupReportWithNextEpisodeBtn:(UIView *)arg1 allEpisodeBtn:(UIView *)arg2 moreBtn:(UIView *)arg3;
- (void)collectionListDisplayHeightChanged;
- (void)clickedMoreButton;
- (void)clickedCollectionItemWithInfo:(FinderCollectionInfo *)arg1;
- (void)clickedAllEpisodeButton;
- (void)clickedNextEpisodeButton;
@end

