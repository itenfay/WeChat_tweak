//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, DebugOption, ExportExternInfo, Lbs, NSString;

@class WXPBGeneratedMessage;

@interface GetChatroomBaseInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *chatroomName; // @dynamic chatroomName;
@property(retain, nonatomic) DebugOption *debugOption; // @dynamic debugOption;
@property(retain, nonatomic) ExportExternInfo *exportExternInfo; // @dynamic exportExternInfo;
@property(retain, nonatomic) Lbs *lbsInfo; // @dynamic lbsInfo;

@end

