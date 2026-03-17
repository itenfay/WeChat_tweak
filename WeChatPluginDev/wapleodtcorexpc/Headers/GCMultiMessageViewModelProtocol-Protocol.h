//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "GCMessageViewModelProtocol-Protocol.h"

@class GCMessageViewModel, NSString;

@protocol GCMultiMessageViewModelProtocol <GCMessageViewModelProtocol>
- (void)selectChannelId:(long long)arg1;
- (GCMessageViewModel *)viewModelOfChannelId:(long long)arg1;
- (void)showBtmTipWithText:(NSString *)arg1 handleBlock:(void (^)(id))arg2;
@end

