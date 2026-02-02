//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIView, WCFinderFeedContentVM;

@interface _TtC6WeChat30WCFinderSeeLaterStateModParams : NSObject
{
    MISSING_TYPE *tipsContainerView;
    MISSING_TYPE *tipsForbidJumpToLongVideo;
    MISSING_TYPE *showTipsAfterSuc;
    MISSING_TYPE *contentVM;
    MISSING_TYPE *seeLaterState;
    MISSING_TYPE *disableTips;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithContentVM:(id)arg1;
@property(nonatomic) _Bool disableTips; // @synthesize disableTips;
@property(nonatomic) _Bool seeLaterState; // @synthesize seeLaterState;
@property(nonatomic, retain) WCFinderFeedContentVM *contentVM; // @synthesize contentVM;
@property(nonatomic) _Bool showTipsAfterSuc; // @synthesize showTipsAfterSuc;
@property(nonatomic) _Bool tipsForbidJumpToLongVideo; // @synthesize tipsForbidJumpToLongVideo;
@property(nonatomic, retain) UIView *tipsContainerView; // @synthesize tipsContainerView;

@end

