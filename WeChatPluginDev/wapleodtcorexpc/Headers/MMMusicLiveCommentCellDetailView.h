//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface MMMusicLiveCommentCellDetailView : UIView
{
    double _maxWidth;
    NSString *_name;
    UILabel *_prefixLabel;
    UILabel *_nameLabel;
    UILabel *_suffixLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *suffixLabel; // @synthesize suffixLabel=_suffixLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *prefixLabel; // @synthesize prefixLabel=_prefixLabel;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
- (void)layoutSubviews;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

