//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSError, NSString, WCBGStorage;

@interface WCCoverMasterStorageCGI
{
    _Bool _usesOldDataForcibly;
    NSString *_language;
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failureHandler;
    NSError *_error;
    WCBGStorage *_bgStorage;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool usesOldDataForcibly; // @synthesize usesOldDataForcibly=_usesOldDataForcibly;
@property(retain, nonatomic) WCBGStorage *bgStorage; // @synthesize bgStorage=_bgStorage;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType failureHandler; // @synthesize failureHandler=_failureHandler;
@property(copy, nonatomic) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (void)_createRequest;
- (id)initWithLanguage:(id)arg1;

@end

