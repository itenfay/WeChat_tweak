//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, UIView;

@interface MMMusicPostVideoTabBaseController : NSObject
{
    UIView *_contentView;
    _Bool _isActive;
    MMUIViewController *_viewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
- (id)generatePreviewDataSource;
- (void)viewWillAppear:(_Bool)arg1;
- (void)layoutWithFrame:(struct CGRect)arg1;
- (_Bool)updateDataSelectedStatusByUniqueId:(id)arg1;
- (void)updateDataSelectedStatus;
- (void)updateCurrEposideDuration:(double)arg1;
- (void)setCurrEposideDuration:(double)arg1;
- (void)onSwitchToThisPage:(_Bool)arg1;
- (id)arrPanGestures;
- (id)contentView;
- (id)initWithViewController:(id)arg1;

@end

