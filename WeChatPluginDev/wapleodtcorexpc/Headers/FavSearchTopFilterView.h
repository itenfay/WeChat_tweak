//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray;
@protocol FavSearchTopFilterViewDelegate;

@interface FavSearchTopFilterView
{
    NSArray *m_types;
    NSArray *m_tags;
    NSMutableArray *m_titles;
    id <FavSearchTopFilterViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavSearchTopFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onExtendPanel:(id)arg1;
- (void)onClickBtn:(id)arg1;
- (void)updateView;
- (void)setTags:(id)arg1;
- (void)setTypes:(id)arg1;
- (void)updateWithWidth:(double)arg1;
- (id)initWithWidth:(double)arg1;

@end

