//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMHeadImageView, OldAccountContact, UIButton, UILabel, UIView;
@protocol ContactsImportTableViewCellDelegate;

@interface ContactsImportTableViewCell : UITableViewCell
{
    OldAccountContact *_oldAccountContact;
    id <ContactsImportTableViewCellDelegate> _delegate;
    MMHeadImageView *_headImageView;
    UILabel *_nicknameLabel;
    UIButton *_addButton;
    UILabel *_addedLabel;
    UIView *_separatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *addedLabel; // @synthesize addedLabel=_addedLabel;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) __weak id <ContactsImportTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) OldAccountContact *oldAccountContact; // @synthesize oldAccountContact=_oldAccountContact;
- (void)onTapAddButton;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

