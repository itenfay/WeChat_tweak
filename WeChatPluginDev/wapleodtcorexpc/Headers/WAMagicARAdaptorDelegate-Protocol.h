//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WAMagicARAdaptorDelegate <NSObject>
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>>)getFilePath:(struct basic_string<char, std::char_traits<char>, std::allocator<char>>)arg1;
- (struct WAAppInfo)magicarGetAppInfo;
- (struct ShoeConfig)magicarGetShoeConfig;
- (struct MonoDepthConfig)magicarGetDepthConfig;
- (struct HandConfig)magicarGetHandConfig;
- (struct OCRConfig)magicarGetOCRConfig;
- (struct BodyConfig)magicarGetBodyConfig;
- (struct FaceConfig)magicarGetFaceConfig;
- (struct OSDConfig)magicarGetOSDConfig;
- (void *)getEGLContext:(struct OpaqueJSValue *)arg1;
- (void)modifyWebGLTexture:(struct OpaqueJSValue *)arg1 glTexture:(unsigned int)arg2;
- (void)checkIsMagicARAvailableNeedCamera:(_Bool)arg1 completion:(void (^)(int))arg2;
@end

