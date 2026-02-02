//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, TingItem, UILabel, UIView, WCBrandAudioPlayView;

@interface VoiceReaderItemView
{
    WCBrandAudioPlayView *m_playingImageView;
    UIView *m_titleTimeView;
    UILabel *m_timeLabel;
    unsigned int _playLength;
    TingItem *_tingItem;
    NSMutableArray *_voiceOverElements;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *voiceOverElements; // @synthesize voiceOverElements=_voiceOverElements;
@property(nonatomic) unsigned int playLength; // @synthesize playLength=_playLength;
@property(retain, nonatomic) TingItem *tingItem; // @synthesize tingItem=_tingItem;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (_Bool)isAccessibilityElement;
- (void)updateVoiceOverElements;
- (void)initVoiceOverElements;
- (void)initPlayBtn:(_Bool)arg1;
- (void)normalView;
- (void)topView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

