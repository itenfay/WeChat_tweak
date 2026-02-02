//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderUploadMediaTask;

@interface WCFinderVideoUploadMeta : NSObject
{
    NSString *_videoPath;
    NSString *_thumbPath;
    NSString *_videoInfo;
    NSString *_clientID;
    NSString *_requestHeader;
    CDUnknownBlockType _complecteBlock;
    CDUnknownBlockType _progressBlock;
    WCFinderUploadMediaTask *_mediaTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderUploadMediaTask *mediaTask; // @synthesize mediaTask=_mediaTask;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType complecteBlock; // @synthesize complecteBlock=_complecteBlock;
@property(copy, nonatomic) NSString *requestHeader; // @synthesize requestHeader=_requestHeader;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(copy, nonatomic) NSString *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(copy, nonatomic) NSString *thumbPath; // @synthesize thumbPath=_thumbPath;
@property(copy, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;

@end

