//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MJEmoticonPickerItem : NSObject
{
    _Bool _isWxAM;
    NSString *_filePath;
    unsigned long long _type;
    NSData *_data;
    NSString *_md5;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) _Bool isWxAM; // @synthesize isWxAM=_isWxAM;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void)saveEmoticon:(CDUnknownBlockType)arg1;
- (id)initWithEmoticonMd5:(id)arg1;

@end

