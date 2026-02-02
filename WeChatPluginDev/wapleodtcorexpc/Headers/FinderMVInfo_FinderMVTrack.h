//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderContact, FinderMVInfo_ClientDraftInfo, FinderMVInfo_FinderMVTrackReportInfo, NSMutableArray, NSString;

@interface FinderMVInfo_FinderMVTrack : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderMVInfo_ClientDraftInfo *clientDraftInfo; // @dynamic clientDraftInfo;
@property(retain, nonatomic) NSMutableArray *featureList; // @dynamic featureList;
@property(nonatomic) unsigned int fillMode; // @dynamic fillMode;
@property(nonatomic) unsigned int imageAnimationType; // @dynamic imageAnimationType;
@property(nonatomic) unsigned int isFirstUpload; // @dynamic isFirstUpload;
@property(nonatomic) unsigned int materialType; // @dynamic materialType;
@property(retain, nonatomic) NSString *refNonceid; // @dynamic refNonceid;
@property(retain, nonatomic) FinderContact *refObjectContact; // @dynamic refObjectContact;
@property(nonatomic) unsigned long long refObjectId; // @dynamic refObjectId;
@property(nonatomic) unsigned int timeLengthInMvMs; // @dynamic timeLengthInMvMs;
@property(nonatomic) unsigned long long timeOffsetInClipMs; // @dynamic timeOffsetInClipMs;
@property(nonatomic) unsigned long long timeOffsetInMvMs; // @dynamic timeOffsetInMvMs;
@property(retain, nonatomic) FinderMVInfo_FinderMVTrackReportInfo *trackReportInfo; // @dynamic trackReportInfo;
@property(retain, nonatomic) NSString *transitionId; // @dynamic transitionId;
@property(nonatomic) float videoPlayRate; // @dynamic videoPlayRate;

@end

