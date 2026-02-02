//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface MMListenSearchTrendItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *listenInfo; // @dynamic listenInfo;
@property(retain, nonatomic) NSMutableArray *recommendWords; // @dynamic recommendWords;
@property(retain, nonatomic) NSString *searchInfo; // @dynamic searchInfo;
@property(retain, nonatomic) NSString *searchWord; // @dynamic searchWord;

@end

