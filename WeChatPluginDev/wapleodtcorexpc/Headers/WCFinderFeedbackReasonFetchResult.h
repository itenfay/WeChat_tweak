//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCFinderFeedbackReasonFetchResult : NSObject
{
    _Bool _fetching;
    _Bool _fetchSuccess;
    NSArray *_feedbackReasons;
}

+ (id)resultForFetching;
+ (id)resultForFail;
+ (id)resultForSuccessWith:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *feedbackReasons; // @synthesize feedbackReasons=_feedbackReasons;
@property(nonatomic) _Bool fetchSuccess; // @synthesize fetchSuccess=_fetchSuccess;
@property(nonatomic) _Bool fetching; // @synthesize fetching=_fetching;
- (_Bool)readyToShow;
- (_Bool)needFetch;

@end

