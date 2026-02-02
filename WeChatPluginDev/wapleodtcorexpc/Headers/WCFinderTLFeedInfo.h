//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderTLFeedInfo : NSObject
{
    int _commentScene;
    NSString *_fromFeedId;
    NSString *_fromFeedSessionBuffer;
    NSString *_fromFinderUsername;
}

- (void).cxx_destruct;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) NSString *fromFinderUsername; // @synthesize fromFinderUsername=_fromFinderUsername;
@property(copy, nonatomic) NSString *fromFeedSessionBuffer; // @synthesize fromFeedSessionBuffer=_fromFeedSessionBuffer;
@property(copy, nonatomic) NSString *fromFeedId; // @synthesize fromFeedId=_fromFeedId;

@end

