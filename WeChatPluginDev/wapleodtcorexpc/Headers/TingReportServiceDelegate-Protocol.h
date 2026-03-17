//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSString, TingItem, TingReportContext, TingTapeItem;
@protocol TingPlayTask;

@protocol TingReportServiceDelegate <NSObject, UnitRCBaseProtocol>
- (id <TingPlayTask>)getPlayingTask;
- (_Bool)isPlaying;
- (int)getAppEnterScene;
- (NSString *)getAppSessionId;
- (int)getNetType;
- (int)getAudioSessionRoute;
- (TingItem *)getPlayerTingItem;
- (TingReportContext *)getPlayerReportContext;
- (TingTapeItem *)getTapeItem;
@end

