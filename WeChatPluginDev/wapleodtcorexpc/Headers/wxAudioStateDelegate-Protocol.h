//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol wxAudioStateDelegate <NSObject>
- (void)onWXAudioState:(int)arg1 audioId:(unsigned long long)arg2;
- (void)canPlayNowAndAutoActive:(unsigned long long)arg1 block:(void (^)(_Bool))arg2;
@end

