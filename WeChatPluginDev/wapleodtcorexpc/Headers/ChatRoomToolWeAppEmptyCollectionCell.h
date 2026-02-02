//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUIImageView, MMUILabel;

@interface ChatRoomToolWeAppEmptyCollectionCell : UICollectionViewCell
{
    MMUIImageView *m_imageView;
    MMUILabel *m_titleLabel;
}

+ (double)getCellHeight;
- (void).cxx_destruct;
- (void)initTitleLabel;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

