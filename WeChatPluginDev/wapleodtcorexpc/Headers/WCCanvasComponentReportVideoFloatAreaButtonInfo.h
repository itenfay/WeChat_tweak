//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCanvasComponentReportVideoFloatAreaButtonInfo
{
    unsigned int _exposureCount;
    unsigned int _clickCount;
    NSString *_cid;
    unsigned long long _stayTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int clickCount; // @synthesize clickCount=_clickCount;
@property(nonatomic) unsigned long long stayTime; // @synthesize stayTime=_stayTime;
@property(nonatomic) unsigned int exposureCount; // @synthesize exposureCount=_exposureCount;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (id)dictionaryRepresentation;

@end

