//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface MMQuickSendEmoticonSearchCellView : UIView
{
    UIView *_bgView;
    UIImageView *_searchIcon;
    UILabel *_searchHintLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *searchHintLabel; // @synthesize searchHintLabel=_searchHintLabel;
@property(retain, nonatomic) UIImageView *searchIcon; // @synthesize searchIcon=_searchIcon;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

