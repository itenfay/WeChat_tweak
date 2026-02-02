//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC6WeChat31FTSWebSearchIntentionController : NSObject
{
    MISSING_TYPE *localSearchBoxMinExposedHeight;
    MISSING_TYPE *_cgiTriggerInterval;
    MISSING_TYPE *referee;
    MISSING_TYPE *webSearchIntentionCache;
    MISSING_TYPE *$__lazy_storage_$_netProvider;
}

+ (_Bool)enabled;
- (void).cxx_destruct;
- (id)init;
- (void)updateSearchIntentionDict;
- (id)getSugPrefixSequence;
- (id)getLastPrefixLocalClickInfoWithPrefix:(id)arg1;
- (id)getSearchClickHistory;
- (void)insertSearchTextInputWithPrefix:(id)arg1;
- (void)insertSearchSugItemClickWithPrefix:(id)arg1 clickType:(unsigned int)arg2 localOrNet:(_Bool)arg3;
- (void)addLocalSearchHistoryFor:(id)arg1;
- (_Bool)hasWebSearchIntentionFor:(id)arg1;
@property(nonatomic) double localSearchBoxMinExposedHeight; // @synthesize localSearchBoxMinExposedHeight;

@end

