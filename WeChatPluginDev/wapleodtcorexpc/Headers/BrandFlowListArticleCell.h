//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class BrandFlowListBaseCellModel, MMWebViewController;

@interface BrandFlowListArticleCell : UITableViewCell
{
    MMWebViewController *_webviewVc;
    BrandFlowListBaseCellModel *_cellModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BrandFlowListBaseCellModel *cellModel; // @synthesize cellModel=_cellModel;
@property(nonatomic) __weak MMWebViewController *webviewVc; // @synthesize webviewVc=_webviewVc;
- (void)layoutSubviews;

@end

