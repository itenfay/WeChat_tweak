//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderCustomBusinessFeedIDModel : NSObject
{
    _Bool _lastFeed;
    _Bool _fetchYet;
    _Bool _isUpContent;
    NSString *_businessId;
    NSString *_feedId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isUpContent; // @synthesize isUpContent=_isUpContent;
@property(nonatomic) _Bool fetchYet; // @synthesize fetchYet=_fetchYet;
@property(nonatomic) _Bool lastFeed; // @synthesize lastFeed=_lastFeed;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(copy, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;

@end

