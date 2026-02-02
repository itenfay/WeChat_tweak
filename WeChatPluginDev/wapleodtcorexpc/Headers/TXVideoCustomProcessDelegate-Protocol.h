//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol TXVideoCustomProcessDelegate <NSObject>

@optional
- (_Bool)onPlayerPixelBuffer:(struct __CVBuffer *)arg1;
- (void)onDetectFacePoints:(NSArray *)arg1;
- (void)onTextureDestoryed;
- (unsigned int)onPreProcessTexture:(unsigned int)arg1 width:(double)arg2 height:(double)arg3;
@end

