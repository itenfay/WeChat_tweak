//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSUUID;

@interface WXPTenpayCgiWrapper
{
    CDUnknownBlockType _errorCallback;
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _endCallback;
    NSUUID *_uuid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) CDUnknownBlockType endCallback; // @synthesize endCallback=_endCallback;
@property(copy, nonatomic) CDUnknownBlockType successCallback; // @synthesize successCallback=_successCallback;
@property(copy, nonatomic) CDUnknownBlockType errorCallback; // @synthesize errorCallback=_errorCallback;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (id)init;

@end

