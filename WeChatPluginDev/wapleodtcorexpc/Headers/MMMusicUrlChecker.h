//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMMusicUrlChecker
{
    CDUnknownBlockType _spamCheckCompleteHandler;
    CDUnknownBlockType _shakeMusicCheckCompleteHandler;
    NSString *m_nsMusicUrl;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)cancelCheckMusicUrl:(unsigned int)arg1;
- (unsigned int)checkMusicUrlWithMusicInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned int)checkMusicUrlWithMusicInfo:(id)arg1 ignoreCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned int)checkMusicUrlWithAppId:(id)arg1 mid:(id)arg2 webUrl:(id)arg3 ignoreCache:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handleGetShakeMusicUrlResponse:(id)arg1;
- (void)handleCheckMusicResponse:(id)arg1;
- (void)cancelCheckShakeMusicUrl;
- (void)checkShakeMusicUrl:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)cancelCheckSpam;
- (void)checkSpamMusicInfo:(id)arg1 musicDataUrl:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
- (void)checkSpamMusicInfo:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;

@end

