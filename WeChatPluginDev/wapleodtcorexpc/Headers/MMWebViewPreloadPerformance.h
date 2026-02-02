//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMWebViewPreloadPerformance : NSObject
{
    unsigned long long _getA8KeyFinishTime;
    unsigned long long _getA8KeyCostTime;
    unsigned long long _firstScreenRenderFinishTime;
    unsigned long long _firstScreenRenderCostTime;
}

@property(nonatomic) unsigned long long firstScreenRenderCostTime; // @synthesize firstScreenRenderCostTime=_firstScreenRenderCostTime;
@property(nonatomic) unsigned long long firstScreenRenderFinishTime; // @synthesize firstScreenRenderFinishTime=_firstScreenRenderFinishTime;
@property(nonatomic) unsigned long long getA8KeyCostTime; // @synthesize getA8KeyCostTime=_getA8KeyCostTime;
@property(nonatomic) unsigned long long getA8KeyFinishTime; // @synthesize getA8KeyFinishTime=_getA8KeyFinishTime;

@end

