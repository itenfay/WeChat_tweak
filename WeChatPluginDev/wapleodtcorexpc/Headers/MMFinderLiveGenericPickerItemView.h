//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveGenericPickerItem, UIImageView, UILabel;

@interface MMFinderLiveGenericPickerItemView : UIView
{
    MMFinderLiveGenericPickerItem *_item;
    UILabel *_nameLabel;
    UIImageView *_imgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMFinderLiveGenericPickerItem *item; // @synthesize item=_item;
- (void)layoutSubviews;
- (void)setupUI;

@end

