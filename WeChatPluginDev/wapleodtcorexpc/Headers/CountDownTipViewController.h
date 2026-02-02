//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CADisplayLink, NSString;

@interface CountDownTipViewController
{
    CADisplayLink *m_timer;
    unsigned int m_uiCurrentCount;
    id m_userData;
    unsigned int m_uiCountDown;
    NSString *m_nsTipViewMessage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id m_userData; // @synthesize m_userData;
@property(nonatomic) unsigned int m_uiCountDown; // @synthesize m_uiCountDown;
@property(retain, nonatomic) NSString *m_nsTipViewMessage; // @synthesize m_nsTipViewMessage;
- (void)showWithAnimated:(int)arg1;
- (void)countDownTip;
- (void)dealloc;

@end

