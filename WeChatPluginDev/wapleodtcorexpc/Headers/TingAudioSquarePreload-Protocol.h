//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class AudioSquareStoreInfo, SquarePreloadInfo;

@protocol TingAudioSquarePreload <NSObject, UnitRCBaseProtocol>
- (void)clearPreloadResponse;
- (AudioSquareStoreInfo *)readPreloadResponse;
- (void)prelaod:(SquarePreloadInfo *)arg1;
@end

