//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveFaceDecodeResult : NSObject
{
    char *_texBuff;
    struct CGSize _texSize;
}

@property(nonatomic) struct CGSize texSize; // @synthesize texSize=_texSize;
@property(nonatomic) char *texBuff; // @synthesize texBuff=_texBuff;
- (_Bool)isValid;

@end

