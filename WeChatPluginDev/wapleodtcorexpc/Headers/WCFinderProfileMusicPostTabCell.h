//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UIButton;
@protocol WCFinderProfileMusicPostTabCellDelegate;

@interface WCFinderProfileMusicPostTabCell : UICollectionViewCell
{
    unsigned int _options;
    id <WCFinderProfileMusicPostTabCellDelegate> _delegate;
    UIButton *_postBtn;
    UIButton *_manageBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *manageBtn; // @synthesize manageBtn=_manageBtn;
@property(retain, nonatomic) UIButton *postBtn; // @synthesize postBtn=_postBtn;
@property(nonatomic) __weak id <WCFinderProfileMusicPostTabCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int options; // @synthesize options=_options;
- (void)onManageBtnClick;
- (void)onPostBtnClick;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

