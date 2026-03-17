//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class MMListenAudioBaseRequest;

@protocol TingAudioExptService <NSObject, UnitRCBaseProtocol>
- (MMListenAudioBaseRequest *)getBaseRequest;
- (_Bool)enableAutoNextChannelAll;
- (_Bool)enableTopLines;
- (_Bool)enableAutoNextChannel;
- (_Bool)enableAudioRadioVideoCard;
- (_Bool)enableAudioRadioTabs;
- (_Bool)enableAudioRadioSquare;
@end

