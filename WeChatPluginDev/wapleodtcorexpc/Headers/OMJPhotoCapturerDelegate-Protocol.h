//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, OMJPhotoCapturer;

@protocol OMJPhotoCapturerDelegate <NSObject>

@optional
- (void)didFinishCapturePhoto:(OMJPhotoCapturer *)arg1 photos:(NSArray *)arg2;
@end

