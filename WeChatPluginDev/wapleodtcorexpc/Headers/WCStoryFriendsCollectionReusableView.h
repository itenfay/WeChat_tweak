//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMUILabel, NSString;

@interface WCStoryFriendsCollectionReusableView : UICollectionReusableView
{
    NSString *_title;
    MMUILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

