//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCPipPlayerDelegate <NSObject>
- (void)onRequireSyncToPipPlayerTime:(double)arg1;
- (void)onPipPlayerStateDidChange:(long long)arg1;
- (double)getMainCurrentTime;
- (void)onPipPlayerRePlay;
- (_Bool)isForbidStartPlay;
@end

