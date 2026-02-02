//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol StoreEmotionRewardGetRewardCgiDelegate;

@interface StoreEmotionRewardGetRewardCgi
{
    _Bool m_hasStartRequestOnce;
    NSString *m_pid;
    unsigned int m_eventID;
    id <StoreEmotionRewardGetRewardCgiDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <StoreEmotionRewardGetRewardCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)callFailedDelegateForUnrewardable;
- (void)callFailedDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)startRequestWithNeedAllData:(_Bool)arg1;
- (id)initWithPid:(id)arg1;

@end

