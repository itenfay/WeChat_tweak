//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface V2TXLiveMixStream : NSObject
{
    NSString *_userId;
    NSString *_streamId;
    long long _x;
    long long _y;
    long long _width;
    long long _height;
    unsigned long long _zOrder;
    long long _inputType;
}

- (void).cxx_destruct;
@property(nonatomic) long long inputType; // @synthesize inputType=_inputType;
@property(nonatomic) unsigned long long zOrder; // @synthesize zOrder=_zOrder;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(nonatomic) long long y; // @synthesize y=_y;
@property(nonatomic) long long x; // @synthesize x=_x;
@property(copy, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (id)description;
- (id)init;

@end

