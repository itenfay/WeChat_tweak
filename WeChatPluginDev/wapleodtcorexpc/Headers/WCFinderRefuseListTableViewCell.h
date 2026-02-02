//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel, UIView, WCFinderHeadImageView;

@interface WCFinderRefuseListTableViewCell
{
    UILabel *_nickName;
    WCFinderHeadImageView *_headImageView;
    UIView *_separator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UILabel *nickName; // @synthesize nickName=_nickName;
- (void)setupDeleteMenu;
- (void)setupRevertMenu;
- (void)showSeparator:(_Bool)arg1;
- (void)updateWithContact:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

