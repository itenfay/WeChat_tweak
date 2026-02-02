//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface QTileDataDownloader : NSObject
{
    NSMutableDictionary *_downloadList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *downloadList; // @synthesize downloadList=_downloadList;
- (void)cancelDownloadTile:(id)arg1;
- (void)downloadTile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)statisticsParameters;
- (id)channelIdentifier;
- (void)dealloc;
- (id)init;

@end

