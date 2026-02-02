//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, VoiceAutoTransReporter;
@protocol VoiceAutoTranslateHelperDelegate;

@interface VoiceAutoTranslateHelper : NSObject
{
    id <VoiceAutoTranslateHelperDelegate> m_delegate;
    _Bool _bAutoScrollUp;
    _Bool _continueTranslate;
    VoiceAutoTransReporter *_reporter;
    NSMutableArray *_autoTranslateQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *autoTranslateQueue; // @synthesize autoTranslateQueue=_autoTranslateQueue;
@property(retain, nonatomic) VoiceAutoTransReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) _Bool continueTranslate; // @synthesize continueTranslate=_continueTranslate;
@property(nonatomic) _Bool bAutoScrollUp; // @synthesize bAutoScrollUp=_bAutoScrollUp;
@property(nonatomic) __weak id <VoiceAutoTranslateHelperDelegate> m_delegate; // @synthesize m_delegate;
- (unsigned long long)getMsgIndexWithLocalId:(unsigned int)arg1 InArr:(id)arg2;
- (void)OnUserScrollView:(id)arg1;
- (void)OnStopAutoScrollUp;
- (void)OnVoiceTranslateEnd:(id)arg1 StopReason:(int)arg2;
- (void)OnVoiceTranslateStart:(id)arg1;
- (void)AddMessageLocalID:(unsigned int)arg1;
- (id)getSortMsgArr;
- (void)onVoiceStartTranslate:(id)arg1;
- (void)StopAutoVoiceTranslate;
- (void)translateMsgList;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

