//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface FinderRecommendCloseConfig : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int closeRecommend; // @dynamic closeRecommend;
@property(nonatomic) unsigned int followTabStyle; // @dynamic followTabStyle;
@property(retain, nonatomic) NSMutableArray *tabTypeToClose; // @dynamic tabTypeToClose;

@end

