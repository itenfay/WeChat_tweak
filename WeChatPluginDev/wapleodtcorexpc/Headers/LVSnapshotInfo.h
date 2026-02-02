//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData, NSNumber;

@interface LVSnapshotInfo : NSObject
{
    FlutterStandardTypedData *_imageBytes;
    NSNumber *_x;
    NSNumber *_y;
    NSNumber *_width;
    NSNumber *_height;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithImageBytes:(id)arg1 x:(id)arg2 y:(id)arg3 width:(id)arg4 height:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSNumber *y; // @synthesize y=_y;
@property(retain, nonatomic) NSNumber *x; // @synthesize x=_x;
@property(retain, nonatomic) FlutterStandardTypedData *imageBytes; // @synthesize imageBytes=_imageBytes;
- (id)toList;

@end

