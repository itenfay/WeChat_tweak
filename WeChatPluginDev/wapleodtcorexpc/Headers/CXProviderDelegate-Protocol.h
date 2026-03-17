//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVAudioSession, CXAction, CXAnswerCallAction, CXEndCallAction, CXPlayDTMFCallAction, CXProvider, CXSetGroupCallAction, CXSetHeldCallAction, CXSetMutedCallAction, CXStartCallAction, CXTransaction;

@protocol CXProviderDelegate <NSObject>
- (void)providerDidReset:(CXProvider *)arg1;

@optional
- (void)provider:(CXProvider *)arg1 didDeactivateAudioSession:(AVAudioSession *)arg2;
- (void)provider:(CXProvider *)arg1 didActivateAudioSession:(AVAudioSession *)arg2;
- (void)provider:(CXProvider *)arg1 timedOutPerformingAction:(CXAction *)arg2;
- (void)provider:(CXProvider *)arg1 performPlayDTMFCallAction:(CXPlayDTMFCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performSetGroupCallAction:(CXSetGroupCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performSetMutedCallAction:(CXSetMutedCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performSetHeldCallAction:(CXSetHeldCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performEndCallAction:(CXEndCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performAnswerCallAction:(CXAnswerCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performStartCallAction:(CXStartCallAction *)arg2;
- (_Bool)provider:(CXProvider *)arg1 executeTransaction:(CXTransaction *)arg2;
- (void)providerDidBegin:(CXProvider *)arg1;
@end

