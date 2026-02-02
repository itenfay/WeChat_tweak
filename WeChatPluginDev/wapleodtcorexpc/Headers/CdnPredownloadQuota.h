//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate;

@interface CdnPredownloadQuota : NSObject
{
    long long _sizeInBytes;
    NSDate *_expiredDate;
}

@property(retain, nonatomic) NSDate *expiredDate; // @synthesize expiredDate=_expiredDate;
@property(nonatomic) long long sizeInBytes; // @synthesize sizeInBytes=_sizeInBytes;

@end

