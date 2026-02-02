//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableDictionary, NSString;

@interface WebViewSanboxTaskAuthInfo
{
    NSData *_permissionData;
    NSString *_fullUrl;
    NSMutableDictionary *_httpHeaders;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *httpHeaders; // @synthesize httpHeaders=_httpHeaders;
@property(copy, nonatomic) NSString *fullUrl; // @synthesize fullUrl=_fullUrl;
@property(retain, nonatomic) NSData *permissionData; // @synthesize permissionData=_permissionData;

@end

