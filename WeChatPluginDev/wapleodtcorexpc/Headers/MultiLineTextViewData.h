//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, TextViewData;

@interface MultiLineTextViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) TextViewData *leftText; // @dynamic leftText;
@property(retain, nonatomic) NSMutableArray *rightText; // @dynamic rightText;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

