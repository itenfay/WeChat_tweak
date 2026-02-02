//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, VoiceMessageViewModel;
@protocol VoiceTransTipsHelperDelegate;

@interface VoiceTransTipsHelper : NSObject
{
    _Bool _bAutoPlaying;
    _Bool _bAutoTranslating;
    id <VoiceTransTipsHelperDelegate> _delegate;
    NSHashTable *_voiceCellTable;
    VoiceMessageViewModel *_tipsShowingViewModel;
}

+ (_Bool)CanShowQuickTransTips;
- (void).cxx_destruct;
@property(nonatomic) _Bool bAutoTranslating; // @synthesize bAutoTranslating=_bAutoTranslating;
@property(nonatomic) _Bool bAutoPlaying; // @synthesize bAutoPlaying=_bAutoPlaying;
@property(retain, nonatomic) VoiceMessageViewModel *tipsShowingViewModel; // @synthesize tipsShowingViewModel=_tipsShowingViewModel;
@property(retain, nonatomic) NSHashTable *voiceCellTable; // @synthesize voiceCellTable=_voiceCellTable;
@property(nonatomic) __weak id <VoiceTransTipsHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onAutoTransEnd:(int)arg1;
- (void)onAutoTransStart;
- (void)onAutoPlayEndWithMsg:(id)arg1;
- (void)OnEndPlaying:(id)arg1 isForceStop:(_Bool)arg2;
- (void)OnBeginPlaying:(id)arg1 success:(_Bool)arg2;
- (void)onTableDidScroll:(id)arg1;
- (void)animateCleanTransTips;
- (void)onChangeVisableCells:(id)arg1;
- (void)tryShowTranslateTips;
- (void)onViewDisappear;
- (float)getShowTipsMinDuration;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

