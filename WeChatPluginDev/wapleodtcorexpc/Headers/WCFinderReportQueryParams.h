//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCFinderReportQueryParams : NSObject
{
    NSMutableDictionary *_queryDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *queryDict; // @synthesize queryDict=_queryDict;
- (void)setQueryKey:(id)arg1 value:(id)arg2;
- (id)genQueryString;
- (void)setupUserReportWithUsername:(id)arg1 commentScene:(int)arg2 refID:(id)arg3;
- (void)setupFeedReportWithFeedID:(id)arg1 commentScene:(int)arg2 adAID:(unsigned long long)arg3;
- (void)_setupDefaultReportQuery;
- (id)init;

@end

