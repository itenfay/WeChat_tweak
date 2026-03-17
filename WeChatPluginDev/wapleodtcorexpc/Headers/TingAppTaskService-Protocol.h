//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSString;

@protocol TingAppTaskService <NSObject, UnitRCBaseProtocol>
- (void)setDisplayMode:(int)arg1;
- (int)displayMode;
- (NSString *)sessionId;
- (long long)enterScene;
- (void)clearSession;
- (void)updateSessionWithEnterScene:(long long)arg1;
@end

