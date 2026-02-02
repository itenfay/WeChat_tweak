//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFollowNotifyDataItem, NSMutableArray;

@interface MMFinderLiveNotifyStyleFollowNotifyCommentPubbleCell : NSObject
{
    NSMutableArray *_headImageViewList;
}

@property(retain, nonatomic) NSMutableArray *headImageViewList; // @synthesize headImageViewList=_headImageViewList;
@property(readonly, nonatomic) MMFinderLiveFollowNotifyDataItem *followNotifyDataItem;
- (void)updateHeadImageViewsOrigin;
- (void)layoutHeadImageViews;
- (void)updateCommentLabelOrigin;
- (_Bool)isUITypeValid;
- (void)layoutUI;
- (void)updateBackGroundColor;
- (id)initWithCellFrame:(id)arg1;

@end

