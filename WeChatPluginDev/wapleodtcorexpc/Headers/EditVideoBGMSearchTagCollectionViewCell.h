//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel;

@interface EditVideoBGMSearchTagCollectionViewCell : UICollectionViewCell
{
    NSString *_tagName;
    UILabel *_tagLabel;
}

+ (struct CGSize)sizeForItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
- (void)updataWithItem:(id)arg1;
- (void)addTagNameLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

