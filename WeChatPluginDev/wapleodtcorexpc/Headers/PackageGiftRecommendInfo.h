//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveFreeGiftInfo, FinderLiveGift, NSMutableArray, NSString;

@interface PackageGiftRecommendInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *batchList; // @dynamic batchList;
@property(retain, nonatomic) FinderLiveFreeGiftInfo *freeGiftInfo; // @dynamic freeGiftInfo;
@property(retain, nonatomic) FinderLiveGift *gift; // @dynamic gift;
@property(nonatomic) unsigned int recommendType; // @dynamic recommendType;
@property(nonatomic) unsigned long long seq; // @dynamic seq;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

