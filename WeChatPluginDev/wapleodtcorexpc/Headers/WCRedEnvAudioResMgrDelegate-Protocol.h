//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol WCRedEnvAudioResMgrDelegate <NSObject>

@optional
- (void)onGetAudioFinalKeywordData:(NSArray *)arg1;
- (void)onGetAudioTransingKeywordData:(NSDictionary *)arg1;
- (void)onAudioCdnDownloadFail:(NSString *)arg1;
- (void)onAudioCdnDownloadSucc:(NSString *)arg1 cdnUrl:(NSString *)arg2;
- (void)onAudioUploadCdnFailWithPath:(NSString *)arg1;
- (void)onAudioUploadCdnSuccWithPath:(NSString *)arg1 cdnUrl:(NSString *)arg2 aesKey:(NSString *)arg3 fileSize:(long long)arg4 recordLength:(long long)arg5 format:(long long)arg6;
- (void)onAudioPlayError:(NSString *)arg1 playtime:(long long)arg2;
- (void)onAudioEndPlay:(NSString *)arg1 playtime:(long long)arg2;
- (void)onAudioStartPlay:(NSString *)arg1;
- (void)onAudioRecordNeedNoticeTimeout:(long long)arg1;
- (void)onAudioRecordLevelMeter:(float)arg1;
- (void)onFinishedAudioRecord:(NSString *)arg1 recordLength:(int)arg2 errCode:(long long)arg3 stopReason:(long long)arg4;
- (void)onAudioRecordTooShort;
- (void)onStartAudioRecord:(long long)arg1;
@end

