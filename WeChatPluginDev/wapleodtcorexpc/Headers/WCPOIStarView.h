//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface WCPOIStarView : NSObject
{
    NSMutableArray *m_arrPOIStars;
    unsigned int _poiScore;
}

@property(nonatomic) unsigned int poiScore; // @synthesize poiScore=_poiScore;
- (void)deSelectStar:(id)arg1;
- (void)onClickStar:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

