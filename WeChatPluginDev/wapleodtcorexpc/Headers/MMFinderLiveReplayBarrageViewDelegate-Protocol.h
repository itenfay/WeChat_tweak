//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveReplayBarrageView, MMLiveCommentDataItem;

@protocol MMFinderLiveReplayBarrageViewDelegate <NSObject>
- (void)barrageView:(MMFinderLiveReplayBarrageView *)arg1 reportCommentItem:(MMLiveCommentDataItem *)arg2;
- (void)barrageViewDidHideOperationMenu:(MMFinderLiveReplayBarrageView *)arg1;
- (void)barrageViewDidShowOperationMenu:(MMFinderLiveReplayBarrageView *)arg1;
@end

