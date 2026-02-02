//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMHeavyUserDataSource;
@protocol MMHeavyUserEvaluatorDelegate, OS_dispatch_queue;

@interface MMHeavyUserEvaluator : NSObject
{
    MMHeavyUserDataSource *m_dataSource;
    unsigned long long m_contactCount;
    unsigned long long m_sessionCount;
    unsigned long long m_wechatSize;
    unsigned long long m_yesterDayDumpCount;
    double m_finderAEC;
    double m_liveWatchRate;
    NSObject<OS_dispatch_queue> *m_calQueue;
    float m_pointStandard;
    id <MMHeavyUserEvaluatorDelegate> _delegate;
}

+ (float)p_getGaussianCDFWithMu:(float)arg1 withStd:(float)arg2 withValue:(float)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MMHeavyUserEvaluatorDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)p_evaluateHeavyUserPoint;
- (void)p_reloadData;
- (unsigned long long)getHeavyUserPoint;
- (void)reevaluate;
- (id)initWithDataSource:(id)arg1 withQueue:(id)arg2;

@end

