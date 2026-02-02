//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WXGSpeedFilter : NSObject
{
    NSMutableArray *m_speedCycleArray;
    unsigned long long m_tailPoint;
    unsigned long long m_windowSize;
    float m_currentSpeed;
    unsigned long long m_addSpeedCount;
}

- (void).cxx_destruct;
- (float)getSpeed;
- (void)addSpeed:(float)arg1;
- (id)initWithWindowSize:(unsigned long long)arg1;
- (id)init;

@end

