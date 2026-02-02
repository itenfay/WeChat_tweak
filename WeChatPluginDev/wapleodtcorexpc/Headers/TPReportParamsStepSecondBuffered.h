//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TPReportParamsStepSecondBuffered
{
    unsigned long long _scene;
    unsigned long long _levent;
    long long _reason;
    long long _format;
    long long _ptime;
    NSString *_url;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long ptime; // @synthesize ptime=_ptime;
@property(nonatomic) long long format; // @synthesize format=_format;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
@property(nonatomic) unsigned long long levent; // @synthesize levent=_levent;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (id)init;

@end

