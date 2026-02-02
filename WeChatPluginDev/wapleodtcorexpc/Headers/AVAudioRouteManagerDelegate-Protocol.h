//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol AVAudioRouteManagerDelegate <NSObject>
- (void)updateSpeakerButtonStatus:(NSString *)arg1 hasExtenalOutput:(_Bool)arg2;
- (void)updatePortWithReasonValue:(unsigned long long)arg1 prevPort:(NSString *)arg2;
@end

