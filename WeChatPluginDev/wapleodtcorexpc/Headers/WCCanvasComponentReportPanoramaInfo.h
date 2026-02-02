//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCCanvasComponentReportUrlInfo;

@interface WCCanvasComponentReportPanoramaInfo
{
    unsigned int _swipeCount;
    WCCanvasComponentReportUrlInfo *_imgUrlInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCanvasComponentReportUrlInfo *imgUrlInfo; // @synthesize imgUrlInfo=_imgUrlInfo;
@property(nonatomic) unsigned int swipeCount; // @synthesize swipeCount=_swipeCount;
- (id)dictionaryRepresentation;

@end

