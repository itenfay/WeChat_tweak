//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMFinderLiveCompositingPIPHandler
{
    _Bool _isPIPCheckStart;
}

@property(nonatomic) _Bool isPIPCheckStart; // @synthesize isPIPCheckStart=_isPIPCheckStart;
- (_Bool)isPIPHandleLogicPrepared;
- (id)getCurrentPIPHandleLogic;
- (id)getPIPHandleLogic;
- (void)configPIPHandleLogic;
- (void)updateCurrentVideoDecodePictureInPictureOptions;
- (void)stopPictureInPicture;
- (void)startPictureInPicture;
- (void)changeStartPIPAutomaticallyInBackgroundSwitch:(_Bool)arg1;
- (void)checkNeedAutoStartPictureInPicture;
- (void)startCheckPictureInPictureNeedAutoStart;
- (void)checkCurrentCdnPlayerItemVideoDecodeTypeForPIP;
- (void)checkNeedForbidPIPInSpecialPlatformSystem;
- (void)checkPictureInPictureAbilityIfNotFit;
- (void)checkPictureInPictureAbility;

@end

