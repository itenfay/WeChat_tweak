//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class LbsLocationNew, NSMutableArray, NSString;

@interface SearchDetailPageRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long businessType; // @dynamic businessType;
@property(retain, nonatomic) NSString *keyWord; // @dynamic keyWord;
@property(retain, nonatomic) LbsLocationNew *location; // @dynamic location;
@property(retain, nonatomic) NSMutableArray *matchUserList; // @dynamic matchUserList;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(nonatomic) unsigned int requestSrc; // @dynamic requestSrc;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *searchId; // @dynamic searchId;

@end

