//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BrandTimelineMsgDBOrderParams : NSObject
{
    _Bool _assignLimitWeight;
    unsigned int _groupId;
    unsigned int _predict;
    unsigned int _orderId;
}

+ (void)retriveGroupId:(unsigned int *)arg1 predict:(unsigned int *)arg2 orderId:(unsigned int *)arg3 bySeqId:(unsigned long long)arg4;
+ (unsigned long long)genSeqIdByGroupId:(unsigned int)arg1 predict:(unsigned int)arg2 orderId:(unsigned int)arg3;
@property(nonatomic) _Bool assignLimitWeight; // @synthesize assignLimitWeight=_assignLimitWeight;
@property(nonatomic) unsigned int orderId; // @synthesize orderId=_orderId;
@property(nonatomic) unsigned int predict; // @synthesize predict=_predict;
@property(nonatomic) unsigned int groupId; // @synthesize groupId=_groupId;
@property(readonly, nonatomic) unsigned long long seqId;
- (id)initWithGroupId:(unsigned int)arg1 predict:(unsigned int)arg2 orderId:(unsigned int)arg3;
- (id)initWithSeqId:(unsigned long long)arg1;

@end

