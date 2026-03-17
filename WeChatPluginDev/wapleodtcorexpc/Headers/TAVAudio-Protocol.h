//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "TAVAudioCompositionTrack-Protocol.h"
#import "TAVAudioMix-Protocol.h"
#import "TAVAudioProcessingNode-Protocol.h"
#import "TAVCompositionTimeRange-Protocol.h"

@protocol TAVAudio <TAVCompositionTimeRange, TAVAudioCompositionTrack, TAVAudioMix, TAVAudioProcessingNode>
@end

