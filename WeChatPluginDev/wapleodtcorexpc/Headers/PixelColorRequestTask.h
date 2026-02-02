//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface PixelColorRequestTask : NSObject
{
    unsigned long long _format;
    CDUnknownBlockType _callback;
    NSArray *_coordinateList;
    struct CGSize _fromSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize fromSize; // @synthesize fromSize=_fromSize;
@property(retain, nonatomic) NSArray *coordinateList; // @synthesize coordinateList=_coordinateList;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) unsigned long long format; // @synthesize format=_format;

@end

