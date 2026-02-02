//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat29WebSearchPlugin_ReportManager
{
    MISSING_TYPE *$__lazy_storage_$_featureReporter;
    MISSING_TYPE *$__lazy_storage_$_stayTimeReporter;
    MISSING_TYPE *$__lazy_storage_$_menuActionReporter;
}

- (void).cxx_destruct;
- (id)init;
- (void)reportMenuActionWithType:(long long)arg1;
- (void)reportExitWithType:(unsigned long long)arg1;
- (void)reportExposedWithFeatureItemsStr:(id)arg1;
- (void)reportClickWithFeatureItem:(unsigned long long)arg1;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (void)updateWithSearchId:(id)arg1 requestId:(id)arg2;

@end

