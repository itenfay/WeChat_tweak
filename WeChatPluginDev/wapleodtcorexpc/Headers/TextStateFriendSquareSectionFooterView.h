//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class UIView;

@interface TextStateFriendSquareSectionFooterView : UICollectionReusableView
{
    double _beginX;
    UIView *_separatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) double beginX; // @synthesize beginX=_beginX;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

