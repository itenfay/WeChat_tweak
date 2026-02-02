//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class LiveLotterySetting, MicSetting, NSMutableArray;

@interface FinderContactLiveInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(nonatomic) unsigned int anchorShopTag; // @dynamic anchorShopTag;
@property(nonatomic) unsigned long long anchorStatusFlag; // @dynamic anchorStatusFlag;
@property(nonatomic) _Bool isFanClubMember; // @dynamic isFanClubMember;
@property(nonatomic) unsigned int liveCoverImgTs; // @dynamic liveCoverImgTs;
@property(retain, nonatomic) NSMutableArray *liveCoverImgs; // @dynamic liveCoverImgs;
@property(retain, nonatomic) LiveLotterySetting *lotterySetting; // @dynamic lotterySetting;
@property(retain, nonatomic) MicSetting *micSetting; // @dynamic micSetting;
@property(nonatomic) unsigned int switchFlag; // @dynamic switchFlag;

@end

