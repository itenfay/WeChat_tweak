//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "IWCAudioPlayer-Protocol.h"

@class WCAudioInfo;
@protocol IWCAudioPlayerCoreDelegate;

@protocol IWCAudioPlayerCore <IWCAudioPlayer>
@property(nonatomic) __weak id <IWCAudioPlayerCoreDelegate> delegate;
- (void)playWithAudioInfo:(WCAudioInfo *)arg1 startTime:(double)arg2;
@end

