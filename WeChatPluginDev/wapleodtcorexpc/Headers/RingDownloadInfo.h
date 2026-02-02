//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface RingDownloadInfo : NSObject
{
    NSString *_clientMediaID;
    NSString *_mediaUrl;
    NSString *_savePath;
    NSString *_decodeKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *decodeKey; // @synthesize decodeKey=_decodeKey;
@property(copy, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(copy, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(copy, nonatomic) NSString *clientMediaID; // @synthesize clientMediaID=_clientMediaID;

@end

