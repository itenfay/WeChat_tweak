//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TencentLBSLocation;

@interface WAGetWxaUsageRecordRequestInfo : NSObject
{
    unsigned int _requestTime;
    NSString *_SSIDHash;
    NSString *_BSSIDHash;
    TencentLBSLocation *_location;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int requestTime; // @synthesize requestTime=_requestTime;
@property(retain, nonatomic) TencentLBSLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *BSSIDHash; // @synthesize BSSIDHash=_BSSIDHash;
@property(retain, nonatomic) NSString *SSIDHash; // @synthesize SSIDHash=_SSIDHash;

@end

