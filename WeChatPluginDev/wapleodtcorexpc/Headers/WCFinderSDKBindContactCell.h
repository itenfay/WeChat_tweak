//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, WCFinderAuthorContactView;

@interface WCFinderSDKBindContactCell : UITableViewCell
{
    WCFinderAuthorContactView *_contactView;
    UIImageView *_iconImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) WCFinderAuthorContactView *contactView; // @synthesize contactView=_contactView;
- (void)updateWithContact:(id)arg1;
- (void)setUpUI;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

