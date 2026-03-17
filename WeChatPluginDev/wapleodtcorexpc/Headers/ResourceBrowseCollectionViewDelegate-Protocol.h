//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, ResourceBrowseCollectionView;

@protocol ResourceBrowseCollectionViewDelegate <NSObject>
- (MMUIViewController *)onResourceBrowseCollectionViewGetParentUIViewController;
- (void)onResourceBrowseCollectionViewSelectChange:(ResourceBrowseCollectionView *)arg1;

@optional
- (_Bool)wouldResponseToResourceBrowseCollectionViewClickRecordMsg;
@end

