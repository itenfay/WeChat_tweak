//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TPReportParamsStepVideoPrepared
{
    NSString *_url;
    long long _urlindex;
    long long _fileopenedtime;
    long long _firstpacketreadtime;
}

- (void).cxx_destruct;
@property(nonatomic) long long firstpacketreadtime; // @synthesize firstpacketreadtime=_firstpacketreadtime;
@property(nonatomic) long long fileopenedtime; // @synthesize fileopenedtime=_fileopenedtime;
@property(nonatomic) long long urlindex; // @synthesize urlindex=_urlindex;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)init;

@end

