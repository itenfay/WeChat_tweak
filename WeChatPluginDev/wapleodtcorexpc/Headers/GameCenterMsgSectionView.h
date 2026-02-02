//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class MMUILabel, MMUIView;

@interface GameCenterMsgSectionView : UITableViewHeaderFooterView
{
    MMUIView *_lineLeft;
    MMUILabel *_titleView;
    MMUIView *_lineRight;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *lineRight; // @synthesize lineRight=_lineRight;
@property(retain, nonatomic) MMUILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) MMUIView *lineLeft; // @synthesize lineLeft=_lineLeft;
- (void)layoutSubviews;
- (void)setupGameCenterMsgSectionView;
- (id)initWithReuseIdentifier:(id)arg1;

@end

