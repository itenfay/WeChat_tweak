//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXCDecodedVideoInfo : NSObject
{
    unsigned int _pts;
    unsigned int _dts;
    int _nalType;
    unsigned int _orientation;
    struct __CVBuffer *_pixelBuffer;
    double _decodeCost;
    shared_ptr_1255c1d2 _metaData;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_1255c1d2 metaData; // @synthesize metaData=_metaData;
@property(nonatomic) unsigned int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) double decodeCost; // @synthesize decodeCost=_decodeCost;
@property(nonatomic) int nalType; // @synthesize nalType=_nalType;
@property(nonatomic) unsigned int dts; // @synthesize dts=_dts;
@property(nonatomic) unsigned int pts; // @synthesize pts=_pts;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (void)dealloc;

@end

