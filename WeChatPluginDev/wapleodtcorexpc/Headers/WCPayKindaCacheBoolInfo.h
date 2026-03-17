//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayKindaCacheBoolInfo : NSObject
{
    _Bool _data;
    long long _expired_time;
}

+ (id)GenFromDictionary:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_data;
+ (void)PBArrayAdd_expired_time;
@property(nonatomic) _Bool data; // @synthesize data=_data;
@property(nonatomic) long long expired_time; // @synthesize expired_time=_expired_time;
- (void)genFromDic:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

