//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class Coordinate;

@interface Position : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int bottom; // @dynamic bottom;
@property(nonatomic) unsigned int left; // @dynamic left;
@property(retain, nonatomic) Coordinate *leftBottom; // @dynamic leftBottom;
@property(retain, nonatomic) Coordinate *leftTop; // @dynamic leftTop;
@property(nonatomic) unsigned int right; // @dynamic right;
@property(retain, nonatomic) Coordinate *rightBottom; // @dynamic rightBottom;
@property(retain, nonatomic) Coordinate *rightTop; // @dynamic rightTop;
@property(nonatomic) unsigned int top; // @dynamic top;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

