//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface MPPageResourceDownloadCompletionParam : NSObject
{
    _Bool _isPatch;
    _Bool _hasPatchMD5;
    _Bool _isZip;
    unsigned int _downloadedSize;
    NSString *_filePath;
    NSError *_error;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned int downloadedSize; // @synthesize downloadedSize=_downloadedSize;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) _Bool isZip; // @synthesize isZip=_isZip;
@property(nonatomic) _Bool hasPatchMD5; // @synthesize hasPatchMD5=_hasPatchMD5;
@property(nonatomic) _Bool isPatch; // @synthesize isPatch=_isPatch;

@end

