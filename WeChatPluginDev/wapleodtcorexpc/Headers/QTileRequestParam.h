//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QTileRequestParam : NSObject
{
    int _z;
    int _x;
    int _y;
    int _dataType;
    int _tag;
    NSString *_url;
    NSString *_engineOriginalUrl;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *engineOriginalUrl; // @synthesize engineOriginalUrl=_engineOriginalUrl;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property int tag; // @synthesize tag=_tag;
@property int dataType; // @synthesize dataType=_dataType;
@property int y; // @synthesize y=_y;
@property int x; // @synthesize x=_x;
@property int z; // @synthesize z=_z;
- (id)description;
- (_Bool)isTileOverlay;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

