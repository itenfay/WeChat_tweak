//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJShootComposingViewModel, NSError, NSString, OMJAIGCParams, WCAudioModule, WCAudioModuleParam;

@protocol MJShootComposingViewModelDelegate <NSObject>

@optional
- (void)shootComposingViewModel:(MJShootComposingViewModel *)arg1 audioModuleInterruptionBegin:(WCAudioModule *)arg2 param:(WCAudioModuleParam *)arg3;
- (void)shootComposingViewModelDidTimeoutSwitchCamera:(MJShootComposingViewModel *)arg1 taskID:(NSString *)arg2;
- (void)shootComposingViewModelDidFinishSwitchCamera:(MJShootComposingViewModel *)arg1;
- (void)shootComposingViewModelWillStartSwitchCamera:(MJShootComposingViewModel *)arg1 isTemplateSwitched:(_Bool)arg2;
- (void)shootComposingViewModel:(MJShootComposingViewModel *)arg1 didPresentFirstFrameAfterSwitchTemplate:(NSString *)arg2;
- (void)shootComposingViewModelDidPresentFirstFrame:(MJShootComposingViewModel *)arg1;
- (void)shootComposingViewModel:(MJShootComposingViewModel *)arg1 onAIGCProcessFailed:(NSError *)arg2;
- (void)shootComposingViewModelOnAIGCProcessSucceed:(MJShootComposingViewModel *)arg1;
- (void)shootComposingViewModelOnAIGCProcessStarted:(MJShootComposingViewModel *)arg1;
- (void)shootComposingViewModel:(MJShootComposingViewModel *)arg1 needRequestAIGC:(OMJAIGCParams *)arg2;
- (void)shootComposingViewModel:(MJShootComposingViewModel *)arg1 recordingTimeDidChange:(CDStruct_1b6d18a9)arg2 maxRecordingDuration:(CDStruct_1b6d18a9)arg3;
- (void)shootComposingViewModel:(MJShootComposingViewModel *)arg1 recordingDidFail:(NSError *)arg2;
@end

