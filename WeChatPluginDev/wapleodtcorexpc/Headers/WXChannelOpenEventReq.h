//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WXChannelOpenEventReq
{
    NSString *_userName;
    NSString *_eventId;
    NSString *_extInfo;
}

+ (id)object;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;

@end

