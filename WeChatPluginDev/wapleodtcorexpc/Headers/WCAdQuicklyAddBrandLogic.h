//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString, WCAdHalfScreenContainerBaseView, WCAdQuicklyAddBrandInfo, WCAdvertiseInfo;
@protocol WCAdQuicklyAddBrandLogicDelegate;

@interface WCAdQuicklyAddBrandLogic
{
    int _uiScene;
    int _uiSubScene;
    id <WCAdQuicklyAddBrandLogicDelegate> _delegate;
    WCAdQuicklyAddBrandInfo *_brandInfo;
    WCAdHalfScreenContainerBaseView *_adBrandHalfScreenView;
    MMTimer *_contactSyncTimer;
    unsigned long long _enterType;
    WCAdvertiseInfo *_adInfo;
    NSString *_snsId;
    NSString *_canvasDynamicInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *canvasDynamicInfo; // @synthesize canvasDynamicInfo=_canvasDynamicInfo;
@property(copy, nonatomic) NSString *snsId; // @synthesize snsId=_snsId;
@property(retain, nonatomic) WCAdvertiseInfo *adInfo; // @synthesize adInfo=_adInfo;
@property(nonatomic) unsigned long long enterType; // @synthesize enterType=_enterType;
@property(nonatomic) int uiSubScene; // @synthesize uiSubScene=_uiSubScene;
@property(nonatomic) int uiScene; // @synthesize uiScene=_uiScene;
@property(retain, nonatomic) MMTimer *contactSyncTimer; // @synthesize contactSyncTimer=_contactSyncTimer;
@property(retain, nonatomic) WCAdHalfScreenContainerBaseView *adBrandHalfScreenView; // @synthesize adBrandHalfScreenView=_adBrandHalfScreenView;
@property(retain, nonatomic) WCAdQuicklyAddBrandInfo *brandInfo; // @synthesize brandInfo=_brandInfo;
@property(nonatomic) __weak id <WCAdQuicklyAddBrandLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)fetchMMViewController;
- (void)showLoadingView;
- (void)onTimeoutContactSync;
- (void)invalidateContactSyncTimer;
- (void)createVerify:(id)arg1 andSubScene:(unsigned int)arg2;
- (void)enterBrandInner;
- (void)addBrandInner:(id)arg1;
- (void)callbackResultFailed;
- (void)callbackResultSuccess;
- (void)callbackResult:(long long)arg1;
- (_Bool)checkValid:(id)arg1;
- (void)scheduleContactSyncTimer;
- (void)onModifyContact:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onConfirmButtonClick;
- (void)dealloc;
- (void)start;
- (id)initWithBrandInfo:(id)arg1 uiScene:(int)arg2 enterType:(unsigned long long)arg3 adInfo:(id)arg4 snsId:(id)arg5 canvasDynamicInfo:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

