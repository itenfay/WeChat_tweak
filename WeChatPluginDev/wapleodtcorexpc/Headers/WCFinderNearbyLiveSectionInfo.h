//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, WCFinderFeedLayoutContentVM;

@interface WCFinderNearbyLiveSectionInfo : NSObject
{
    WCFinderFeedLayoutContentVM *_layoutVM;
    WCFinderFeedLayoutContentVM *_bottomLayoutVM;
    NSMutableArray *_dataArray;
    NSMutableArray *_moreFollowDataArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *moreFollowDataArray; // @synthesize moreFollowDataArray=_moreFollowDataArray;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) WCFinderFeedLayoutContentVM *bottomLayoutVM; // @synthesize bottomLayoutVM=_bottomLayoutVM;
@property(retain, nonatomic) WCFinderFeedLayoutContentVM *layoutVM; // @synthesize layoutVM=_layoutVM;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

