//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMMotionManager, HighpassFilter, NSOperationQueue;
@protocol ShakeCheckerDelegate;

@interface CShakeChecker
{
    id <ShakeCheckerDelegate> m_delegate;
    CMMotionManager *m_motionMgr;
    HighpassFilter *m_filter;
    NSOperationQueue *m_queue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)stopCheck;
- (void)startCheck;
- (id)init;
- (void)setM_Delegate:(id)arg1;

@end

