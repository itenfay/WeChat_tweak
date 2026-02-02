//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImageView, UILabel;

@interface WCFinderRedPacketThumbCollectionViewCell : UICollectionViewCell
{
    UIImageView *_cardImgView;
    UILabel *_cardDesc;
    NSString *_currentLoadUrl;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentLoadUrl; // @synthesize currentLoadUrl=_currentLoadUrl;
@property(retain, nonatomic) UILabel *cardDesc; // @synthesize cardDesc=_cardDesc;
@property(retain, nonatomic) UIImageView *cardImgView; // @synthesize cardImgView=_cardImgView;
- (void)layoutAllSubviews;
- (void)updateWithRedPacket:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

