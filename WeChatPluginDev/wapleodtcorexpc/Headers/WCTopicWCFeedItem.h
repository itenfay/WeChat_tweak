//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTopicWCFeedItem : NSObject
{
    NSString *_username;
    NSString *_feedId;
    long long _feedType;
}

- (void).cxx_destruct;
@property(nonatomic) long long feedType; // @synthesize feedType=_feedType;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

@end

