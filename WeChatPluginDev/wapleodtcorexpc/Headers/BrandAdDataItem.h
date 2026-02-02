//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface BrandAdDataItem : NSObject
{
    unsigned int _expiredTimeInSec;
    NSString *_content;
    NSDictionary *_dicAdInfo;
    NSString *_traceId;
    NSString *_aid;
    NSString *_bizType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int expiredTimeInSec; // @synthesize expiredTimeInSec=_expiredTimeInSec;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(retain, nonatomic) NSDictionary *dicAdInfo; // @synthesize dicAdInfo=_dicAdInfo;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (id)description;

@end

