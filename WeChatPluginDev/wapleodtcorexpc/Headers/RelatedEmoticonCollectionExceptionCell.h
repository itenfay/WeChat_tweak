//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUIActivityIndicatorView, NSString, UILabel;

@interface RelatedEmoticonCollectionExceptionCell : UICollectionViewCell
{
    _Bool _loading;
    NSString *_wording;
    MMUIActivityIndicatorView *_indicatorView;
    UILabel *_wordingLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *wordingLabel; // @synthesize wordingLabel=_wordingLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
- (void)refreshView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

