//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WSInputProviderDelegate <NSObject>
- (void)onGetTextInput:(NSString *)arg1 isFromVoice:(_Bool)arg2;
@end

