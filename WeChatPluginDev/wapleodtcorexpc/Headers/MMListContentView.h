//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIStackView;
@protocol MMListContentDataSource, MMListContentUIDelegate;

@interface MMListContentView : UIView
{
    id <MMListContentDataSource> _dataSource;
    id <MMListContentUIDelegate> _uiDelegate;
    UIStackView *_bkgStack;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIStackView *bkgStack; // @synthesize bkgStack=_bkgStack;
@property(nonatomic) __weak id <MMListContentUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
@property(nonatomic) __weak id <MMListContentDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)cellWithConfig:(id)arg1;
- (void)addCells;
- (void)initbkgStack;
- (id)initWithDataSource:(id)arg1 uiDelegate:(id)arg2;

@end

