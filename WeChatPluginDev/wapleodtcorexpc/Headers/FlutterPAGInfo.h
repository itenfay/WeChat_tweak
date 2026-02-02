//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface FlutterPAGInfo : NSObject
{
    NSNumber *_pagId;
    NSString *_filepath;
    NSNumber *_isFromAsset;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_repeatCount;
    NSNumber *_autoPlay;
    NSNumber *_maxFrameRate;
}

+ (id)nullableFromMap:(id)arg1;
+ (id)fromMap:(id)arg1;
+ (id)makeWithPagId:(id)arg1 filepath:(id)arg2 isFromAsset:(id)arg3 width:(id)arg4 height:(id)arg5 repeatCount:(id)arg6 autoPlay:(id)arg7 maxFrameRate:(id)arg8;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *maxFrameRate; // @synthesize maxFrameRate=_maxFrameRate;
@property(retain, nonatomic) NSNumber *autoPlay; // @synthesize autoPlay=_autoPlay;
@property(retain, nonatomic) NSNumber *repeatCount; // @synthesize repeatCount=_repeatCount;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSNumber *isFromAsset; // @synthesize isFromAsset=_isFromAsset;
@property(copy, nonatomic) NSString *filepath; // @synthesize filepath=_filepath;
@property(retain, nonatomic) NSNumber *pagId; // @synthesize pagId=_pagId;
- (id)toMap;

@end

