//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSMutableArray;

@class WXPBGeneratedMessage;

@interface ReportRecommendedMusicFeedbackRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long bussId; // @dynamic bussId;
@property(retain, nonatomic) NSMutableArray *feedbacks; // @dynamic feedbacks;
@property(nonatomic) unsigned long long requestId; // @dynamic requestId;

@end

