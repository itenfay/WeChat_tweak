//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class KSAudioDataProvider;
@protocol KSAudioFileProtocol;

@protocol KSAudioDataProviderDelegate <NSObject>
- (void)provider:(KSAudioDataProvider *)arg1 useDefaultAudioFile:(id *)arg2;
- (void)provider:(KSAudioDataProvider *)arg1 onGuessType:(id <KSAudioFileProtocol>)arg2;
- (void)providerOnDataFinish:(KSAudioDataProvider *)arg1;
- (void)providerOnDataReceive:(KSAudioDataProvider *)arg1;
- (void)providerOnNetErr:(KSAudioDataProvider *)arg1;
- (void)providerOnDataErr:(KSAudioDataProvider *)arg1;
- (void)providerOnDataReady:(KSAudioDataProvider *)arg1;
@end

