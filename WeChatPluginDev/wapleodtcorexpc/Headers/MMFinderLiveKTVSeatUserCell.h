//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMFinderLiveKTVSeatUserView;

@interface MMFinderLiveKTVSeatUserCell : UICollectionViewCell
{
    MMFinderLiveKTVSeatUserView *_userView;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveKTVSeatUserView *userView; // @synthesize userView=_userView;
- (void)updateUserInfo:(id)arg1;
- (void)layoutUserView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

