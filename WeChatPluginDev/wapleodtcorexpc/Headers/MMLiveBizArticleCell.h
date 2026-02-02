//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class BizAppMsgDetailInfo, MMUILabel, MMWebImageView;

@interface MMLiveBizArticleCell : UITableViewCell
{
    BizAppMsgDetailInfo *_article;
    MMUILabel *_titleLabel;
    MMUILabel *_datetimeLabel;
    MMWebImageView *_thumbnailImageView;
}

+ (double)heightForArticle:(id)arg1;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) MMUILabel *datetimeLabel; // @synthesize datetimeLabel=_datetimeLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) BizAppMsgDetailInfo *article; // @synthesize article=_article;
- (void)layoutSubviews;
- (void)articleDidUpdate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

