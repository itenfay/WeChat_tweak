//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AccountErrorInfo;

@interface AccountAppleIDError : NSObject
{
    long long _returnCode;
    AccountErrorInfo *_errorInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AccountErrorInfo *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(nonatomic) long long returnCode; // @synthesize returnCode=_returnCode;

@end

