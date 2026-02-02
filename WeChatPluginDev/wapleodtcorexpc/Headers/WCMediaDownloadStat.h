//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCMediaDownloadStat : NSObject
{
    unsigned int _downloadSize;
    unsigned int _imgWidth;
    unsigned int _imgHeight;
    unsigned long long _downloadStartTime;
    unsigned long long _downloadEndTime;
    unsigned long long _downloadFormat;
}

@property(nonatomic) unsigned long long downloadFormat; // @synthesize downloadFormat=_downloadFormat;
@property(nonatomic) unsigned int imgHeight; // @synthesize imgHeight=_imgHeight;
@property(nonatomic) unsigned int imgWidth; // @synthesize imgWidth=_imgWidth;
@property(nonatomic) unsigned int downloadSize; // @synthesize downloadSize=_downloadSize;
@property(nonatomic) unsigned long long downloadEndTime; // @synthesize downloadEndTime=_downloadEndTime;
@property(nonatomic) unsigned long long downloadStartTime; // @synthesize downloadStartTime=_downloadStartTime;

@end

