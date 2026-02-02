//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface WebRecommendResponse_RecClientCache : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int category; // @dynamic category;
@property(nonatomic) unsigned int directShowTs; // @dynamic directShowTs;
@property(retain, nonatomic) NSMutableArray *docidList; // @dynamic docidList;
@property(nonatomic) unsigned int needCache; // @dynamic needCache;
@property(nonatomic) unsigned int showAndRefleshTs; // @dynamic showAndRefleshTs;

@end

