//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface QGPOnLayerLoadFinishEvent
{
    long long _errorCode;
    NSString *_errorMsg;
}

+ (id)internalErrorEvent:(id)arg1;
+ (id)successEvent;
+ (id)createErrorCode:(long long)arg1 errorMsg:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;

@end

