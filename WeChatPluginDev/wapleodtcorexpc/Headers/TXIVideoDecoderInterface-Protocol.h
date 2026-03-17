//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "TXIVideoBindable-Protocol.h"

@protocol TXIVideoDecoderSupervisorInterface;

@protocol TXIVideoDecoderInterface <TXIVideoBindable>
@property(nonatomic) __weak id <TXIVideoDecoderSupervisorInterface> supervisor;
- (void)resetDecoderOnComplete:(void (^)(void))arg1;
@end

