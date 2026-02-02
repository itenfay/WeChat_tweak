//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, StoreEmotionRecoverMyPanelListCgi;
@protocol StoreEmotionRecoverLogicObjectDelegate;

@interface StoreEmotionRecoverLogicObject
{
    _Bool _m_isActive;
    _Bool _m_hasStartLogic;
    unsigned long long _scene;
    StoreEmotionRecoverMyPanelListCgi *_downloadCgi;
    id <StoreEmotionRecoverLogicObjectDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_hasStartLogic; // @synthesize m_hasStartLogic=_m_hasStartLogic;
@property(nonatomic) _Bool m_isActive; // @synthesize m_isActive=_m_isActive;
@property(nonatomic) __weak id <StoreEmotionRecoverLogicObjectDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) StoreEmotionRecoverMyPanelListCgi *downloadCgi; // @synthesize downloadCgi=_downloadCgi;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)onStoreEmotionRecoverMyPanelListOKWithSetInfos:(id)arg1;
- (void)onStoreEmotionRecoverMyPanelListCgiFailed;
- (void)onStoreEmotionRecoverMyPanelListCgiOKWithPids:(id)arg1;
- (_Bool)canStartCgiNow;
- (void)startInternalRequest;
- (_Bool)isActive;
- (void)startRequest;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

