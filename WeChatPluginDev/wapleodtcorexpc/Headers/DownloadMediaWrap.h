//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage, WCMediaItem;

@interface DownloadMediaWrap : NSObject
{
    WCMediaItem *mediaItem;
    long long downloadType;
    NSString *downloadID;
    NSString *downloadMd5;
    _Bool isDownloading;
    UIImage *resultImage;
    long long requestType;
}

+ (id)getDownloadID:(id)arg1 downloadType:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long requestType; // @synthesize requestType;
@property(retain, nonatomic) UIImage *resultImage; // @synthesize resultImage;
@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading;
@property(nonatomic) long long downloadType; // @synthesize downloadType;
@property(retain, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem;
@property(readonly, nonatomic) NSString *downloadMd5;
@property(readonly, nonatomic) NSString *downloadID;
- (id)initWithMediaItem:(id)arg1 downloadType:(long long)arg2;

@end

