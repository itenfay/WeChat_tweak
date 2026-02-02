//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LZDownloadTaskItem : NSObject
{
    long long _seqNo;
    NSString *_url;
    long long _fileSize;
    NSString *_savePath;
    struct _NSRange _downloadRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) struct _NSRange downloadRange; // @synthesize downloadRange=_downloadRange;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) long long seqNo; // @synthesize seqNo=_seqNo;
- (id)init;

@end

