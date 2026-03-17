//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "TAVVideo-Protocol.h"

@protocol TAVVideoTransition;

@protocol TAVTransitionableVideo <TAVVideo>
@property(readonly, nonatomic) id <TAVVideoTransition> videoTransition;
@end

