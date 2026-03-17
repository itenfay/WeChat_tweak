//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QTileOverlayInternalPath : NSObject
{
    int _language;
    long long _x;
    long long _y;
    long long _z;
}

@property(nonatomic) int language; // @synthesize language=_language;
@property(nonatomic) long long z; // @synthesize z=_z;
@property(nonatomic) long long y; // @synthesize y=_y;
@property(nonatomic) long long x; // @synthesize x=_x;
- (id)initWithBitmapTileID:(struct MapBitmapTileID *)arg1;

@end

