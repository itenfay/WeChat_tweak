//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class OcrItem;

@interface BankCardResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) OcrItem *bankName; // @dynamic bankName;
@property(retain, nonatomic) OcrItem *cardPosition; // @dynamic cardPosition;
@property(nonatomic) unsigned int imageHeight; // @dynamic imageHeight;
@property(nonatomic) unsigned int imageWidth; // @dynamic imageWidth;
@property(retain, nonatomic) OcrItem *number; // @dynamic number;
@property(nonatomic) unsigned int seqNum; // @dynamic seqNum;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) OcrItem *validDate; // @dynamic validDate;

@end

