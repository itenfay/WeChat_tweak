//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveBannerInfo;

@interface MMFinderLiveBannerCellViewModel : NSObject
{
    _Bool _disbalePagAnimation;
    MMFinderLiveBannerInfo *_bannerInfo;
    unsigned long long _curSubTitleIndex;
}

+ (id)vmWithBanner:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool disbalePagAnimation; // @synthesize disbalePagAnimation=_disbalePagAnimation;
@property(nonatomic) unsigned long long curSubTitleIndex; // @synthesize curSubTitleIndex=_curSubTitleIndex;
@property(retain, nonatomic) MMFinderLiveBannerInfo *bannerInfo; // @synthesize bannerInfo=_bannerInfo;

@end

