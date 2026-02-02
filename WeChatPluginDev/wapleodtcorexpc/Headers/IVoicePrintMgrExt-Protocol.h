//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IVoicePrintMgrExt <NSObject>

@optional
- (void)OnEnviromentCheckModeLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnEnviromentCheckResult:(_Bool)arg1;
- (void)OnRegOkWithBioSigKey:(NSString *)arg1 VoiceId:(unsigned int)arg2;
- (void)OnVerifyOkWithRandomKey:(NSString *)arg1 andVoiceId:(unsigned int)arg2;
- (void)OnUploadError:(int)arg1 withVoiceId:(unsigned int)arg2 andMessage:(NSString *)arg3;
- (void)OnGetMatchingResult:(int)arg1 andVoiceId:(unsigned int)arg2;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnEndRecord:(_Bool)arg1;
- (void)OnStartRecord;
@end

