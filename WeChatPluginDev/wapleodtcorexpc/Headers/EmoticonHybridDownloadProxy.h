//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmojiInfoObj, EmoticonDownloadProxy;

@interface EmoticonHybridDownloadProxy
{
    EmojiInfoObj *m_emojiInfoObj;
    EmoticonDownloadProxy *m_downloadProxy;
    _Bool _isRequestingEmojiInfo;
}

+ (_Bool)isDomainNeedUpdateForUrl:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isRequestingEmojiInfo; // @synthesize isRequestingEmojiInfo=_isRequestingEmojiInfo;
- (void)onBatchdownloadWithIsSuccessed:(_Bool)arg1 newEmojiInfo:(id)arg2 isOriCanDownload:(_Bool)arg3;
- (void)reportErrorWithReason:(int)arg1;
- (void)callFailedDelegate;
- (id)createCdnDownloadConnectionWithEmojiInfoObj:(id)arg1;
- (void)setDelegate:(id)arg1;
- (_Bool)isActive;
- (void)startRequest;
- (id)initWithEmojiInfoObj:(id)arg1;
- (id)initWithMd5:(id)arg1;

@end

