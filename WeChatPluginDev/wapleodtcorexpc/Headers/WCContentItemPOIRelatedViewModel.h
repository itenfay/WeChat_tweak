//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCContentItem, WCFinderSharePOIRelatedItem;

@interface WCContentItemPOIRelatedViewModel : NSObject
{
    WCFinderSharePOIRelatedItem *_shareItem;
    WCContentItem *_contentItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCContentItem *contentItem; // @synthesize contentItem=_contentItem;
@property(retain, nonatomic) WCFinderSharePOIRelatedItem *shareItem; // @synthesize shareItem=_shareItem;
- (id)initWithContentItem:(id)arg1;

@end

