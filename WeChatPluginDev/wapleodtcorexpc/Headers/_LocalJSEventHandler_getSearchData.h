//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class _TtC6WeChat23WSSearchProcessReporter;

@interface _LocalJSEventHandler_getSearchData
{
    _Bool _isFingertipSearch;
    _TtC6WeChat23WSSearchProcessReporter *_processReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC6WeChat23WSSearchProcessReporter *processReporter; // @synthesize processReporter=_processReporter;
@property(nonatomic) _Bool isFingertipSearch; // @synthesize isFingertipSearch=_isFingertipSearch;
- (id)searchContext;
- (_Bool)canModifySearchHistoryInSeachScene:(unsigned long long)arg1;
- (_Bool)shouldCarryUserList:(id)arg1 andScene:(unsigned int)arg2 andBizType:(unsigned int)arg3 isHomePage:(_Bool)arg4;
- (void)reportKV14457:(unsigned long long)arg1;
- (void)recordSearchHistory:(id)arg1 params:(id)arg2;
- (_Bool)useParallelRequest;
- (unsigned int)cgiNumber;
- (unsigned int)h5Version;
- (void)onRequestFail:(id)arg1;
- (void)onRequestSuccess:(id)arg1;
- (void)onRequestWillStart:(id)arg1;

@end

