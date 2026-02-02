//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMLiveCastMoreViewItem
{
    _Bool _isSelectable;
    NSString *_richTextTitle;
    unsigned long long _itemStatus;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long itemStatus; // @synthesize itemStatus=_itemStatus;
@property(nonatomic) _Bool isSelectable; // @synthesize isSelectable=_isSelectable;
@property(copy, nonatomic) NSString *richTextTitle; // @synthesize richTextTitle=_richTextTitle;
- (void)didSelect;
- (void)updateStatusAsDevicesNotFound;
- (void)updateStatusAsDevicesFound;
- (void)updateStatusAsUndergroundLoading;
- (void)updateStatusAsLoading;

@end

