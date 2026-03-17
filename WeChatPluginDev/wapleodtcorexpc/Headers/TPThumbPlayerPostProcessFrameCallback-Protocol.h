//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TPThumbPlayerWrapper;

@protocol TPThumbPlayerPostProcessFrameCallback <NSObject>
- (struct TPFrame *)onTPPostProcessFrame:(TPThumbPlayerWrapper *)arg1 frame:(struct TPFrame *)arg2 eventFlag:(int)arg3;
@end

