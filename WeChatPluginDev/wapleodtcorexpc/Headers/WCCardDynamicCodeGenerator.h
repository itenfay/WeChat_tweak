//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, NSTimer;

@interface WCCardDynamicCodeGenerator
{
    NSString *_nsCardId;
    NSMutableArray *_arrCodes;
    double _codeExpiredTime;
    unsigned int _uiCountOfNeedRefresh;
    NSTimer *_oCheckExpireTimer;
    _Bool _bFetchingCode;
    unsigned int _uiRefreshInteval;
    unsigned int _refreshInteval;
    CDUnknownBlockType _getCodeBlock;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int refreshInteval; // @synthesize refreshInteval=_refreshInteval;
@property(copy, nonatomic) CDUnknownBlockType getCodeBlock; // @synthesize getCodeBlock=_getCodeBlock;
@property(readonly, nonatomic) unsigned int uiRefreshInteval; // @synthesize uiRefreshInteval=_uiRefreshInteval;
- (void)onGetSerialNumberData:(id)arg1 ErrCode:(int)arg2;
- (_Bool)bCodesExpired;
- (void)tryFetchCodeIfLackCode;
- (id)takeOneCode;
- (void)clearAllCode;
- (void)fetchCodeFromSvr;
- (id)getCode:(CDUnknownBlockType)arg1;
- (_Bool)bHasAvailableCode;
- (id)initWithCardId:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

