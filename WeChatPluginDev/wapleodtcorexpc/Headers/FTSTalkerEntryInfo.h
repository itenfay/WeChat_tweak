//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTSTalkerEntryInfo : NSObject
{
    _Bool _isInSession;
    NSString *_talker;
    NSString *_query;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInSession; // @synthesize isInSession=_isInSession;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *talker; // @synthesize talker=_talker;

@end

