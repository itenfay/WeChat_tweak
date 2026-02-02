//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface NativeRenderLoadImageResult : NSObject
{
    int _width;
    int _height;
    NSString *_errMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;

@end

