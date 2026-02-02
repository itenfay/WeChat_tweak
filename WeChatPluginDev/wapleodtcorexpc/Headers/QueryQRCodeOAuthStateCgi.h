//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface QueryQRCodeOAuthStateCgi
{
    _Bool _isCancel;
    _Bool _hasHandleEcdhRollback;
    unsigned int _lastErrcode;
    NSString *_uuid;
    NSString *_sdkToken;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool hasHandleEcdhRollback; // @synthesize hasHandleEcdhRollback=_hasHandleEcdhRollback;
@property(copy, nonatomic) NSString *sdkToken; // @synthesize sdkToken=_sdkToken;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(nonatomic) unsigned int lastErrcode; // @synthesize lastErrcode=_lastErrcode;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (void)createRequest;
- (id)initWithUUID:(id)arg1 lastErrcode:(unsigned int)arg2 isCancel:(_Bool)arg3 sdkToken:(id)arg4;

@end

