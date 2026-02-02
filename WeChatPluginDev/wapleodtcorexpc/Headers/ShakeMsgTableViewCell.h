//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, ShakeMsgItem, UILabel;

@interface ShakeMsgTableViewCell
{
    MMWebImageView *oThumbImageView;
    UILabel *oTitleLabel;
    UILabel *oDescLabel;
    UILabel *oTimeLabel;
    ShakeMsgItem *oMsgItem;
}

+ (double)heightForShakeMsgItem:(id)arg1 withCellSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initCellView;
- (void)showEdit:(_Bool)arg1;
- (id)initWithShakeMsgItem:(id)arg1 withCellSize:(struct CGSize)arg2;

@end

