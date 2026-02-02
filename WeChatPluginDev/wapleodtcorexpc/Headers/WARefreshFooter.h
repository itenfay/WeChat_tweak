//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WARefreshFooter
{
    double _ignoredScrollViewContentInsetBottom;
}

+ (id)footerWithRefreshingBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) double ignoredScrollViewContentInsetBottom; // @synthesize ignoredScrollViewContentInsetBottom=_ignoredScrollViewContentInsetBottom;
- (void)resetNoMoreData;
- (void)noticeNoMoreData;
- (void)endRefreshingWithNoMoreData;
- (void)prepare;

@end

