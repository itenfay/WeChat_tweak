//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCCanvasComponentReportVideoFloatAreaButtonInfo;

@interface WCCanvasComponentReportVideoFloatAreaInfo
{
    unsigned int _exposureCount;
    unsigned int _clickCount;
    WCCanvasComponentReportVideoFloatAreaButtonInfo *_buttonInfo;
    unsigned long long _stayTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int clickCount; // @synthesize clickCount=_clickCount;
@property(nonatomic) unsigned long long stayTime; // @synthesize stayTime=_stayTime;
@property(nonatomic) unsigned int exposureCount; // @synthesize exposureCount=_exposureCount;
@property(retain, nonatomic) WCCanvasComponentReportVideoFloatAreaButtonInfo *buttonInfo; // @synthesize buttonInfo=_buttonInfo;
- (id)dictionaryRepresentation;
- (id)init;

@end

