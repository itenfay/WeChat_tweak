//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TingCdnImageUploadTask : NSObject
{
    _Bool _startCdnUpload;
    _Bool _uploadCDNSuccessful;
    int _retCode;
    NSString *_clientID;
    NSString *_uploadLocalImageURL;
    NSString *_coverUrl;
    NSString *_coverMd5;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *coverMd5; // @synthesize coverMd5=_coverMd5;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(nonatomic) int retCode; // @synthesize retCode=_retCode;
@property(nonatomic) _Bool uploadCDNSuccessful; // @synthesize uploadCDNSuccessful=_uploadCDNSuccessful;
@property(nonatomic) _Bool startCdnUpload; // @synthesize startCdnUpload=_startCdnUpload;
@property(copy, nonatomic) NSString *uploadLocalImageURL; // @synthesize uploadLocalImageURL=_uploadLocalImageURL;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;

@end

