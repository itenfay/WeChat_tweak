//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCAccountCloseMainFrameLogicDelegate;

@interface WCAccountCloseMainFrameLogic
{
    unsigned int m_uiScene;
    unsigned long long m_lastAutoAuthTime;
    unsigned long long m_startCloseTime;
    id <WCAccountCloseMainFrameLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCAccountCloseMainFrameLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endCloseMainFrame;
- (void)startLogic:(unsigned int)arg1 lastAutoAuthTime:(unsigned long long)arg2;

@end

