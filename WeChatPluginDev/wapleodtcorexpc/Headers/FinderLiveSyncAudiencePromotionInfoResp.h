//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo;

@interface FinderLiveSyncAudiencePromotionInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long joinAudienceNumber; // @dynamic joinAudienceNumber;
@property(nonatomic) unsigned int panelShowTime; // @dynamic panelShowTime;
@property(retain, nonatomic) FinderJumpInfo *promotePanelLiteappInfo; // @dynamic promotePanelLiteappInfo;
@property(nonatomic) unsigned int promoteStatus; // @dynamic promoteStatus;

@end

