//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMCellTapGestureRecognizer, MMUILabel, NSString, UIImageView, UIStackView;

@interface MMCellLikeCollectionViewCell : UICollectionViewCell
{
    NSString *_title;
    MMUILabel *_titleLabel;
    UIImageView *_arrowImageView;
    UIStackView *_stackView;
    CDUnknownBlockType _tapHandler;
    MMCellTapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMCellTapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(copy, nonatomic) CDUnknownBlockType tapHandler; // @synthesize tapHandler=_tapHandler;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)onTap:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)initSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

