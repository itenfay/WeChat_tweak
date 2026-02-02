//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData, NSNumber;

@interface TingStarSnapInfo : NSObject
{
    NSNumber *_left;
    NSNumber *_top;
    NSNumber *_width;
    NSNumber *_height;
    FlutterStandardTypedData *_buffer;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithLeft:(id)arg1 top:(id)arg2 width:(id)arg3 height:(id)arg4 buffer:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) FlutterStandardTypedData *buffer; // @synthesize buffer=_buffer;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSNumber *top; // @synthesize top=_top;
@property(retain, nonatomic) NSNumber *left; // @synthesize left=_left;
- (id)toList;

@end

