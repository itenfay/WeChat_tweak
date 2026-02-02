//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, BindFinderClubInfo, ChatroomBindInfo, FinderContact;

@interface FinderGetClubInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) ChatroomBindInfo *bindInfo; // @dynamic bindInfo;
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(retain, nonatomic) BindFinderClubInfo *finderInfo; // @dynamic finderInfo;
@property(nonatomic) unsigned int nextQueryInterval; // @dynamic nextQueryInterval;
@property(nonatomic) unsigned long long permissionFlag; // @dynamic permissionFlag;

@end

