//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveResChecker, NSString, NSURL;

@interface MMFinderLiveResDownloaderItem : NSObject
{
    _Bool _useProprietaryProtocol;
    NSString *_itemId;
    unsigned long long _retryCount;
    NSString *_downloadUrl;
    NSString *_downloadUrlHash;
    NSString *_fileMD5;
    NSURL *_downloadPath;
    NSString *_resPath;
    NSURL *_cachePath;
    MMFinderLiveResChecker *_checker;
    long long _totalLength;
    CDUnknownBlockType _downloadCompletion;
    unsigned long long _state;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useProprietaryProtocol; // @synthesize useProprietaryProtocol=_useProprietaryProtocol;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType downloadCompletion; // @synthesize downloadCompletion=_downloadCompletion;
@property(nonatomic) long long totalLength; // @synthesize totalLength=_totalLength;
@property(retain, nonatomic) MMFinderLiveResChecker *checker; // @synthesize checker=_checker;
@property(retain, nonatomic) NSURL *cachePath; // @synthesize cachePath=_cachePath;
@property(retain, nonatomic) NSString *resPath; // @synthesize resPath=_resPath;
@property(retain, nonatomic) NSURL *downloadPath; // @synthesize downloadPath=_downloadPath;
@property(retain, nonatomic) NSString *fileMD5; // @synthesize fileMD5=_fileMD5;
@property(retain, nonatomic) NSString *downloadUrlHash; // @synthesize downloadUrlHash=_downloadUrlHash;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;

@end

