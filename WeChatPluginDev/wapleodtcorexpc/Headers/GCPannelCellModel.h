//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCPannelItem;

@interface GCPannelCellModel : NSObject
{
    GCPannelItem *_pannelItem;
}

@property(retain, nonatomic) GCPannelItem *pannelItem; // @synthesize pannelItem=_pannelItem;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (Class)bindCellClass;

@end

