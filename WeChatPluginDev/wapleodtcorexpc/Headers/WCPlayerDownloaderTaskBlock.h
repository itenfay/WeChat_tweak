//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPlayerDownloaderTaskBlock : NSObject
{
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _moovReadyBlock;
    CDUnknownBlockType _m3u8ReadyBlock;
    CDUnknownBlockType _downloadCompleteBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType downloadCompleteBlock; // @synthesize downloadCompleteBlock=_downloadCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType m3u8ReadyBlock; // @synthesize m3u8ReadyBlock=_m3u8ReadyBlock;
@property(copy, nonatomic) CDUnknownBlockType moovReadyBlock; // @synthesize moovReadyBlock=_moovReadyBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;

@end

