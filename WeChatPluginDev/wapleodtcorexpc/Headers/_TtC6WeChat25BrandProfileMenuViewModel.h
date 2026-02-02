//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol _TtP6WeChat33BrandProfileMenuViewModelDelegate_;

@interface _TtC6WeChat25BrandProfileMenuViewModel : NSObject
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *menuWidth;
    MISSING_TYPE *_menuItems;
}

- (void).cxx_destruct;
- (id)init;
- (void)updateWithButtonList:(id)arg1;
- (id)filterButtonList:(id)arg1 isForceButtonHidden:(_Bool)arg2;
@property(nonatomic) double menuWidth; // @synthesize menuWidth;
- (id)generateView;
@property(nonatomic) __weak id <_TtP6WeChat33BrandProfileMenuViewModelDelegate_> delegate; // @synthesize delegate;

@end

