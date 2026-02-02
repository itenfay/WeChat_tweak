//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderDataItem, WCFinderShareToMomentsItem;

@interface WCFinderShareFeedCellViewModel
{
    WCFinderDataItem *_dataItem;
    WCFinderShareToMomentsItem *_item;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (double)adjustImageRatioBy:(struct CGSize)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderShareToMomentsItem *item; // @synthesize item=_item;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (_Bool)isMemberShipFeed;
- (unsigned long long)authIconType;
- (id)authIconURL;
- (id)getReferImage;
- (id)getReferImageViewWithSize:(struct CGSize)arg1;
- (_Bool)hasReferImage;
- (id)accessibilityMessageType;
- (id)additionalAccessibilityDescription;
- (id)fullClipInset;
- (_Bool)hadFullInfo;
@property(readonly, nonatomic) double estimateWidth;
- (struct CGSize)pureTextContentViewSize;
- (struct CGSize)defaultContentViewSize;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;
- (void)exposeReport;
- (unsigned long long)mediaPhotoCount;
- (id)desc;
- (_Bool)isLongVideo;
- (_Bool)isVideo;
- (id)fullCoverUrl;
- (id)coverUrl;
- (double)adjustImageRatio;
- (struct CGSize)imageSize;
- (id)nickname;
- (id)avatarUrl;
- (_Bool)isLive;
- (id)refObjectTid;
- (_Bool)isPureText;

@end

