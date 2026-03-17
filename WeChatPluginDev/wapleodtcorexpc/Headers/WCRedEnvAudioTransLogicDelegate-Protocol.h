//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString;

@protocol WCRedEnvAudioTransLogicDelegate <NSObject>
- (void)onVoiceTransDisaster:(unsigned int)arg1;
- (void)onVoiceTransTimeout:(unsigned int)arg1;
- (void)onEndVoiceTrans:(unsigned int)arg1 VoiceIds:(NSMutableArray *)arg2;
- (void)onGetFinalKeywordList:(NSArray *)arg1 InputId:(unsigned int)arg2;
- (void)onGetTransingKeywordList:(NSDictionary *)arg1 InputId:(unsigned int)arg2;
- (void)onGetResultText:(NSString *)arg1 InputId:(unsigned int)arg2;
@end

