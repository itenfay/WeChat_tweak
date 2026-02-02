//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSMutableArray, NSString;

@interface AnchorCloseLivePageDataUnit : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *dataItemList; // @dynamic dataItemList;
@property(retain, nonatomic) FinderJumpInfo *detailDataJumpInfo; // @dynamic detailDataJumpInfo;
@property(retain, nonatomic) NSString *headWording; // @dynamic headWording;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

