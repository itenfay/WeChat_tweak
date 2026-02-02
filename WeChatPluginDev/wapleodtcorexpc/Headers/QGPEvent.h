//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface QGPEvent
{
    NSString *_eventType;
    NSString *_layerId;
}

+ (id)errorMsgForCode:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *layerId; // @synthesize layerId=_layerId;
@property(retain, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (id)init;

@end

