//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAPlayerHttpMediaWrap
{
    NSString *_url;
    NSString *_localFilePath;
    NSString *_referer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *referer; // @synthesize referer=_referer;
@property(retain, nonatomic) NSString *localFilePath; // @synthesize localFilePath=_localFilePath;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)getTempVideoPath;
- (id)getFormatVideoPath;
- (id)getHTTPReferer;
- (id)initWithEmpty;
- (id)getMediaWrapUrl;
- (id)getMediaWrapIdentifier;

@end

