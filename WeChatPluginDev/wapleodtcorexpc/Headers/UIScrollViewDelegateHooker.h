//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FavBrowseDetailData, NSString;

@interface UIScrollViewDelegateHooker : NSObject
{
    id _originalDelegate;
    FavBrowseDetailData *_browseData;
}

- (void).cxx_destruct;
@property(nonatomic) __weak FavBrowseDetailData *browseData; // @synthesize browseData=_browseData;
@property(nonatomic) __weak id originalDelegate; // @synthesize originalDelegate=_originalDelegate;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (_Bool)respondsToSelector:(SEL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

