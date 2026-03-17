//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QMapAuthenticationError : NSObject
{
    unsigned long long _errorOp;
    unsigned long long _errorType;
    long long _retCode;
}

@property(nonatomic) long long retCode; // @synthesize retCode=_retCode;
@property(nonatomic) unsigned long long errorType; // @synthesize errorType=_errorType;
@property(nonatomic) unsigned long long errorOp; // @synthesize errorOp=_errorOp;

@end

