//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdFinderFollowInfo, WCAdHalfScreenContainerBaseView, WCAdvertiseInfo;
@protocol WCAdFinderFollowLogicDelegate;

@interface WCAdFinderFollowLogic
{
    int _source;
    id <WCAdFinderFollowLogicDelegate> _delegate;
    WCAdFinderFollowInfo *_adFinderFollowInfo;
    WCAdvertiseInfo *_adData;
    NSString *_snsId;
    NSString *_btnTitle;
    NSString *_friendFollowCountFormat;
    NSString *_feedCountFormat;
    WCAdHalfScreenContainerBaseView *_halfScreenView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdHalfScreenContainerBaseView *halfScreenView; // @synthesize halfScreenView=_halfScreenView;
@property(retain, nonatomic) NSString *feedCountFormat; // @synthesize feedCountFormat=_feedCountFormat;
@property(retain, nonatomic) NSString *friendFollowCountFormat; // @synthesize friendFollowCountFormat=_friendFollowCountFormat;
@property(nonatomic) int source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *btnTitle; // @synthesize btnTitle=_btnTitle;
@property(retain, nonatomic) NSString *snsId; // @synthesize snsId=_snsId;
@property(retain, nonatomic) WCAdvertiseInfo *adData; // @synthesize adData=_adData;
@property(retain, nonatomic) WCAdFinderFollowInfo *adFinderFollowInfo; // @synthesize adFinderFollowInfo=_adFinderFollowInfo;
@property(nonatomic) __weak id <WCAdFinderFollowLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onConfirmButtonClick;
- (_Bool)isFinderFollowing:(id)arg1;
- (id)genTipsContent;
- (void)checkFollowingStateFromServer;
- (void)checkFollowingStateFromLocal;
- (_Bool)isFollowing;
- (void)checkFollowingState;
- (void)start;
- (id)initWithFinderFollowInfo:(id)arg1 adData:(id)arg2 snsId:(id)arg3 btnTitle:(id)arg4 source:(int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

