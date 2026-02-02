//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol MMFinderLivePIPMinimizeLogicControllerDelegate, MMFinderLivePIPMinimizeLogicDelegate;

@interface MMFinderLiveCustomPIPHandler
{
    _Bool _isPIPCheckStart;
    id <MMFinderLivePIPMinimizeLogicControllerDelegate> _logicControllerDelegate;
    id <MMFinderLivePIPMinimizeLogicDelegate> _logicDelegate;
    unsigned long long _indicatorState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long indicatorState; // @synthesize indicatorState=_indicatorState;
@property(nonatomic) _Bool isPIPCheckStart; // @synthesize isPIPCheckStart=_isPIPCheckStart;
@property(nonatomic) __weak id <MMFinderLivePIPMinimizeLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
@property(nonatomic) __weak id <MMFinderLivePIPMinimizeLogicControllerDelegate> logicControllerDelegate; // @synthesize logicControllerDelegate=_logicControllerDelegate;
- (void)onLiveTask:(id)arg1 audienceConnectingMicStatusChanged:(_Bool)arg2;
- (void)onIndicatorStateChanged;
- (id)getCustomContentView;
- (id)getPIPStartParam;
- (_Bool)isPIPHandleLogicPrepared;
- (id)getCurrentPIPHandleLogic;
- (id)getPIPHandleLogic;
- (void)configPIPHandleLogic;
- (void)updateCurrentVideoDecodePictureInPictureOptions;
- (void)onPictureInPictureStart;
- (void)clearIndicatorStateFlag:(unsigned long long)arg1;
- (void)setIndicatorStateFlag:(unsigned long long)arg1;
- (void)stopPictureInPicture;
- (void)startPictureInPicture;
- (void)changeStartPIPAutomaticallyInBackgroundSwitch:(_Bool)arg1;
- (void)checkNeedAutoStartPictureInPicture;
- (void)startCheckPictureInPictureNeedAutoStart;
- (void)checkCurrentCdnPlayerItemVideoDecodeTypeForPIP;
- (void)checkNeedForbidPIPInSpecialPlatformSystem;
- (void)checkPictureInPictureAbilityIfNotFit;
- (void)checkPictureInPictureAbility;
- (void)registerExtensions;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

