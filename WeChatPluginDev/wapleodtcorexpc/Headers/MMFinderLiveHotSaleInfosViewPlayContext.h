//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveGetProductCarouselResponse, FinderLiveGetProductCarouselResponse_FinderLiveProductCarouselItem;

@interface MMFinderLiveHotSaleInfosViewPlayContext : NSObject
{
    FinderLiveGetProductCarouselResponse *_info;
    FinderLiveGetProductCarouselResponse_FinderLiveProductCarouselItem *_current;
    unsigned long long _nextIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long nextIndex; // @synthesize nextIndex=_nextIndex;
@property(retain, nonatomic) FinderLiveGetProductCarouselResponse_FinderLiveProductCarouselItem *current; // @synthesize current=_current;
@property(retain, nonatomic) FinderLiveGetProductCarouselResponse *info; // @synthesize info=_info;

@end

