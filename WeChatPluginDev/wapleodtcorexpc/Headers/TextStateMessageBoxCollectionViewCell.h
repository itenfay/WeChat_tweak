//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMHeadImageView, MMUILabel, NSMutableArray, UIStackView;

@interface TextStateMessageBoxCollectionViewCell : UICollectionViewCell
{
    CDUnknownBlockType _messageBoxTapAction;
    MMHeadImageView *_headImageView;
    MMUILabel *_messageLabel;
    NSMutableArray *_headImageViews;
    UIStackView *_headImageStackView;
    UIStackView *_rootStackView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIStackView *rootStackView; // @synthesize rootStackView=_rootStackView;
@property(retain, nonatomic) UIStackView *headImageStackView; // @synthesize headImageStackView=_headImageStackView;
@property(retain, nonatomic) NSMutableArray *headImageViews; // @synthesize headImageViews=_headImageViews;
@property(retain, nonatomic) MMUILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(copy, nonatomic) CDUnknownBlockType messageBoxTapAction; // @synthesize messageBoxTapAction=_messageBoxTapAction;
- (void)configWith:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

