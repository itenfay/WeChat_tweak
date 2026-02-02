//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedContentVM;

@interface WCFinderMJSetOptionalParams : NSObject
{
    long long _enterSource;
    NSString *_finderUsername;
    NSString *_sourceFeedId;
    WCFinderFeedContentVM *_sourceFeedContentVM;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedContentVM *sourceFeedContentVM; // @synthesize sourceFeedContentVM=_sourceFeedContentVM;
@property(copy, nonatomic) NSString *sourceFeedId; // @synthesize sourceFeedId=_sourceFeedId;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) long long enterSource; // @synthesize enterSource=_enterSource;

@end

