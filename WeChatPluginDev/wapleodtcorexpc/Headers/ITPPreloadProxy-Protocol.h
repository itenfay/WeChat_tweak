//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, TPDownloadParamData;
@protocol TPPreloadProxyDelegate;

@protocol ITPPreloadProxy <NSObject>
@property(nonatomic) __weak id <TPPreloadProxyDelegate> delegate;
- (NSString *)errorCodeStringWithPreloadId:(int)arg1;
- (_Bool)isAvailable;
- (void)pushEvent:(long long)arg1;
- (void)stopPreloadWithPreloadId:(int)arg1;
- (int)startClipPreloadWithFileId:(NSString *)arg1 downloadParamList:(NSArray *)arg2;
- (int)startPreloadWithFileId:(NSString *)arg1 downloadParam:(TPDownloadParamData *)arg2 httpHeader:(NSDictionary *)arg3;
- (int)startPreloadWithFileId:(NSString *)arg1 downloadParam:(TPDownloadParamData *)arg2;
@end

