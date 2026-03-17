//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "TXIVideoBindable-Protocol.h"

@class NSError, TXCVideoFrame;

@protocol TXIVideoDecoderSupervisorInterface <TXIVideoBindable>
@property(readonly) long long cachedFrameCount;
@property(readonly) _Bool usesHevc;
@property(readonly) int decoderType;
- (NSError *)notifyError:(NSError *)arg1 withFrame:(TXCVideoFrame *)arg2;
- (void)setHasCustomDecoder:(_Bool)arg1;
- (void)setStrategy:(int)arg1;
- (void)reset;
@end

