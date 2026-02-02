//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCStoryDataItem, WCStoryMediaItem;

@interface WCStoryMediaItemWrap : NSObject
{
    unsigned int _index;
    WCStoryMediaItem *_mediaItem;
    WCStoryDataItem *_parent;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(retain, nonatomic) WCStoryDataItem *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) WCStoryMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (id)init;

@end

