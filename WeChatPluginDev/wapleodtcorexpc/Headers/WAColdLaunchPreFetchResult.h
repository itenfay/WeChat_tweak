//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAColdLaunchPreFetchResult : NSObject
{
    _Bool _ret;
    unsigned int _fetchType;
    NSString *_fetchData;
    unsigned long long _status;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *fetchData; // @synthesize fetchData=_fetchData;
@property(nonatomic) _Bool ret; // @synthesize ret=_ret;
@property(nonatomic) unsigned int fetchType; // @synthesize fetchType=_fetchType;
- (id)safeGetFetchData;

@end

