//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GCCollectionWaterfallLayout, NSIndexPath, NSString;

@protocol GCCollectionWaterfallLayoutProtocol <NSObject>
- (double)collectionViewLayout:(GCCollectionWaterfallLayout *)arg1 heightForSupplementaryViewAtIndexPath:(NSIndexPath *)arg2;
- (struct CGSize)collectionViewLayout:(GCCollectionWaterfallLayout *)arg1 sizeForItemAtIndexPath:(NSIndexPath *)arg2;
- (NSString *)supplementaryViewKindAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)shouldAddSpaceForNormalItemAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)shouldUseCustomLayoutForItemAtIndexPath:(NSIndexPath *)arg1;
@end

