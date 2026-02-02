//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSString;

@class WXPBGeneratedMessage;

@interface EncryptMetaData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int algorithm; // @dynamic algorithm;
@property(retain, nonatomic) NSString *iv; // @dynamic iv;
@property(retain, nonatomic) NSString *key; // @dynamic key;
@property(retain, nonatomic) NSString *tag; // @dynamic tag;

@end

