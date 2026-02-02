//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCTopicWCFeedItem;

@interface WCTopicWCFeedReportInputItem : NSObject
{
    long long _actionScene;
    long long _enterSource;
    unsigned long long _actionTimeStamp;
    WCTopicWCFeedItem *_feedItem;
    NSString *_commentId;
    NSString *_sessionId;
    NSString *_queryKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *queryKey; // @synthesize queryKey=_queryKey;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(retain, nonatomic) WCTopicWCFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(nonatomic) unsigned long long actionTimeStamp; // @synthesize actionTimeStamp=_actionTimeStamp;
@property(nonatomic) long long enterSource; // @synthesize enterSource=_enterSource;
@property(nonatomic) long long actionScene; // @synthesize actionScene=_actionScene;

@end

