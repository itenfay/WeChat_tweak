//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLivePkTaskedBonusModel;

@protocol MMFinderLivePkTaskedBonusStateDescriptor <NSObject>
@property(readonly, nonatomic) _Bool enableGiftingForAudience;
@property(readonly, nonatomic) Class contentViewClass;
@property(readonly, nonatomic) Class backgroundViewClass;
@property(readonly, nonatomic) _Bool isVisual;
- (Class)projectedNextStateClassForModel:(MMFinderLivePkTaskedBonusModel *)arg1;
@end

