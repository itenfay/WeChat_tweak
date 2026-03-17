//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol TXCVideoDecoderDelegate <NSObject>
- (void)onDecodeData:(const struct DecodedDataS *)arg1 cost:(unsigned int)arg2;
@end

