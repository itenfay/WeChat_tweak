//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, WalletWeAppInfo;

@interface WalletEntrance : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *urlhtml; // @dynamic urlhtml;
@property(retain, nonatomic) NSString *urlnative; // @dynamic urlnative;
@property(retain, nonatomic) WalletWeAppInfo *urlweApp; // @dynamic urlweApp;

@end

