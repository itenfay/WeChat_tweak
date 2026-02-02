//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayFaceHBQRCodeInfo : NSObject
{
    unsigned int _totalNum;
    NSString *_sendId;
    NSString *_reqkey;
    NSString *_shareUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(nonatomic) unsigned int totalNum; // @synthesize totalNum=_totalNum;
@property(retain, nonatomic) NSString *reqkey; // @synthesize reqkey=_reqkey;
@property(retain, nonatomic) NSString *sendId; // @synthesize sendId=_sendId;

@end

