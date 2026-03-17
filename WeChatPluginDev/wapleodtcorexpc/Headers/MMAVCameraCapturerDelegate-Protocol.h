//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMAVCameraCapturerDelegate <NSObject>
- (void)onCameraCapture:(struct opaqueCMSampleBuffer *)arg1 mirror:(_Bool)arg2 rotation:(long long)arg3 isFront:(_Bool)arg4;
@end

