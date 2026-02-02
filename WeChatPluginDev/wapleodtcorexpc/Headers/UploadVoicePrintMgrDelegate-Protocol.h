//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol UploadVoicePrintMgrDelegate <NSObject>

@optional
- (void)OnMgrRegOkWithBioSigKey:(NSString *)arg1 VoiceId:(unsigned int)arg2;
- (void)OnMgrVerifyOkWithRandomKey:(NSString *)arg1 VoiceId:(unsigned int)arg2;
- (void)OnMgrNetworkError:(int)arg1 andMessage:(NSString *)arg2;
- (void)OnMgrLocalFileOperationError;
- (void)OnMgrGetMatchingResult:(int)arg1 VoiceId:(unsigned int)arg2;
@end

