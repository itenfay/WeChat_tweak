//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface NewLifeCdnDownloadProgressCallbackReq : NSObject
{
    NSString *_mediaId;
    long long _finishedLength;
    long long _totalLength;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithMediaId:(id)arg1 finishedLength:(long long)arg2 totalLength:(long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long totalLength; // @synthesize totalLength=_totalLength;
@property(nonatomic) long long finishedLength; // @synthesize finishedLength=_finishedLength;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (id)toList;

@end

