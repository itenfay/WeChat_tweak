//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveShopWindowAdItem;

@interface MMFinderLiveShopAdAnchorPromoteInfo : NSObject
{
    FinderLiveShopWindowAdItem *_adItem;
}

@property(retain, nonatomic) FinderLiveShopWindowAdItem *adItem; // @synthesize adItem=_adItem;
- (id)promoteKey;

@end

