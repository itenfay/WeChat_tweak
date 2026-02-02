//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol TXLiteAVDecoderFactoryInterface <NSObject>

@optional
- (void)destoryAVCDecoder:(void *)arg1;
- (void *)createAVCDecoder;
- (void)destroyHEVCDecoder:(void *)arg1;
- (void *)createHEVCDecoder;
@end

