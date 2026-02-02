//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJLowerThirdImageGenerator : NSObject
{
    SharedPtr_874da711 _backingImageGenerator;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) SharedPtr_874da711 backingImageGenerator; // @synthesize backingImageGenerator=_backingImageGenerator;
- (void)generateWithLowerThirdID:(id)arg1 userInputData:(id)arg2 maxPointSize:(double)arg3 scaleFactor:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)generateWithLowerThirdID:(id)arg1 userInputData:(id)arg2 imageSize:(struct CGSize)arg3 scaleMode:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)getFontNamesForLowerThirdWithID:(id)arg1;
- (_Bool)registerFontWithName:(id)arg1 path:(id)arg2 error:(id *)arg3;
- (_Bool)registerLowerThirdWithID:(id)arg1 path:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)init;

@end

