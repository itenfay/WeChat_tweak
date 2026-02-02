//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMHeadImageView, MMUILabel, TextStateModel;

@interface TextStateFriendSquareItemCell : UICollectionViewCell
{
    _Bool _read;
    TextStateModel *_textState;
    MMHeadImageView *_headImageView;
    MMUILabel *_nicknameLabel;
}

+ (struct CGSize)itemSize;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic, getter=isRead) _Bool read; // @synthesize read=_read;
@property(retain, nonatomic) TextStateModel *textState; // @synthesize textState=_textState;
- (void)setHighlighted:(_Bool)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

