//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFICImageFormat : NSObject
{
    NSString *_name;
    NSString *_family;
    struct CGSize _imageSize;
    struct CGSize _pixelSize;
    unsigned int _maxImgCount;
    unsigned int _cpuzSize;
    unsigned int _pageSize;
    unsigned int _version;
}

+ (id)formatWithName:(id)arg1 family:(id)arg2 imageSize:(struct CGSize)arg3 maxImgCount:(unsigned int)arg4 version:(unsigned int)arg5;
- (void).cxx_destruct;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) unsigned int cpuzSize; // @synthesize cpuzSize=_cpuzSize;
@property(nonatomic) unsigned int maxImgCount; // @synthesize maxImgCount=_maxImgCount;
@property(readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(copy, nonatomic) NSString *family; // @synthesize family=_family;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned int bitsPerComponent;
@property(readonly, nonatomic) unsigned int bytesPerPixel;
@property(readonly, nonatomic) unsigned int bitmapInfo;
- (id)init;

@end

