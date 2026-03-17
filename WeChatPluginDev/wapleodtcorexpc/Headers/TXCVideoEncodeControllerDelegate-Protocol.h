//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TXCVideoEncodeController;

@protocol TXCVideoEncodeControllerDelegate <NSObject>
- (void)encodeController:(TXCVideoEncodeController *)arg1 onEncoderTypeChanged:(int)arg2 onCodecTypeChanged:(int)arg3 streamType:(int)arg4 encoderFeatures:(unsigned long long)arg5;
- (void)encodeController:(TXCVideoEncodeController *)arg1 needsInputFormat:(unsigned long long)arg2;
@end

