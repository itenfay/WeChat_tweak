//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MarginStyle, PaddingStyle;

@interface ViewStyle : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int alignSelf; // @dynamic alignSelf;
@property(nonatomic) float height; // @dynamic height;
@property(retain, nonatomic) MarginStyle *margin; // @dynamic margin;
@property(retain, nonatomic) PaddingStyle *padding; // @dynamic padding;
@property(nonatomic) float width; // @dynamic width;

@end

