//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSData, TingRGBAImageInfo;

@protocol TingURTingImageUtils <NSObject, UnitRCBaseProtocol>
- (void)imageColorsAsync:(NSData *)arg1 imageInfo:(TingRGBAImageInfo *)arg2 callback:(void (^)(TingImageColorAsset *))arg3;
- (void)generateMinibarBackground:(NSData *)arg1 imageInfo:(TingRGBAImageInfo *)arg2 callback:(void (^)(TingRGBAImageData *))arg3;
- (void)generatePlayerBackground:(NSData *)arg1 imageInfo:(TingRGBAImageInfo *)arg2 isMusic:(_Bool)arg3 callback:(void (^)(TingRGBAImageData *))arg4;
@end

