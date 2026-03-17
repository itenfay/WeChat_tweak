//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData;
@protocol MMFinderLivePkWinningConditionArguments;

@protocol MMFinderLivePkWinningConditionArguments <NSObject>
@property(readonly, nonatomic) NSData *serializedArguments;
- (_Bool)areArgumentsEqualTo:(id <MMFinderLivePkWinningConditionArguments>)arg1;
@end

