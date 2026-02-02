//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnComMediaInfo, NSString;

@interface WCCanvasCommonFileRequestObject : NSObject
{
    unsigned int _retryCount;
    NSString *_targetURL;
    NSString *_fileMD5;
    unsigned long long _beginTimeStamp;
    CdnComMediaInfo *_cdnComInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CdnComMediaInfo *cdnComInfo; // @synthesize cdnComInfo=_cdnComInfo;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long beginTimeStamp; // @synthesize beginTimeStamp=_beginTimeStamp;
@property(retain, nonatomic) NSString *fileMD5; // @synthesize fileMD5=_fileMD5;
@property(retain, nonatomic) NSString *targetURL; // @synthesize targetURL=_targetURL;

@end

