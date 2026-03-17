//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSData, NSMutableArray;

@class WXPBGeneratedMessage;

@interface BatchEmojiDownLoadRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int index; // @dynamic index;
@property(nonatomic) unsigned int panelType; // @dynamic panelType;
@property(retain, nonatomic) NSData *reqBuff; // @dynamic reqBuff;
@property(retain, nonatomic) NSMutableArray *reqMd5; // @dynamic reqMd5;
@property(nonatomic) unsigned int reqType; // @dynamic reqType;
@property(retain, nonatomic) NSData *syncParam; // @dynamic syncParam;

@end

