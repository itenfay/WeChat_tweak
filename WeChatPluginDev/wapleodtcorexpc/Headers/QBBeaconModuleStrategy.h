//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSDictionary, NSString;

@interface QBBeaconModuleStrategy
{
    int moduleKey;
    _Bool onOff;
    NSString *uploadUrl;
    NSDictionary *detail;
    NSArray *preventEventCode;
    NSArray *sampleEvent;
}

@property(retain, nonatomic) NSArray *sampleEvent; // @synthesize sampleEvent;
@property(retain, nonatomic) NSArray *preventEventCode; // @synthesize preventEventCode;
@property(retain, nonatomic) NSDictionary *detail; // @synthesize detail;
@property(retain, nonatomic) NSString *uploadUrl; // @synthesize uploadUrl;
@property(nonatomic) int moduleKey; // @synthesize moduleKey;
@property(nonatomic) _Bool onOff; // @synthesize onOff;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isEventCanReport:(id)arg1;
- (id)initWithWUPMSModel:(id)arg1;

@end

