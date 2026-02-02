//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ConsumeWecoinResponse, NSString, PrepareWecoinConsumeResponse;

@interface WCCoinConsumeError
{
    int _errorCode;
    unsigned long long _errorType;
    NSString *_errorMessage;
    PrepareWecoinConsumeResponse *_prepareConsumeResponse;
    ConsumeWecoinResponse *_consumeResponse;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ConsumeWecoinResponse *consumeResponse; // @synthesize consumeResponse=_consumeResponse;
@property(retain, nonatomic) PrepareWecoinConsumeResponse *prepareConsumeResponse; // @synthesize prepareConsumeResponse=_prepareConsumeResponse;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long errorType; // @synthesize errorType=_errorType;
- (id)init;

@end

