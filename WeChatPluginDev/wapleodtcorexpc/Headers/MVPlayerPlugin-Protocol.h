//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMVPlayer;

@protocol MVPlayerPlugin <NSObject>
@property(nonatomic) __weak MMMVPlayer *player;
- (void)executeWithEvent:(unsigned long long)arg1;
@end

