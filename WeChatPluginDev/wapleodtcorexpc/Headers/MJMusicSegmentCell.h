//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel;

@interface MJMusicSegmentCell : NSObject
{
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setupWithSegmentViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

