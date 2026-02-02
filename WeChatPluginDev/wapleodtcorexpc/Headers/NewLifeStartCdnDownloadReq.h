//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface NewLifeStartCdnDownloadReq : NSObject
{
    NSString *_mediaId;
    NSString *_url;
    long long _concurrentCount;
    NSString *_path;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithMediaId:(id)arg1 url:(id)arg2 concurrentCount:(long long)arg3 path:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) long long concurrentCount; // @synthesize concurrentCount=_concurrentCount;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (id)toList;

@end

