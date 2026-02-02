//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderEventInfo, FinderExtendedReading, FinderJumpInfo, FinderLocation, FinderObjectExtend, NSData, NSMutableArray, NSString, NewLifePostReportInfo, NewLifeSelectMusicInfo;

@interface NewLifePostInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *commentEggInfo; // @dynamic commentEggInfo;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(retain, nonatomic) FinderEventInfo *eventInfo; // @dynamic eventInfo;
@property(retain, nonatomic) FinderExtendedReading *extendReading; // @dynamic extendReading;
@property(nonatomic) unsigned long long feedId; // @dynamic feedId;
@property(retain, nonatomic) NSMutableArray *imgList; // @dynamic imgList;
@property(nonatomic) unsigned int index; // @dynamic index;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) FinderLocation *location; // @dynamic location;
@property(retain, nonatomic) NSData *maasEditDraft; // @dynamic maasEditDraft;
@property(retain, nonatomic) NSString *nonceId; // @dynamic nonceId;
@property(retain, nonatomic) FinderObjectExtend *objectExtend; // @dynamic objectExtend;
@property(retain, nonatomic) NSMutableArray *parts; // @dynamic parts;
@property(nonatomic) unsigned int ratioH; // @dynamic ratioH;
@property(nonatomic) unsigned int ratioW; // @dynamic ratioW;
@property(retain, nonatomic) NewLifePostReportInfo *reportInfo; // @dynamic reportInfo;
@property(retain, nonatomic) NewLifeSelectMusicInfo *selectedMusicInfo; // @dynamic selectedMusicInfo;

@end

