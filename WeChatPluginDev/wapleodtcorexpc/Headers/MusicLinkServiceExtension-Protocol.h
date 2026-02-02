//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MusicLinkService, MusicLiveGetLinkRespInfo, NSArray;

@protocol MusicLinkServiceExtension <NSObject>
- (void)musicLinkService:(MusicLinkService *)arg1 onAudioTypeChangedWithpreviousInfo:(MusicLiveGetLinkRespInfo *)arg2 updatedInfo:(MusicLiveGetLinkRespInfo *)arg3;
- (void)musicLinkService:(MusicLinkService *)arg1 didGetLinkWithResults:(NSArray *)arg2;
@end

