//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderLivePermissionVerifyInfo, NSMutableArray, NSString;

@interface FinderGetLiveNoticeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *anchorFinderUsername; // @dynamic anchorFinderUsername;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int lastNoticeStartTime; // @dynamic lastNoticeStartTime;
@property(nonatomic) unsigned int noticeAggregateType; // @dynamic noticeAggregateType;
@property(retain, nonatomic) NSMutableArray *noticeAggregateTypeList; // @dynamic noticeAggregateTypeList;
@property(retain, nonatomic) NSString *noticeId; // @dynamic noticeId;
@property(nonatomic) unsigned int order; // @dynamic order;
@property(retain, nonatomic) FinderLivePermissionVerifyInfo *verifyInfo; // @dynamic verifyInfo;

@end

