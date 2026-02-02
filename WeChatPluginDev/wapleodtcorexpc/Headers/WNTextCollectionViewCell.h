//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface WNTextCollectionViewCell : UICollectionViewCell
{
    UIView *_containerView;
    UIView *_textView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)initSubView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

