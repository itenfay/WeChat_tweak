//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MinimizeAudioPanelPlayingInfo, UIColor, UIImage;

@protocol IMinimizeAudioEventHandler <NSObject>
+ (UIImage *)tapeSourceIconForPlayingInfo:(MinimizeAudioPanelPlayingInfo *)arg1;
+ (UIColor *)tapeTintColorForPlayingInfo:(MinimizeAudioPanelPlayingInfo *)arg1;
@end

