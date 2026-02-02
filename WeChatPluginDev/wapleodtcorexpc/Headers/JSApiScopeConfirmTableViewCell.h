//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel;

@interface JSApiScopeConfirmTableViewCell : UITableViewCell
{
    UIImageView *_selectImage;
    UILabel *_scopeLabel;
    _Bool _isMustSelect;
    _Bool _isSelect;
    NSString *_scopeDescription;
}

+ (unsigned long long)verticalMarginWithWidth:(unsigned long long)arg1;
+ (unsigned long long)viewHeightWithScopeText:(id)arg1 width:(unsigned long long)arg2;
+ (void)layoutScopeLabel:(id)arg1 width:(unsigned long long)arg2 getHeight:(unsigned long long *)arg3;
+ (id)getScopeLabel;
- (void).cxx_destruct;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(nonatomic) _Bool isMustSelect; // @synthesize isMustSelect=_isMustSelect;
@property(retain, nonatomic) NSString *scopeDescription; // @synthesize scopeDescription=_scopeDescription;
- (void)layoutScopeLabel:(id)arg1 width:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)updateScopeLabel;
- (void)upadteSelectImage;
- (void)updateView;

@end

