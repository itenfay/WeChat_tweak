//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GCClvMgrEasyInitConfig : NSObject
{
    _Bool _supportLongPress;
    long long _scrollDirection;
    struct CGSize _itemSize;
    struct CGRect _scrollViewFrame;
    struct UIEdgeInsets _sectionInset;
}

+ (id)viewMgrWithInitConfig:(id)arg1 pagingNumItem:(int)arg2;
@property(nonatomic) _Bool supportLongPress; // @synthesize supportLongPress=_supportLongPress;
@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic) struct CGRect scrollViewFrame; // @synthesize scrollViewFrame=_scrollViewFrame;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;

@end

