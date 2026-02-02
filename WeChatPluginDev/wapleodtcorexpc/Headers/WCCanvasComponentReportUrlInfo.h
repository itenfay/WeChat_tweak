//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCanvasComponentReportUrlInfo
{
    unsigned int _needDownload;
    NSString *_urlMd5;
}

+ (id)infoWithUrlString:(id)arg1 needDownload:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned int needDownload; // @synthesize needDownload=_needDownload;
@property(retain, nonatomic) NSString *urlMd5; // @synthesize urlMd5=_urlMd5;
- (id)dictionaryRepresentation;

@end

