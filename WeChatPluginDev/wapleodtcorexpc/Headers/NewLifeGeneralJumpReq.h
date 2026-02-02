//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSMutableArray, NSString;

@interface NewLifeGeneralJumpReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *clientKeys; // @dynamic clientKeys;
@property(retain, nonatomic) NSString *extraInfo; // @dynamic extraInfo;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) int posiotn; // @dynamic posiotn;

@end

