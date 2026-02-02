//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMCommonUploadResult : NSObject
{
    NSString *_uploadId;
    NSString *_fileId;
    NSString *_aesKey;
    NSString *_imgInfoBuffer;
    unsigned long long _uploadSize;
    NSString *_bigFileSignature;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bigFileSignature; // @synthesize bigFileSignature=_bigFileSignature;
@property(nonatomic) unsigned long long uploadSize; // @synthesize uploadSize=_uploadSize;
@property(retain, nonatomic) NSString *imgInfoBuffer; // @synthesize imgInfoBuffer=_imgInfoBuffer;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(retain, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;

@end

