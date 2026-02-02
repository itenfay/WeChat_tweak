//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class EmoticonCellLikeButton, NSString, SightIconView, UILabel;
@protocol EmoticonSearchCollectionComponentDelegate;

@interface SearchEmoticonExceptionCell : UICollectionViewCell
{
    _Bool _loading;
    _Bool _enableWebSearch;
    NSString *_wording;
    id <EmoticonSearchCollectionComponentDelegate> _delegate;
    SightIconView *_sightIconView;
    UILabel *_wordingLabel;
    EmoticonCellLikeButton *_webSearchButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonCellLikeButton *webSearchButton; // @synthesize webSearchButton=_webSearchButton;
@property(retain, nonatomic) UILabel *wordingLabel; // @synthesize wordingLabel=_wordingLabel;
@property(retain, nonatomic) SightIconView *sightIconView; // @synthesize sightIconView=_sightIconView;
@property(nonatomic) __weak id <EmoticonSearchCollectionComponentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enableWebSearch; // @synthesize enableWebSearch=_enableWebSearch;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
- (void)onTapWebSearchButton;
- (id)genWebSearchButton;
- (void)refreshView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

