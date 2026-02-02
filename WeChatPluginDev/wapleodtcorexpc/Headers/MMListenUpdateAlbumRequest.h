//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, MMListenReportClientInfo, NSMutableArray;

@class WXPBGeneratedMessage;

@interface MMListenUpdateAlbumRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) MMListenReportClientInfo *reportClientInfo; // @dynamic reportClientInfo;
@property(retain, nonatomic) NSMutableArray *tasks; // @dynamic tasks;

@end

