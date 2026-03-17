//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class VoIPMiniInAppView;

@protocol VoIPMiniInAppViewDelegate <NSObject>
- (void)miniInAppViewOnExtendAreaClick:(VoIPMiniInAppView *)arg1;
- (void)miniInAppViewOnMainAreaClick:(VoIPMiniInAppView *)arg1;
@end

