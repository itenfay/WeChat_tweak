//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSArray, NSString;
@protocol TingDiscoverTapesListener;

@protocol TingDiscoverTapesService <NSObject, UnitRCBaseProtocol>
- (void)opLike:(unsigned int)arg1 scene:(int)arg2 listenId:(NSString *)arg3 isCancel:(_Bool)arg4;
- (void)getListenCommentInfo:(unsigned int)arg1 listenIds:(NSArray *)arg2;
- (_Bool)discoverMusicTapes:(unsigned int)arg1;
- (void)removeListener:(id <TingDiscoverTapesListener>)arg1;
- (void)addListener:(id <TingDiscoverTapesListener>)arg1;
@end

