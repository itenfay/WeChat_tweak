//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMWebFullSnapshotPerformace : NSObject
{
    _Bool _isCompress;
    _Bool _cropByLimitHeight;
    unsigned int _freeMemInKB;
    unsigned int _predictImageMemInKB;
    unsigned int _realImageMemInKB;
    double _scale;
    unsigned long long _costTime;
    struct CGSize _originContentSize;
    struct CGSize _contentSize;
    struct CGSize _imageSize;
}

@property(nonatomic) unsigned long long costTime; // @synthesize costTime=_costTime;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) _Bool cropByLimitHeight; // @synthesize cropByLimitHeight=_cropByLimitHeight;
@property(nonatomic) _Bool isCompress; // @synthesize isCompress=_isCompress;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGSize originContentSize; // @synthesize originContentSize=_originContentSize;
@property(nonatomic) unsigned int realImageMemInKB; // @synthesize realImageMemInKB=_realImageMemInKB;
@property(nonatomic) unsigned int predictImageMemInKB; // @synthesize predictImageMemInKB=_predictImageMemInKB;
@property(nonatomic) unsigned int freeMemInKB; // @synthesize freeMemInKB=_freeMemInKB;
- (id)description;

@end

