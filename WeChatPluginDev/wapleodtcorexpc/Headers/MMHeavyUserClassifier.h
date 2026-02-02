//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMHeavyUserDataSource;
@protocol MMHeavyUserClassifierDelegate, OS_dispatch_queue;

@interface MMHeavyUserClassifier : NSObject
{
    MMHeavyUserDataSource *m_dataSource;
    unsigned long long m_contactCountStandard;
    unsigned long long m_sessionCountStandard;
    unsigned long long m_wechatSizeStandard;
    double m_finderAECStandard;
    double m_liveWatchRateStandard;
    NSObject<OS_dispatch_queue> *m_calQueue;
    id <MMHeavyUserClassifierDelegate> _delegate;
}

+ (_Bool)isLiveType:(unsigned long long)arg1;
+ (_Bool)isFinderType:(unsigned long long)arg1;
+ (_Bool)isFileSpaceType:(unsigned long long)arg1;
+ (_Bool)isSessionType:(unsigned long long)arg1;
+ (_Bool)isContactsType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MMHeavyUserClassifierDelegate> delegate; // @synthesize delegate=_delegate;
- (void)checkLiveType;
- (void)checkFinderType;
- (void)checkFileSpaceType;
- (void)checkSessionType;
- (void)checkContactType;
- (void)p_heavyUserTypeChange:(unsigned long long)arg1;
- (void)reclassify;
- (unsigned long long)heavyUserType;
- (_Bool)isHeavyUser;
- (id)initWithDataSource:(id)arg1 withQueue:(id)arg2;

@end

