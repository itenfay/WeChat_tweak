//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TemplateFinderFeedOPWrap : NSObject
{
    NSString *_feedID;
    NSString *_nonceID;
    NSString *_feed_thumbnail;
}

+ (id)finderFeedOPWrapWithJSON:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *feed_thumbnail; // @synthesize feed_thumbnail=_feed_thumbnail;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;

@end

