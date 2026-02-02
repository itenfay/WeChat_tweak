//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSData, NSString, WARedEnvelopesReceiveHomeView;
@protocol WARedEnvelopesOpenLogicDelegate;

@interface WARedEnvelopesOpenLogic
{
    id <WARedEnvelopesOpenLogicDelegate> m_delegate;
    MMUIViewController *_containerVC;
    WARedEnvelopesReceiveHomeView *_introView;
    NSData *_signature;
    NSString *_appID;
    NSString *_sendID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sendID; // @synthesize sendID=_sendID;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) WARedEnvelopesReceiveHomeView *introView; // @synthesize introView=_introView;
@property(nonatomic) __weak MMUIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(nonatomic) __weak id <WARedEnvelopesOpenLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)WCRedEnvelopesReceiveHomeViewOpenList;
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes;
- (void)WCRedEnvelopesReceiveHomeViewBack;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startOpen;
- (id)initWithcontainerVC:(id)arg1 appID:(id)arg2 sendID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

