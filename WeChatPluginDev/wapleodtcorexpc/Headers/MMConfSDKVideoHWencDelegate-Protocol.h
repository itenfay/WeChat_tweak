//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol MMConfSDKVideoHWencDelegate <NSObject>
- (int)gotEncodeErrCode:(int)arg1 encIdx:(int)arg2;
- (int)gotEncodedData:(NSData *)arg1 isKeyFrame:(_Bool)arg2 codecType:(int)arg3 encIdx:(int)arg4 isScreen:(_Bool)arg5;
- (int)gotXpsData:(NSData *)arg1 codecType:(int)arg2 encIdx:(int)arg3 isScreen:(_Bool)arg4;
@end

