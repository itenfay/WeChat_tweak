//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTFinderRecommendRedPacketView, CAGradientLayer;

@interface BTFixedReaderStyleFinderItemView
{
    BTFinderRecommendRedPacketView *_redPacketView;
    CAGradientLayer *_maskLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) BTFinderRecommendRedPacketView *redPacketView; // @synthesize redPacketView=_redPacketView;
- (void)layoutCoverContainerView:(id)arg1;
- (void)setupCoverContainer:(id)arg1;
- (void)setupHeader:(id)arg1;

@end

