//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class KSAudioQueue, KSAudioQueueBuff;

@protocol KSAudioQueueDelegate <NSObject>
- (struct AudioTimeStamp *)syncStartTimeStamp;
- (void)audioQueue:(KSAudioQueue *)arg1 stateChange:(_Bool)arg2;
- (void)audioQueue:(KSAudioQueue *)arg1 hasAvailablebuf:(KSAudioQueueBuff *)arg2;
@end

