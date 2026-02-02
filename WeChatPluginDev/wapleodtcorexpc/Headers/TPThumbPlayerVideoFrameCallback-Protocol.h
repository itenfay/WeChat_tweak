//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TPThumbPlayerWrapper;

@protocol TPThumbPlayerVideoFrameCallback <NSObject>
- (void)onTPVideoFrame:(TPThumbPlayerWrapper *)arg1 frame:(struct TPFrame *)arg2 trackID:(int)arg3 flags:(int)arg4;
@end

