//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCMediaItem;

@interface CdnSnsMediaItemInfo : NSObject
{
    _Bool _finishFlag;
    NSString *_fileKey;
    NSString *_nsUrl;
    unsigned long long _decryptKey;
    WCMediaItem *_mediaItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool finishFlag; // @synthesize finishFlag=_finishFlag;
@property(retain, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic) unsigned long long decryptKey; // @synthesize decryptKey=_decryptKey;
@property(retain, nonatomic) NSString *nsUrl; // @synthesize nsUrl=_nsUrl;
@property(retain, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;

@end

