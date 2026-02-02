//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol StoreEmotionRewardAskForRewardCgiDelegate;

@interface StoreEmotionRewardAskForRewardCgi
{
    _Bool m_hasStartRequestOnce;
    NSString *m_pid;
    unsigned int m_eventID;
    id <StoreEmotionRewardAskForRewardCgiDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <StoreEmotionRewardAskForRewardCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showErrorTipsWithWording:(id)arg1;
- (void)callFailedDelegateWithTips:(id)arg1;
- (void)callFailedDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)startRequestWithPrice:(id)arg1 scene:(unsigned int)arg2 enterScene:(unsigned int)arg3;
- (id)initWithPid:(id)arg1;

@end

