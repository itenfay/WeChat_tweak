//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary;
@protocol KSAudioPlayerProtocol;

@protocol KSAudioPlayerDelegate <NSObject>

@optional
- (void)audioPlayer:(id <KSAudioPlayerProtocol>)arg1 dataBuffering:(double)arg2;
- (void)audioPlayer:(id <KSAudioPlayerProtocol>)arg1 status:(unsigned long long)arg2 params:(NSDictionary *)arg3;
@end

