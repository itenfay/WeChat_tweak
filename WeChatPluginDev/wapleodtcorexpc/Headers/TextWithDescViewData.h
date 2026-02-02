//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, TextViewData;

@interface TextWithDescViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int align; // @dynamic align;
@property(retain, nonatomic) TextViewData *desc; // @dynamic desc;
@property(nonatomic) int position; // @dynamic position;
@property(retain, nonatomic) TextViewData *text; // @dynamic text;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

