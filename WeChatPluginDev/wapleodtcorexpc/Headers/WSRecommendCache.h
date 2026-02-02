//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, NSString;

@interface WSRecommendCache : NSObject
{
    unsigned int _cacheTime;
    unsigned int _directShowInterval;
    unsigned int _refreshInterval;
    unsigned int _category;
    unsigned int _redDotTimeStamp;
    NSString *_nsJson;
    NSArray *_docIdList;
    NSMutableSet *_filterDocIdSet;
}

+ (void)initialize;
+ (void)PBArrayAdd_redDotTimeStamp;
+ (void)PBArrayAdd_filterDocIdSet;
+ (void)PBArrayAdd_docIdList;
+ (void)PBArrayAdd_category;
+ (void)PBArrayAdd_refreshInterval;
+ (void)PBArrayAdd_directShowInterval;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_nsJson;
- (void).cxx_destruct;
@property(nonatomic) unsigned int redDotTimeStamp; // @synthesize redDotTimeStamp=_redDotTimeStamp;
@property(retain, nonatomic) NSMutableSet *filterDocIdSet; // @synthesize filterDocIdSet=_filterDocIdSet;
@property(retain, nonatomic) NSArray *docIdList; // @synthesize docIdList=_docIdList;
@property(nonatomic) unsigned int category; // @synthesize category=_category;
@property(nonatomic) unsigned int refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(nonatomic) unsigned int directShowInterval; // @synthesize directShowInterval=_directShowInterval;
@property(nonatomic) unsigned int cacheTime; // @synthesize cacheTime=_cacheTime;
@property(retain, nonatomic) NSString *nsJson; // @synthesize nsJson=_nsJson;
- (_Bool)isCacheValid;
- (_Bool)shouldDirectShow;
- (void)reset;
- (_Bool)isValid;
@property(readonly, copy) NSString *description;
- (id)initWithWebRecommendResponse:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

