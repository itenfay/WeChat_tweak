//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class XVisComposeElement;

@interface XComposeTextureWrapper : NSObject
{
    void *yTexture;
    void *uvTexture;
    unsigned int yTextureId;
    unsigned int uvTextureId;
    unsigned int paramUniformId;
    unsigned int yuvTypeUniformIndex;
    XVisComposeElement *_element;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XVisComposeElement *element; // @synthesize element=_element;
- (void)bindYUVTypeToUniformBuffer:(void *)arg1;
- (void)setYUVTypeUniformIndex:(unsigned int)arg1;
- (void)setParamsUniformId:(unsigned int)arg1;
- (void)setTextureIdY:(unsigned int)arg1 uv:(unsigned int)arg2;
- (void)bindTexture:(void *)arg1 resource:(void *)arg2;
- (void)sample:(void *)arg1;
- (void)registerExternalTextureWithGraph:(void *)arg1;
- (id)initWithComposeElement:(id)arg1;

@end

