//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCPannelItem;

@interface GCPannelCellModel
{
    GCPannelItem *_pannelItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GCPannelItem *pannelItem; // @synthesize pannelItem=_pannelItem;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (Class)bindCellClass;

@end

