//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;

@interface GCCertificateData : NSObject
{
    NSString *_md5;
    NSString *_issuer;
    NSString *_subject;
    NSData *_certificateData;
    NSString *_x509desc;
    NSMutableArray *_urlArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *urlArray; // @synthesize urlArray=_urlArray;
@property(retain, nonatomic) NSString *x509desc; // @synthesize x509desc=_x509desc;
@property(retain, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSString *issuer; // @synthesize issuer=_issuer;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
- (id)init;

@end

