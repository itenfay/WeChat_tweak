//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TPThumbPlayerWrapper;

@protocol TPThumbPlayerAudioFrameCallback <NSObject>
- (void)onTPAudioFrame:(TPThumbPlayerWrapper *)arg1 frame:(struct TPFrame *)arg2 flags:(int)arg3;
@end

