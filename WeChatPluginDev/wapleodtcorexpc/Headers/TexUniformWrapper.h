//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TexUniformWrapper : NSObject
{
    unsigned int _texUniformY;
    unsigned int _texUniformUV;
}

@property(nonatomic) unsigned int texUniformUV; // @synthesize texUniformUV=_texUniformUV;
@property(nonatomic) unsigned int texUniformY; // @synthesize texUniformY=_texUniformY;
- (id)initWithTexUniformY:(unsigned int)arg1 texUniformUV:(unsigned int)arg2;

@end

