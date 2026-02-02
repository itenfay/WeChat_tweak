//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, TencentLBSCalman;

@interface TencentLBSTrace : NSObject
{
    unsigned long long _maxSize;
    unsigned long long _coreSize;
    NSMutableArray *_lines;
    TencentLBSCalman *_calman;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TencentLBSCalman *calman; // @synthesize calman=_calman;
@property(retain, nonatomic) NSMutableArray *lines; // @synthesize lines=_lines;
@property(nonatomic) unsigned long long coreSize; // @synthesize coreSize=_coreSize;
@property(nonatomic) unsigned long long maxSize; // @synthesize maxSize=_maxSize;
- (void)calmanFilter:(id)arg1;
- (_Bool)isFilterEnabled;
- (_Bool)isCurrentOK:(id)arg1;
- (_Bool)isCurrentOKWithTencentLBSLocation:(id)arg1;
- (void)addWithTencentLBSLocation:(id)arg1;
- (void)reset;
- (id)initWithMaxSize:(unsigned long long)arg1 coreSize:(unsigned long long)arg2;

@end

