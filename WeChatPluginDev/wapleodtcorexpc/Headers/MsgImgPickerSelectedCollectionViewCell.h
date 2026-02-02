//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class SimpleMsgInfo, UIImageView;

@interface MsgImgPickerSelectedCollectionViewCell : UICollectionViewCell
{
    _Bool _isShowBorder;
    UIImageView *_imageView;
    SimpleMsgInfo *_msgInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SimpleMsgInfo *msgInfo; // @synthesize msgInfo=_msgInfo;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool isShowBorder; // @synthesize isShowBorder=_isShowBorder;

@end

