//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol OpenVoiceOpenglesContextDelegate <NSObject>
- (UIView *)renderView;

@optional
- (void)updateViewFrameWithContentSize:(struct CGSize)arg1;
@end

