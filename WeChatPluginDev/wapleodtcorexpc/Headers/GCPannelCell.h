//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCVerticalImgLabelView;

@interface GCPannelCell : NSObject
{
    GCVerticalImgLabelView *_imgLabelView;
}

@property(retain, nonatomic) GCVerticalImgLabelView *imgLabelView; // @synthesize imgLabelView=_imgLabelView;
- (void)configureWithCellModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

