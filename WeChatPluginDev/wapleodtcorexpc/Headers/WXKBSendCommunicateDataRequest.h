//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WXKBSendCommunicateDataRequest
{
    long long _type;
    NSData *_data;
    NSString *_action;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) long long type; // @synthesize type=_type;

@end

