//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol AudioPlayerProtocol;

@protocol AudioPlayerDelegate <NSObject>

@optional
- (void)audioPlayer:(id <AudioPlayerProtocol>)arg1 didChangePeakPower:(float)arg2;
- (void)audioPlayerDidFinishPlaying:(id <AudioPlayerProtocol>)arg1;
- (void)audioPlayerBeginPlaying:(id <AudioPlayerProtocol>)arg1 success:(_Bool)arg2;
@end

