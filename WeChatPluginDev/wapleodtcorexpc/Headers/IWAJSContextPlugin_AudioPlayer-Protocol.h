//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WAAudioPlayBackDelegate;

@protocol IWAJSContextPlugin_AudioPlayer <NSObject>
- (void)setPlayBackDelegate:(unsigned int)arg1 delegate:(id <WAAudioPlayBackDelegate>)arg2;
- (_Bool)isPlayingAudio;
@end

