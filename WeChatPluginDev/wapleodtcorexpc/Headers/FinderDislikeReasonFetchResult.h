//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface FinderDislikeReasonFetchResult : NSObject
{
    _Bool _dislikeReasonFetching;
    _Bool _dislikeReasonFetchFailed;
    NSArray *_dislikeReasonsBuffers;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithDislikeReasonFetching:(_Bool)arg1 dislikeReasonFetchFailed:(_Bool)arg2 dislikeReasonsBuffers:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *dislikeReasonsBuffers; // @synthesize dislikeReasonsBuffers=_dislikeReasonsBuffers;
@property(nonatomic) _Bool dislikeReasonFetchFailed; // @synthesize dislikeReasonFetchFailed=_dislikeReasonFetchFailed;
@property(nonatomic) _Bool dislikeReasonFetching; // @synthesize dislikeReasonFetching=_dislikeReasonFetching;
- (id)toList;

@end

