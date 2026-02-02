//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCPlayerPlaybackInfoDelegate <NSObject>
- (void)onPlayerProcessChange:(unsigned long long)arg1;
- (void)onPlayerStateChange:(unsigned long long)arg1;
@end

