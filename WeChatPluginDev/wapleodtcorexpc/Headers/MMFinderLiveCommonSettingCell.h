//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveShopSettingsSelectItemView;

@interface MMFinderLiveCommonSettingCell
{
    MMFinderLiveShopSettingsSelectItemView *_contentView;
    CDUnknownBlockType _selectCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType selectCallback; // @synthesize selectCallback=_selectCallback;
@property(retain, nonatomic) MMFinderLiveShopSettingsSelectItemView *contentView; // @synthesize contentView=_contentView;
- (void)initCellConfig;
- (id)initWithSize:(struct CGSize)arg1;

@end

