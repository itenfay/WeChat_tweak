//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveContact, NSMutableArray;

@interface MMFinderLiveRecentRewardUserItem
{
    _Bool _unfold;
    FinderLiveContact *_liveContact;
    NSMutableArray *_recentRewardGiftItems;
    double _unfoldHeight;
}

+ (id)batchConvert:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double unfoldHeight; // @synthesize unfoldHeight=_unfoldHeight;
@property(nonatomic) _Bool unfold; // @synthesize unfold=_unfold;
@property(retain, nonatomic) NSMutableArray *recentRewardGiftItems; // @synthesize recentRewardGiftItems=_recentRewardGiftItems;
@property(retain, nonatomic) FinderLiveContact *liveContact; // @synthesize liveContact=_liveContact;
- (id)userName;
- (double)preCalculateGiftsFirstLineLengthAtWidth:(double)arg1;
- (double)preCalculateHeightAtWidth:(double)arg1;
- (id)initWithLiveContact:(id)arg1 giftItems:(id)arg2;

@end

