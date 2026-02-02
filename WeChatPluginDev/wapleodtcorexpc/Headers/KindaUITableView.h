//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface KindaUITableView
{
    NSMutableDictionary *_heightAtIndexPath;
    struct CGRect _oldRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *heightAtIndexPath; // @synthesize heightAtIndexPath=_heightAtIndexPath;
@property(nonatomic) struct CGRect oldRect; // @synthesize oldRect=_oldRect;
- (void)reloadData;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

