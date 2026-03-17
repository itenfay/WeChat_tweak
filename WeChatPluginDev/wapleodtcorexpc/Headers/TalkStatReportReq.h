//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSMutableArray;

@class WXPBGeneratedMessage;

@interface TalkStatReportReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int dataNum; // @dynamic dataNum;
@property(retain, nonatomic) NSMutableArray *reportData; // @dynamic reportData;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

