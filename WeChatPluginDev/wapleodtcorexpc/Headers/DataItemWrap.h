//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface DataItemWrap : NSObject
{
    NSData *_finderObject;
    NSString *_tid;
    unsigned long long _feedSource;
    unsigned long long _funcFlag;
    unsigned long long _expiredTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_expiredTime;
+ (void)PBArrayAdd_funcFlag;
+ (void)PBArrayAdd_feedSource;
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_finderObject;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long expiredTime; // @synthesize expiredTime=_expiredTime;
@property(nonatomic) unsigned long long funcFlag; // @synthesize funcFlag=_funcFlag;
@property(nonatomic) unsigned long long feedSource; // @synthesize feedSource=_feedSource;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSData *finderObject; // @synthesize finderObject=_finderObject;
- (id)convertToDataItem;
- (id)initWithDataItem:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

