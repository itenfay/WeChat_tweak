//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, UIColor;
@protocol _TtP6WeChat39SearchInteractiveVoiceInputViewDelegate_;

@interface _TtC6WeChat36SearchInteractiveVoiceInputViewModel : NSObject
{
    MISSING_TYPE *_hideStartButton;
    MISSING_TYPE *_keyboardHeight;
    MISSING_TYPE *_buttonBackgroundColor;
    MISSING_TYPE *_panLocation;
    MISSING_TYPE *_ellipseButtonState;
    MISSING_TYPE *_peakPower;
    MISSING_TYPE *rightOpType;
    MISSING_TYPE *rightOpWording;
    MISSING_TYPE *resultButtonType;
    MISSING_TYPE *delegate;
    MISSING_TYPE *startButtonFrame;
    MISSING_TYPE *_state;
    MISSING_TYPE *_activeButtonType;
    MISSING_TYPE *_isUserHolding;
    MISSING_TYPE *_isTranslatingVoiceToText;
    MISSING_TYPE *_reset;
    MISSING_TYPE *isCancelled;
    MISSING_TYPE *isReleasedTooFast;
    MISSING_TYPE *subscriptions;
    MISSING_TYPE *recordStartTime;
    MISSING_TYPE *recordEndTime;
    MISSING_TYPE *inputLogicDic;
    MISSING_TYPE *currentInputLogic;
    MISSING_TYPE *resultDataArray;
    MISSING_TYPE *reporter;
    MISSING_TYPE *voiceIdArray;
}

- (void).cxx_destruct;
- (id)getCurrentExposeId;
- (id)getCurrentResultText;
- (void)dealloc;
- (id)init;
@property(nonatomic) __weak id <_TtP6WeChat39SearchInteractiveVoiceInputViewDelegate_> delegate; // @synthesize delegate;
@property(nonatomic) long long resultButtonType; // @synthesize resultButtonType;
@property(nonatomic, copy) NSString *rightOpWording;
@property(nonatomic) long long rightOpType; // @synthesize rightOpType;
@property(nonatomic, retain) UIColor *buttonBackgroundColor;
@property(nonatomic) double keyboardHeight;
@property(nonatomic) _Bool hideStartButton;
- (void)resetStateToIdle;
- (void)OnVoiceTransEnd:(unsigned int)arg1;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnEndRecord;
- (void)OnStartRecord;

@end

