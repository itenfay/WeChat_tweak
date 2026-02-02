//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ICBatchFetchingContext : NSObject
{
    _Bool _isFetching;
}

@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
- (void)completeBatchFetching:(_Bool)arg1;
- (void)beginBatchFetching;
- (_Bool)shouldFetchBatch:(struct CGRect)arg1 contentSize:(struct CGSize)arg2 targetOffset:(struct CGPoint)arg3 contentInset:(struct UIEdgeInsets)arg4 adjustContentInset:(struct UIEdgeInsets)arg5 leadingScreens:(double)arg6 visible:(_Bool)arg7 velocity:(struct CGPoint)arg8;
- (_Bool)shouldFetchBatch:(id)arg1 leadingScreens:(double)arg2 contentOffset:(struct CGPoint)arg3 velocity:(struct CGPoint)arg4;

@end

