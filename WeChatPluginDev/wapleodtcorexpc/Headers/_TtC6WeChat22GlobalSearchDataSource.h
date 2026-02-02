//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, _TtC6WeChat28GlobalSearchDataSourceConfig;

@interface _TtC6WeChat22GlobalSearchDataSource : NSObject
{
    MISSING_TYPE *displayedResults;
    MISSING_TYPE *delegate;
    MISSING_TYPE *config;
    MISSING_TYPE *searchIntentionController;
    MISSING_TYPE *query;
    MISSING_TYPE *topHits;
    MISSING_TYPE *singleContact;
    MISSING_TYPE *groupContact;
    MISSING_TYPE *brandContact;
    MISSING_TYPE *feature;
    MISSING_TYPE *message;
    MISSING_TYPE *fav;
    MISSING_TYPE *finderContact;
    MISSING_TYPE *weapp;
    MISSING_TYPE *searchContact;
    MISSING_TYPE *webSearch;
    MISSING_TYPE *kfContact;
    MISSING_TYPE *refreshPageSubject;
    MISSING_TYPE *searchDoneSubject;
    MISSING_TYPE *subscriptions;
    MISSING_TYPE *sortedSections;
    MISSING_TYPE *$__lazy_storage_$_hasWebSearchIntention;
}

- (void).cxx_destruct;
- (id)init;
- (void)sortSections;
- (void)finishSearchOf:(unsigned long long)arg1 data:(id)arg2;
- (void)updateSection:(unsigned long long)arg1 data:(id)arg2;
- (id)getConfig;
- (id)initWithDelegate:(id)arg1 config:(id)arg2;
@property(nonatomic, readonly) _TtC6WeChat28GlobalSearchDataSourceConfig *config; // @synthesize config;
@property(nonatomic, copy) NSArray *displayedResults;
@property(nonatomic, readonly) _Bool allSectionsHasResult;
- (id)sugContext;
- (long long)sectionIndexOf:(unsigned long long)arg1;

@end

