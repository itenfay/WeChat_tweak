//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MTLResource-Protocol.h"

@class MTLTextureDescriptor, NSString;
@protocol MTLTexture;

@protocol MTLBuffer <MTLResource>
@property(readonly) unsigned long long gpuAddress;
@property(readonly) unsigned long long length;
- (void)removeAllDebugMarkers;
- (void)addDebugMarker:(NSString *)arg1 range:(struct _NSRange)arg2;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (void)didModifyRange:(struct _NSRange)arg1;
- (void *)contents;
@end

