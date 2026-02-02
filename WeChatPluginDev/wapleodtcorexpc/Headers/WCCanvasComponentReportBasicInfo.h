//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCanvasComponentReportBasicInfo
{
    unsigned int _exposureCount;
    NSString *_cid;
    unsigned long long _stayTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long stayTime; // @synthesize stayTime=_stayTime;
@property(nonatomic) unsigned int exposureCount; // @synthesize exposureCount=_exposureCount;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (id)dictionaryRepresentation;
- (id)initWithCid:(id)arg1;

@end

