//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString;

@interface WCAdCardMultiProductsScreenOneView
{
    NSString *_title;
    NSString *_desc;
    MMUILabel *_titleView;
    MMUILabel *_descView;
    struct CGPoint _titleOriCenter;
    struct CGPoint _descOriCenter;
}

+ (id)getDescColorAgainstTitle:(id)arg1;
+ (id)getDescFontAgainstTitle:(id)arg1;
+ (double)calcHeightWithTitle:(id)arg1 desc:(id)arg2 maxWidth:(double)arg3;
- (void).cxx_destruct;
@property(nonatomic) struct CGPoint descOriCenter; // @synthesize descOriCenter=_descOriCenter;
@property(nonatomic) struct CGPoint titleOriCenter; // @synthesize titleOriCenter=_titleOriCenter;
@property(retain, nonatomic) MMUILabel *descView; // @synthesize descView=_descView;
@property(retain, nonatomic) MMUILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)getObjectsToAppear;
- (id)getObjectsToDisappear;
- (void)resizeSubviewsWithSize:(struct CGSize)arg1;
- (void)generateSubviews;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 desc:(id)arg3;

@end

