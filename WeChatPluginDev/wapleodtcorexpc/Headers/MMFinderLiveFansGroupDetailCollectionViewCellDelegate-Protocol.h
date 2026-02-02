//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveFansGroupDetailCollectionViewCell, NSString, UIImage, UIView;

@protocol MMFinderLiveFansGroupDetailCollectionViewCellDelegate <NSObject>
- (void)detailCollectionViewCell:(MMFinderLiveFansGroupDetailCollectionViewCell *)arg1 onViewImageWithURLString:(NSString *)arg2 image:(UIImage *)arg3 sourceImageView:(UIView *)arg4;
- (void)detailCollectionViewCell:(MMFinderLiveFansGroupDetailCollectionViewCell *)arg1 didModifyFansGroupReserveLive:(_Bool)arg2;
@end

