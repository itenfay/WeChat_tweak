//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MMAssetFetchError : NSObject
{
    long long _code;
    NSDictionary *_errorInfo;
}

+ (id)errorWithCode:(long long)arg1 info:(id)arg2;
+ (id)errorWithCode:(long long)arg1;
+ (id)defaultError;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(nonatomic) long long code; // @synthesize code=_code;

@end

