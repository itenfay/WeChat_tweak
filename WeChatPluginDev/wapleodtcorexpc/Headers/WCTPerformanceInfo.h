//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCTPerformanceInfo : NSObject
{
    int _tablePageReadCount;
    int _tablePageWriteCount;
    int _indexPageReadCount;
    int _indexPageWriteCount;
    int _overflowPageReadCount;
    int _overflowPageWriteCount;
    long long _costInNanoseconds;
}

@property(nonatomic) long long costInNanoseconds; // @synthesize costInNanoseconds=_costInNanoseconds;
@property(nonatomic) int overflowPageWriteCount; // @synthesize overflowPageWriteCount=_overflowPageWriteCount;
@property(nonatomic) int overflowPageReadCount; // @synthesize overflowPageReadCount=_overflowPageReadCount;
@property(nonatomic) int indexPageWriteCount; // @synthesize indexPageWriteCount=_indexPageWriteCount;
@property(nonatomic) int indexPageReadCount; // @synthesize indexPageReadCount=_indexPageReadCount;
@property(nonatomic) int tablePageWriteCount; // @synthesize tablePageWriteCount=_tablePageWriteCount;
@property(nonatomic) int tablePageReadCount; // @synthesize tablePageReadCount=_tablePageReadCount;
- (id)initWithPerformanceInfo:(const struct PerformanceInfo *)arg1;

@end

