//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, NSArray, NSMutableDictionary, WCDataItem, WCMicroMerchantFeedsGroup, WCTimeLineVideoPreloadMgr;

@interface MicroMerchantTableViewModel : NSObject
{
    _Bool _isUnfoldEnabled;
    _Bool _isUnfolded;
    WCDataItem *_placeHolder;
    WCMicroMerchantFeedsGroup *_wcGroup;
    CContact *_placeHolderContact;
    NSMutableDictionary *_preloadedImageSet;
    WCTimeLineVideoPreloadMgr *_videoPreloadMgr;
    NSArray *_initialWSFeedList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *initialWSFeedList; // @synthesize initialWSFeedList=_initialWSFeedList;
@property(nonatomic) _Bool isUnfolded; // @synthesize isUnfolded=_isUnfolded;
@property(nonatomic) _Bool isUnfoldEnabled; // @synthesize isUnfoldEnabled=_isUnfoldEnabled;
@property(retain, nonatomic) WCTimeLineVideoPreloadMgr *videoPreloadMgr; // @synthesize videoPreloadMgr=_videoPreloadMgr;
@property(retain, nonatomic) NSMutableDictionary *preloadedImageSet; // @synthesize preloadedImageSet=_preloadedImageSet;
@property(retain, nonatomic) CContact *placeHolderContact; // @synthesize placeHolderContact=_placeHolderContact;
@property(retain, nonatomic) WCMicroMerchantFeedsGroup *wcGroup; // @synthesize wcGroup=_wcGroup;
@property(retain, nonatomic) WCDataItem *placeHolder; // @synthesize placeHolder=_placeHolder;
- (id)_hostContactOfWCDataItem:(id)arg1;
- (id)unfoldConfirmTitle;
- (id)alreadyUnfoldedTitle;
- (id)unfoldButtonTitle;
- (_Bool)unfoldCurrentTimeline;
- (_Bool)isCurrentTimelineUnfolded;
- (_Bool)canUnfoldTimeline;
- (void)clearPreloadImage;
- (void)stopPreloadVideoData:(id)arg1;
- (void)preloadVideoDatas:(id)arg1 lastAutoPlayID:(id)arg2;
- (void)preloadImageDatas:(id)arg1;
- (unsigned long long)sectionIndexWithFeedID:(id)arg1;
- (id)sectionFeedModelWithFeedID:(id)arg1;
- (id)sectionFeedModel:(long long)arg1;
- (long long)numberOfSections;
- (_Bool)isLastSection:(long long)arg1;
- (id)_wsFeedListFromMgr;
- (id)dataItems;
- (id)getDataItemInCache:(id)arg1;
- (void)reloadDataFromServer:(CDUnknownBlockType)arg1;
- (void)clearFeedListCache;
- (void)dealloc;
- (void)initDatas;
- (id)initWithGroupItem:(id)arg1 ofPlaceHolder:(id)arg2;

@end

