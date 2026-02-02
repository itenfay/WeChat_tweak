//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface NewLifeActionError : NSObject
{
    long long _errorCode;
    NSString *_errorDescription;
}

+ (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;

@end

