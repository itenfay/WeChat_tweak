//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, Position;

@interface OcrItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) double confidence; // @dynamic confidence;
@property(retain, nonatomic) NSMutableArray *label; // @dynamic label;
@property(retain, nonatomic) Position *pos; // @dynamic pos;
@property(retain, nonatomic) NSString *text; // @dynamic text;

@end

