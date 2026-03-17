//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJVoiceChangeCell;

@protocol MJVoiceChangeCellDelegate <NSObject>
- (void)voiceChangeCellDidSelectDeleteCloneRole:(MJVoiceChangeCell *)arg1;
- (void)voiceChangeCellDidRequestRetry:(MJVoiceChangeCell *)arg1;
@end

