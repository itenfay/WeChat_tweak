//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "TAVAudio-Protocol.h"

@protocol TAVAudioTransition;

@protocol TAVTransitionableAudio <TAVAudio>
@property(readonly, nonatomic) id <TAVAudioTransition> audioTransition;
@end

