//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel;

@interface MMFinderLiveTableStyleAudienceSubmitOrderCommentPubbleCell : NSObject
{
    UIImageView *_iconView;
    UILabel *_buttonLabel;
}

+ (struct CGSize)preferSizeForCellFrame:(id)arg1;
@property(retain, nonatomic) UILabel *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void)didMoveToWindow;
- (void)layoutCommentLabel;
- (void)layoutUI;
- (_Bool)isUITypeValid;
- (id)initWithCellFrame:(id)arg1;

@end

