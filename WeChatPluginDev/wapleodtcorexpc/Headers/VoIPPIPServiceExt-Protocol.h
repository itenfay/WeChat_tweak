//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol VoIPPIPServiceExt <NSObject>
- (void)VoIPPIPServiceDidRemoteCaptureSuspend;
- (void)VoIPPIPServiceOnRestoreUserInterfaceForPictureInPictureStop;
- (void)VoIPPIPServiceEnterForeground:(_Bool)arg1;
- (void)VoIPPIPServiceDidStopPictureInPicture;
- (void)VoIPPIPServiceDidStartPictureInPicture;
- (void)VoIPPIPServiceWillStartPictureInPicture;
@end

