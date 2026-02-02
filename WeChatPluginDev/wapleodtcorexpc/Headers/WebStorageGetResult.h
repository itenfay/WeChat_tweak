//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WebStorageGetResult : NSObject
{
    _Bool _bError;
    NSString *_value;
    NSString *_weightStr;
    long long _expireTime;
}

- (void).cxx_destruct;
@property(nonatomic) long long expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSString *weightStr; // @synthesize weightStr=_weightStr;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) _Bool bError; // @synthesize bError=_bError;

@end

