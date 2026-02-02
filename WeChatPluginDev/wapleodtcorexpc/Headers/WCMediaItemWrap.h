//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCDataItem, WCMediaItem;

@interface WCMediaItemWrap : NSObject
{
    unsigned int index;
    WCMediaItem *mediaItem;
    WCDataItem *parent;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int index; // @synthesize index;
@property(retain, nonatomic) WCDataItem *parent; // @synthesize parent;
@property(retain, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem;
- (id)init;

@end

