//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderBannerExtInfo, FinderLiveRelatedExtInfo, FinderLiveStreamCard, NSArray, NSString;

@interface WCFinderLiveFeedContentVM
{
    NSString *_sortID;
    FinderLiveStreamCard *_liveStreamCard;
    FinderLiveRelatedExtInfo *_relatedExtInfo;
    NSString *_objectWording;
    NSArray *_cardFeedArray;
    FinderBannerExtInfo *_bannerExtInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderBannerExtInfo *bannerExtInfo; // @synthesize bannerExtInfo=_bannerExtInfo;
@property(copy, nonatomic) NSArray *cardFeedArray; // @synthesize cardFeedArray=_cardFeedArray;
@property(retain, nonatomic) NSString *objectWording; // @synthesize objectWording=_objectWording;
@property(retain, nonatomic) FinderLiveRelatedExtInfo *relatedExtInfo; // @synthesize relatedExtInfo=_relatedExtInfo;
@property(retain, nonatomic) FinderLiveStreamCard *liveStreamCard; // @synthesize liveStreamCard=_liveStreamCard;
@property(copy, nonatomic) NSString *sortID; // @synthesize sortID=_sortID;
- (void)setupContentDatas:(id)arg1;
- (void)setupWithLiveCard:(id)arg1;
- (id)initWithLiveStreamCard:(id)arg1 scene:(int)arg2 dataScene:(id)arg3;

@end

