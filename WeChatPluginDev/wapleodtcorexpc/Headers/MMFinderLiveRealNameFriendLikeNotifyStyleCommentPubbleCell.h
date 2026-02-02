//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveRealNameFriendLikeCommentDataItem, MMFinderLiveRealNameFriendLikeNotificationView;

@interface MMFinderLiveRealNameFriendLikeNotifyStyleCommentPubbleCell
{
    MMFinderLiveRealNameFriendLikeNotificationView *_notificationView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveRealNameFriendLikeNotificationView *notificationView; // @synthesize notificationView=_notificationView;
@property(readonly, nonatomic) MMFinderLiveRealNameFriendLikeCommentDataItem *friendLikeDataItem;
- (void)setCellFrame:(id)arg1;
- (void)layoutNotificationView;
- (_Bool)isUITypeValid;
- (void)layoutUI;
- (void)updateBackGroundColor;
- (void)prepareForReuse;
- (id)initWithCellFrame:(id)arg1;

@end

