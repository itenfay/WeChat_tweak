//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCPayNetworkError : NSObject
{
    long long _errorCode;
    NSString *_errorMessage;
    NSDictionary *_userInfo;
    NSString *_errorDetailUrl;
}

+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errorDetailUrl; // @synthesize errorDetailUrl=_errorDetailUrl;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
- (id)description;
- (id)convertToNSError;

@end

