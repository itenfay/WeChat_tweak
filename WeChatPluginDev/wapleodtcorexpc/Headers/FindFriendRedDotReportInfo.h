//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface FindFriendRedDotReportInfo
{
    NSString *_uuid;
    NSDictionary *_params;
    unsigned long long _exposeTimeMs;
    unsigned long long _unexposeTimeMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long unexposeTimeMs; // @synthesize unexposeTimeMs=_unexposeTimeMs;
@property(nonatomic) unsigned long long exposeTimeMs; // @synthesize exposeTimeMs=_exposeTimeMs;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end

