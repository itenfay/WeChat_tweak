//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderDataItem;

@interface WCFinderJustWatchCollectionFeedItem : NSObject
{
    _Bool _videoCompleted;
    WCFinderDataItem *_dataItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool videoCompleted; // @synthesize videoCompleted=_videoCompleted;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (id)collectionInfo;
- (id)initWithDataItem:(id)arg1 videoCompleted:(_Bool)arg2;

@end

