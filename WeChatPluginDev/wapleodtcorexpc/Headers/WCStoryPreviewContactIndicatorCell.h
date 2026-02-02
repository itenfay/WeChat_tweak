//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMCPLabel, MMHeadImageView;

@interface WCStoryPreviewContactIndicatorCell : UICollectionViewCell
{
    MMHeadImageView *_headImageView;
    MMCPLabel *_usernameLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMCPLabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void)setContact:(id)arg1;

@end

