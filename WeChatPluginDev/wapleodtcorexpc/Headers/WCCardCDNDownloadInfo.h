//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnComMediaInfo, NSString;

@interface WCCardCDNDownloadInfo : NSObject
{
    unsigned int _fileLength;
    NSString *_fileId;
    NSString *_aesKey;
    NSString *_savePath;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    CdnComMediaInfo *_cdnMediaInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CdnComMediaInfo *cdnMediaInfo; // @synthesize cdnMediaInfo=_cdnMediaInfo;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(nonatomic) unsigned int fileLength; // @synthesize fileLength=_fileLength;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;

@end

