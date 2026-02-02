//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class MMFinderLiveShopSettingsSwitchItemView;

@interface MMFinderLiveSwitchSettingCell
{
    MMFinderLiveShopSettingsSwitchItemView *_contentView;
    CDUnknownBlockType _onSwitchChange;
}

@property(copy, nonatomic) CDUnknownBlockType onSwitchChange; // @synthesize onSwitchChange=_onSwitchChange;
@property(retain, nonatomic) MMFinderLiveShopSettingsSwitchItemView *contentView; // @synthesize contentView=_contentView;
- (void)initCellConfig;
- (id)initWithSize:(struct CGSize)arg1;

@end
