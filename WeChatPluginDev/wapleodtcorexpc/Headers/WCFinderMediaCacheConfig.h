//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderMediaCacheConfig : NSObject
{
    _Bool _enable;
    unsigned long long _configId;
    unsigned long long _costLimit;
    unsigned long long _countLimit;
    double _lfuRatio;
}

@property(nonatomic) double lfuRatio; // @synthesize lfuRatio=_lfuRatio;
@property(nonatomic) unsigned long long countLimit; // @synthesize countLimit=_countLimit;
@property(nonatomic) unsigned long long costLimit; // @synthesize costLimit=_costLimit;
@property(nonatomic) unsigned long long configId; // @synthesize configId=_configId;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;

@end

