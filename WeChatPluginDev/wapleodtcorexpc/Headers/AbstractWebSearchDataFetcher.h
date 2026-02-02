//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface AbstractWebSearchDataFetcher
{
}

@property(readonly, nonatomic) unsigned long long scene;
- (id)makeNetworkFailParam:(_Bool)arg1;
- (id)makeEmptyJSONResultParam:(_Bool)arg1;
- (void)onRequestSuccess:(id)arg1;
- (void)onRequestFail:(id)arg1;
- (void)onRequestWillStart:(id)arg1;
- (_Bool)shouldCarryUserList:(id)arg1 andScene:(unsigned int)arg2 andBizType:(unsigned int)arg3 isHomePage:(_Bool)arg4;
- (id)h5NotifyEventName;
- (unsigned int)cgiNumber;
- (unsigned int)h5Version;
- (void)sendFailedDataToH5:(id)arg1;
- (void)sendSearchDataToH5:(id)arg1;
- (id)prepareReturnDictionary:(id)arg1 params:(id)arg2;
- (id)buildWebSearchRequest:(id)arg1;
- (void)handleJSEvent:(id)arg1;

@end

