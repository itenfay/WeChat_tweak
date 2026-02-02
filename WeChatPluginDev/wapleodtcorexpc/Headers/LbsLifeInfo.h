//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface LbsLifeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *entranceTipsId; // @dynamic entranceTipsId;
@property(retain, nonatomic) NSMutableArray *exposeList; // @dynamic exposeList;
@property(nonatomic) _Bool hasLbsAuth; // @dynamic hasLbsAuth;
@property(retain, nonatomic) NSMutableArray *waitForPrefetchList; // @dynamic waitForPrefetchList;

@end

