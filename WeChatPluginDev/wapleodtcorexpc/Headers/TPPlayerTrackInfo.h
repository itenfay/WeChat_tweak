//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface TPPlayerTrackInfo
{
    NSString *_urlString;
    NSString *_mimeType;
    NSDictionary *_httpHeader;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *httpHeader; // @synthesize httpHeader=_httpHeader;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;

@end

