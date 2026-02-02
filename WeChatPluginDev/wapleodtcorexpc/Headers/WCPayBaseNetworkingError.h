//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCPayBaseNetworkingError
{
    int _errorCode;
    NSString *_errorDesc;
}

+ (id)errorWithErrorDesc:(id)arg1 errorCode:(int)arg2;
+ (id)errorWithErrorDesc:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorDesc; // @synthesize errorDesc=_errorDesc;
- (id)init;

@end

