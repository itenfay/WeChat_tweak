//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCBaseNetworkingError
{
    _Bool _isNetworkError;
    _Bool _canRetry;
    int _errorCode;
    int _m_uiMessage;
    NSString *_errorDesc;
}

+ (id)errorWithBaseResponse:(id)arg1;
+ (id)errorWithErrorDesc:(id)arg1 errorCode:(int)arg2 isNetworkError:(_Bool)arg3;
+ (id)errorWithErrorDesc:(id)arg1 errorCode:(int)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool canRetry; // @synthesize canRetry=_canRetry;
@property(nonatomic) _Bool isNetworkError; // @synthesize isNetworkError=_isNetworkError;
@property(nonatomic) int m_uiMessage; // @synthesize m_uiMessage=_m_uiMessage;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorDesc; // @synthesize errorDesc=_errorDesc;
- (id)init;
- (id)nsError;

@end

