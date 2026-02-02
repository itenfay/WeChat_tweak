//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel;

@interface BTRecoFlowMsgContentBigCell
{
    UILabel *_videoDurationLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *videoDurationLabel; // @synthesize videoDurationLabel=_videoDurationLabel;
- (id)accessibilityLabel;
- (void)configurateMediaIcon:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)bigPlayButtonSize;
- (void)updateWithItemMsg:(id)arg1 cellWidth:(double)arg2;

@end

