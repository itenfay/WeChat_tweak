//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderGlobalStoreResult : NSObject
{
    NSObject *_result;
    long long _errCode;
    NSString *_errMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) long long errCode; // @synthesize errCode=_errCode;
@property(retain, nonatomic) NSObject *result; // @synthesize result=_result;

@end

