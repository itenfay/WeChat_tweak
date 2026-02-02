//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, MMWebImageView;

@interface WCPlayLiveWithoutLoginHeadView : UIView
{
    MMWebImageView *_headImageView;
    MMUILabel *_nicknameLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void)updateViewModel:(id)arg1;
- (void)setup;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

