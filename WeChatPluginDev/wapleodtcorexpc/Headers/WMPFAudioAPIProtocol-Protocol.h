//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WMPFAudioAPIProtocol <NSObject>

@optional
- (void)audioSessionInterruptionEnd;
- (void)audioSessionInterruptionBegan;
- (void)innerAppAudioInterruptionEnd;
- (void)innerAppAudioInterruptionBegan;
@end

