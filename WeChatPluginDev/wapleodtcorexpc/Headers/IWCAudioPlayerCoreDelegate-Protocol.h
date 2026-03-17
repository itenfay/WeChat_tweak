//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, WCAudioInfo;
@protocol IWCAudioPlayerCore;

@protocol IWCAudioPlayerCoreDelegate <NSObject>
- (void)wcAudioPlayerCore:(id <IWCAudioPlayerCore>)arg1 onEvent:(unsigned long long)arg2 audioInfo:(WCAudioInfo *)arg3 error:(NSError *)arg4;
- (void)wcAudioPlayerCore:(id <IWCAudioPlayerCore>)arg1 statusChanged:(unsigned long long)arg2 audioInfo:(WCAudioInfo *)arg3;
@end

