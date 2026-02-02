//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, SpeakTextLoadingRequest;

@protocol SpeakTextLoadingRequestDelegate <NSObject>
- (void)onLoadingRequestFail:(SpeakTextLoadingRequest *)arg1;
- (void)onLoadingRequest:(SpeakTextLoadingRequest *)arg1 receiveData:(NSData *)arg2 voiceFormat:(unsigned int)arg3 reachEnd:(_Bool)arg4 extInfos:(NSArray *)arg5;
@end

