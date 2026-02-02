//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, NSMutableArray;

@interface BTRecoFlowTopicBigPictureCell
{
    MMWebImageView *_coverView;
    NSMutableArray *_webImageViewList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *webImageViewList; // @synthesize webImageViewList=_webImageViewList;
@property(retain, nonatomic) MMWebImageView *coverView; // @synthesize coverView=_coverView;
- (void)updateWithAggregationTitle:(id)arg1 recommendTag:(id)arg2 recommendWording:(id)arg3 itemMessage:(id)arg4 cellWidth:(double)arg5 friendSeenHeadImgUrl:(id)arg6 iconType:(unsigned int)arg7;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

