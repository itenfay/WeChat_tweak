//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray;
@protocol WAMenuHeaderTagsViewDelegate;

@interface WAMenuHeaderTagsView
{
    id <WAMenuHeaderTagsViewDelegate> _delegate;
    long long _maxWidth;
    NSArray *_tagItemList;
    NSMutableArray *_tagButtonList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *tagButtonList; // @synthesize tagButtonList=_tagButtonList;
@property(copy, nonatomic) NSArray *tagItemList; // @synthesize tagItemList=_tagItemList;
@property(nonatomic) long long maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) __weak id <WAMenuHeaderTagsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)generateTagView:(id)arg1;
- (double)tagViewMaxWidth;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithTagItemListIfNeeded:(id)arg1;

@end

