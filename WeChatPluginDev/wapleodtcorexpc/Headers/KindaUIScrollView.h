//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@interface KindaUIScrollView : UIScrollView
{
    _Bool _isHorizontal;
    _Bool _showsScrollIndicator;
    _Bool _scrollWhenViewSizeEnough;
}

@property(nonatomic) _Bool scrollWhenViewSizeEnough; // @synthesize scrollWhenViewSizeEnough=_scrollWhenViewSizeEnough;
@property(nonatomic) _Bool showsScrollIndicator; // @synthesize showsScrollIndicator=_showsScrollIndicator;
@property(nonatomic) _Bool isHorizontal; // @synthesize isHorizontal=_isHorizontal;
- (void)addSubview:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

