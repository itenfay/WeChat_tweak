//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCDataItem;

@interface WCMomentsFinderRecommendationPlaceholderContext : NSObject
{
    WCDataItem *_previousDataItem;
    unsigned long long _previousItemIndex;
    WCDataItem *_badgeDataItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCDataItem *badgeDataItem; // @synthesize badgeDataItem=_badgeDataItem;
@property(nonatomic) unsigned long long previousItemIndex; // @synthesize previousItemIndex=_previousItemIndex;
@property(retain, nonatomic) WCDataItem *previousDataItem; // @synthesize previousDataItem=_previousDataItem;

@end

