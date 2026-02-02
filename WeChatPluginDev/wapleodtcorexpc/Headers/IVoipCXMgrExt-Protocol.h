//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol IVoipCXMgrExt <NSObject>

@optional
- (void)OnVoipCXCancel;
- (void)OnVoipCXCheckSpeakerMode;
- (void)OnVoipCXReject;
- (void)OnVoipCXHungUp;
- (void)OnVoipCXSetMuted;
@end

