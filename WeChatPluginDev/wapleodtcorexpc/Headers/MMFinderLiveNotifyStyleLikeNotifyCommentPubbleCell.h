//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveLikeNotifyDataItem, NSMutableArray;

@interface MMFinderLiveNotifyStyleLikeNotifyCommentPubbleCell
{
    NSMutableArray *_headImageViewList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *headImageViewList; // @synthesize headImageViewList=_headImageViewList;
@property(readonly, nonatomic) MMFinderLiveLikeNotifyDataItem *likeNotifyDataItem;
- (void)updateHeadImageViewsOrigin;
- (void)layoutHeadImageViews;
- (void)updateCommentLabelOrigin;
- (_Bool)isUITypeValid;
- (void)layoutUI;
- (void)updateBackGroundColor;
- (id)initWithCellFrame:(id)arg1;

@end

