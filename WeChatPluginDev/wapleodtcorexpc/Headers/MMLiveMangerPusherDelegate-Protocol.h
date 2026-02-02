//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveManger;

@protocol MMLiveMangerPusherDelegate <NSObject>
- (void)liveManager:(MMLiveManger *)arg1 didPushVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 shouldReportCaptureMetrics:(_Bool)arg3;
@end

