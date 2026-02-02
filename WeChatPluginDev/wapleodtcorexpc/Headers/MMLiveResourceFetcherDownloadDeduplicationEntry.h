//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMLiveResourceFetcherDownloadDeduplicationEntry : NSObject
{
    NSString *_uri;
    NSString *_destination;
    NSMutableArray *_invocations;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *invocations; // @synthesize invocations=_invocations;
@property(retain, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;

@end

