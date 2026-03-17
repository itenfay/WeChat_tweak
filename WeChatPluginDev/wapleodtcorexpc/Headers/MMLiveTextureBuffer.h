//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveTextureBuffer : NSObject
{
    char *_texBuff;
    struct CGSize _texSize;
}

@property(nonatomic) struct CGSize texSize; // @synthesize texSize=_texSize;
@property(nonatomic) char *texBuff; // @synthesize texBuff=_texBuff;
- (void)dealloc;
- (id)initWithTexBuff:(char *)arg1 texSize:(struct CGSize)arg2;

@end

