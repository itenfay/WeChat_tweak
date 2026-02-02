//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMFinderLiveKTVSeatInviteView;

@interface MMFinderLiveKTVSeatInviteCell : UICollectionViewCell
{
    MMFinderLiveKTVSeatInviteView *_inviteView;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveKTVSeatInviteView *inviteView; // @synthesize inviteView=_inviteView;
- (void)layoutInviteView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

