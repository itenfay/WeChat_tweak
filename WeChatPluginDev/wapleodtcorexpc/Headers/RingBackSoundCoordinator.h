//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AnyPromise, CContact, MMUIViewController, NSString, RingBackInfoDisplaySheetView, RingBackPlaySoundReporter_23653, RingToneAvPlayer, RingToneDetail, RingTonePlaySoundReporter_23613, VideoRingNetProvider;

@interface RingBackSoundCoordinator : NSObject
{
    _Bool _hasShowRingBackInfoView;
    _Bool _isCaller;
    _Bool _listenedNewRingBack;
    _Bool _hasResetSpeakerVolume;
    _Bool _hasResetReceiverVolume;
    _Bool _isAudio;
    _Bool _isOrignalVolumeValueQueried;
    _Bool _shouldUseNewVolumeStrategy;
    _Bool _isEnd;
    float _originalVolumeValue;
    float _defaultVolume;
    unsigned long long _entryType;
    NSString *_chatroomUsername;
    MMUIViewController *_viewController;
    RingToneDetail *_ringDetail;
    CDUnknownBlockType _jumpBlock;
    VideoRingNetProvider *_provider;
    CContact *_contact;
    RingToneAvPlayer *_player;
    RingBackInfoDisplaySheetView *_sheetView;
    AnyPromise *_ringFilePromise;
    RingTonePlaySoundReporter_23613 *_ringToneReporter;
    RingBackPlaySoundReporter_23653 *_ringBackReporter;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(nonatomic) _Bool shouldUseNewVolumeStrategy; // @synthesize shouldUseNewVolumeStrategy=_shouldUseNewVolumeStrategy;
@property(nonatomic) float defaultVolume; // @synthesize defaultVolume=_defaultVolume;
@property(nonatomic) _Bool isOrignalVolumeValueQueried; // @synthesize isOrignalVolumeValueQueried=_isOrignalVolumeValueQueried;
@property(nonatomic) float originalVolumeValue; // @synthesize originalVolumeValue=_originalVolumeValue;
@property(nonatomic) _Bool isAudio; // @synthesize isAudio=_isAudio;
@property(nonatomic) _Bool hasResetReceiverVolume; // @synthesize hasResetReceiverVolume=_hasResetReceiverVolume;
@property(nonatomic) _Bool hasResetSpeakerVolume; // @synthesize hasResetSpeakerVolume=_hasResetSpeakerVolume;
@property(nonatomic) _Bool listenedNewRingBack; // @synthesize listenedNewRingBack=_listenedNewRingBack;
@property(retain, nonatomic) RingBackPlaySoundReporter_23653 *ringBackReporter; // @synthesize ringBackReporter=_ringBackReporter;
@property(retain, nonatomic) RingTonePlaySoundReporter_23613 *ringToneReporter; // @synthesize ringToneReporter=_ringToneReporter;
@property(retain, nonatomic) AnyPromise *ringFilePromise; // @synthesize ringFilePromise=_ringFilePromise;
@property(retain, nonatomic) RingBackInfoDisplaySheetView *sheetView; // @synthesize sheetView=_sheetView;
@property(retain, nonatomic) RingToneAvPlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool isCaller; // @synthesize isCaller=_isCaller;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) VideoRingNetProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) _Bool hasShowRingBackInfoView; // @synthesize hasShowRingBackInfoView=_hasShowRingBackInfoView;
@property(copy, nonatomic) CDUnknownBlockType jumpBlock; // @synthesize jumpBlock=_jumpBlock;
@property(retain, nonatomic) RingToneDetail *ringDetail; // @synthesize ringDetail=_ringDetail;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) NSString *chatroomUsername; // @synthesize chatroomUsername=_chatroomUsername;
@property(nonatomic) unsigned long long entryType; // @synthesize entryType=_entryType;
- (id)getCurrentNavigationController;
- (void)onRingToneJumpToAuthorPage;
- (void)restart;
- (void)setMute:(_Bool)arg1;
- (void)resume;
- (void)pause;
- (void)resetReceiverVolume;
- (void)resetSpeakerVolume;
- (void)__resetVolume;
- (void)restoreOriginalVolume;
- (void)setRingVolume:(float)arg1;
- (float)getRingVolume;
- (id)genRingToneReporter;
- (void)ringToneReporterInit;
- (void)ringBackReporterInit;
- (void)notificationRingReportRegister;
- (void)checklistenedNewRingBack;
- (_Bool)isCalled;
- (void)showRingBackInfoView;
- (void)playLocalRingFile;
- (id)doPromise:(id)arg1 withinTime:(double)arg2;
- (id)getAudiaoFile;
- (id)getAudiaoFileAndCheckUpdate;
- (id)getFriendRingDetail;
- (id)getRingToneTitle;
- (void)vibrate;
- (void)clear;
- (void)playRingToneSound;
- (id)playRingBackSound;
- (void)dealloc;
- (void)commonInit;
- (id)init;
- (id)initWithContact:(id)arg1 selfIsCaller:(_Bool)arg2 isAudio:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

