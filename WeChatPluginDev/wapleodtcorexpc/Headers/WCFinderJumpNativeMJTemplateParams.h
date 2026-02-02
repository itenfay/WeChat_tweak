//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedContentVM;

@interface WCFinderJumpNativeMJTemplateParams : NSObject
{
    NSString *_tmpl_topic_id;
    NSString *_sourceFeedId;
    WCFinderFeedContentVM *_sourceFeedContentVM;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedContentVM *sourceFeedContentVM; // @synthesize sourceFeedContentVM=_sourceFeedContentVM;
@property(copy, nonatomic) NSString *sourceFeedId; // @synthesize sourceFeedId=_sourceFeedId;
@property(retain, nonatomic) NSString *tmpl_topic_id; // @synthesize tmpl_topic_id=_tmpl_topic_id;

@end

