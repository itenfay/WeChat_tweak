//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIScrollView;

@interface WCFinderScrollViewLimitSize : NSObject
{
    UIScrollView *_scrollView;
    struct CGSize _minsize;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) struct CGSize minsize; // @synthesize minsize=_minsize;
- (void)_onScrollViewSetContentSize:(struct CGSize)arg1 originImp:(CDUnknownFunctionPointerType)arg2;
- (void)configScrollView:(id)arg1;

@end

