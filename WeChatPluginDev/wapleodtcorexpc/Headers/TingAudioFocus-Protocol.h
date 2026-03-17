//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSData;
@protocol TingAudioFocusCallback;

@protocol TingAudioFocus <NSObject, UnitRCBaseProtocol>
- (void)setAudioFocusCallback:(id <TingAudioFocusCallback>)arg1;
- (void)requestFocus:(int)arg1 context:(NSData *)arg2;
@end

