//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface QGPError
{
    long long _errorCode;
    NSString *_errorMsg;
}

+ (id)invaldParameterError:(id)arg1;
+ (id)internalError:(id)arg1;
+ (id)unsupportFunctionErrorWithCommand:(id)arg1;
+ (id)unsupportFunctionError:(id)arg1;
+ (id)jsonParseError:(id)arg1;
+ (id)createErrorCode:(long long)arg1 errorMsg:(id)arg2;
+ (id)errorMsgForCode:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;

@end

