//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel, UIView;

@interface WCFinderLiveRosterSelectCell
{
    UILabel *_groupName;
    UIView *_separator;
    UIImageView *_checkIconView;
    long long _userInterfaceStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(retain, nonatomic) UIImageView *checkIconView; // @synthesize checkIconView=_checkIconView;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *groupName; // @synthesize groupName=_groupName;
- (id)getColorProxy;
- (void)isCheckIconViewChecked:(_Bool)arg1;
- (void)unToggle;
- (void)toggle;
- (void)updateWithGroupName:(id)arg1 isLastLine:(_Bool)arg2 userInterfaceStyle:(long long)arg3;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

