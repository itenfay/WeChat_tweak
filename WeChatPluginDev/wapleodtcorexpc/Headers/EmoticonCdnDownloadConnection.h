//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmojiInfoObj;

@interface EmoticonCdnDownloadConnection
{
    _Bool _m_isActive;
    _Bool _disableExternUrl;
    int _downloadType;
    int _m_decryptResult;
    EmojiInfoObj *_emojiInfoObj;
}

+ (void)keyReportDownloadWithCdnHttpFailed;
+ (void)keyReportDownloadWithCdnHttpSuccess;
+ (void)keyReportDownloadWithCdnHttpStart;
+ (void)keyReportDecryptFailedWithType:(int)arg1;
+ (void)keyReportDecryptOkWithType:(int)arg1;
+ (void)keyReportVerifyFailedWithType:(int)arg1;
+ (void)keyReportVerifyOkWithType:(int)arg1;
+ (void)keyReportDownloadFailed;
+ (void)keyReportDownloadOK;
+ (id)downloadUrlForEmojiInfoObj:(id)arg1 downloadType:(int *)arg2 idkey:(int *)arg3 disableExternUrl:(_Bool)arg4;
+ (id)downloadUrlForEmojiInfoObj:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool disableExternUrl; // @synthesize disableExternUrl=_disableExternUrl;
@property(nonatomic) int m_decryptResult; // @synthesize m_decryptResult=_m_decryptResult;
@property(nonatomic) _Bool m_isActive; // @synthesize m_isActive=_m_isActive;
@property(nonatomic) int downloadType; // @synthesize downloadType=_downloadType;
@property(retain, nonatomic) EmojiInfoObj *emojiInfoObj; // @synthesize emojiInfoObj=_emojiInfoObj;
- (void)kvReportDownloadFailed;
- (void)kvReportDownloadOKAndVerifyFailed;
- (void)kvReportDownloadAndVerifyOK;
- (void)callOkDelegateWithFilePath:(id)arg1;
- (void)callFailedDelegate;
- (_Bool)checkImageSizeWithData:(id)arg1 reportReason:(int *)arg2;
- (void)onDownloadFinishWithData:(id)arg1;
- (void)internalDownloadWithRequestUrl:(id)arg1;
- (void)startRequest;
- (_Bool)isActive;
- (id)initWithEmojiInfoObj:(id)arg1;

@end

