//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface RTESearchResultInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool isFromDesc; // @dynamic isFromDesc;
@property(nonatomic) unsigned long long location; // @dynamic location;
@property(retain, nonatomic) NSMutableArray *subSearchResultInfos; // @dynamic subSearchResultInfos;
@property(nonatomic) int type; // @dynamic type;

@end

