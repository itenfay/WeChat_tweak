//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BaseResponse, NSString, VoiceTransRes;

@protocol VoiceTransDelegate <NSObject>
- (void)onVoiceTransBegin:(NSString *)arg1;
- (void)onVoiceTransFail:(NSString *)arg1 baseResponse:(BaseResponse *)arg2;
- (void)onVoiceTransEnd:(NSString *)arg1 FromCache:(_Bool)arg2;
- (void)onVoiceTransVoiceID:(NSString *)arg1 transResult:(VoiceTransRes *)arg2;
@end

