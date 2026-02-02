//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class KSAudioDataProvider, KSLimitNetParam, KSSongInfo, LZAudioDataDownloader, NSObject, NSString;
@protocol KSAudioPlayerUserDefineProtocol, KSAudioProcessorProtocol, OS_dispatch_queue;

@protocol KSAudioPlayerUserDefineProtocol <NSObject>
- (_Bool)isNetOk;

@optional
- (_Bool)setUserDefineAudioSessionCategoryWithError:(id *)arg1;
- (KSLimitNetParam *)limitNetParam;
- (NSString *)retryUrlFilter:(KSSongInfo *)arg1 lastUrl:(NSString *)arg2 retryCnt:(unsigned int)arg3;
- (unsigned int)downloadRetryCnt;
- (LZAudioDataDownloader *)createAudioDownloader;
- (KSAudioDataProvider *)createDataProvider:(KSSongInfo *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 context:(void *)arg3 downloadProtocol:(id <KSAudioPlayerUserDefineProtocol>)arg4;
- (id <KSAudioProcessorProtocol>)createUserAudioProcessor:(KSSongInfo *)arg1;
@end

