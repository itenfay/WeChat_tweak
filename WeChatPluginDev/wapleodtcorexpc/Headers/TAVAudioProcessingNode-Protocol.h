//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TAVAudioProcessingRenderInfo;

@protocol TAVAudioProcessingNode <NSObject>
- (void)applyEffectToBufferListInOut:(struct AudioBufferList *)arg1 renderInfo:(TAVAudioProcessingRenderInfo *)arg2;
@end

