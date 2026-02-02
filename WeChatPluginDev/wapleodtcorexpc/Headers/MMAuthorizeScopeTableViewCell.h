//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel;

@interface MMAuthorizeScopeTableViewCell : UITableViewCell
{
    UIImageView *_selectImage;
    UILabel *_scopeLabel;
    _Bool _isMustSelect;
    _Bool _isSelect;
    NSString *_scopeDescription;
}

+ (double)viewHeightWithScopeText:(id)arg1 cellWidth:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(nonatomic) _Bool isMustSelect; // @synthesize isMustSelect=_isMustSelect;
@property(retain, nonatomic) NSString *scopeDescription; // @synthesize scopeDescription=_scopeDescription;
- (void)layoutSubviews;
- (void)updateScopeLabel;
- (void)upadteSelectImage;
- (void)updateView;

@end

