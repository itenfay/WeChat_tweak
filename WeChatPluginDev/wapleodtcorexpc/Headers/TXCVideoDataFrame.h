//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface TXCVideoDataFrame : NSObject
{
    NSData *_data;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _format;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long format; // @synthesize format=_format;
@property(readonly, nonatomic) unsigned long long height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned long long width; // @synthesize width=_width;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)initWithData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(unsigned long long)arg4;

@end

