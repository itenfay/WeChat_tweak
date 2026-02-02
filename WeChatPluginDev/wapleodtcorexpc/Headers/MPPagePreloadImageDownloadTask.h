//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MPPagePreloadImageDownloadTask : NSObject
{
    NSString *_url;
    NSString *_pageIdentity;
    long long _retryTimes;
}

+ (id)fileNameFromUrl:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long retryTimes; // @synthesize retryTimes=_retryTimes;
@property(copy, nonatomic) NSString *pageIdentity; // @synthesize pageIdentity=_pageIdentity;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (id)description;
- (id)fileName;
- (id)taskID;
- (id)initWithUrl:(id)arg1 pageIdentity:(id)arg2 retryTimes:(long long)arg3;

@end

